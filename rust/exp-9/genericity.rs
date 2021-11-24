
fn test_partial_specialization() {
    struct Point<T> {
        x: T,
        y: T,
    }

    impl<T> Point<T> {
        // impl must have a T
        fn getx(&self) -> &T {
            return &self.x;
        }
    }

    impl Point<f64> {
        fn gex(&self) -> f64 {
            return self.x;
        }
    }
}

fn test_trait() {
    trait Doable {
        fn do_it(&self) -> String {
            return String::from("[defualt]");
        }
    }

    trait Eatable {
        fn eat(&self);
    }

    trait Runable {
        fn run(&self);
    }

    trait Flyable {
        fn fly(&self);
    }

    struct Person {
        name: String,
        age: u8,
    }

    impl Doable for Person {
        fn do_it(&self) -> String {
            return format!("{} can do it", self.name);
        }
    }

    fn cando(obj: impl Doable) {
        println!("{}", obj.do_it());
    }

    // Syntactic sugar
    fn cando_alt<T: Doable>(obj: T) {
        println!("{}", obj.do_it());
    }

    // Syntactic sugar
    fn query<T, U>(obj: T, obj2: U)
    where
        T: Doable + Runable,
        U: Eatable + Flyable,
    {
        obj.run();
        obj2.fly();
        obj2.eat();
        obj.do_it();
    }
}

fn test_cond_impl() {
    trait Up {
        fn up(&self);
    }

    trait Down {
        fn down(&self);
    }

    struct Elevator<T>(T,T);

    impl<T: Up + Down> Elevator<T> {
        fn upanddown(&self) {}
    }
}

/* you can not do this
fn max<T>(arr: &[T]) -> T {
let mut idx = 0;
for i in 0..arr.len() {
if arr[i] > arr[idx] { // this is not allow
idx = i;
}
}
return arr[idx];
}
*/

fn test_max() {
    trait Comparable {
        fn compare(&self, obj: &Self) -> bool;
    }
    fn max<T: Comparable>(arr: &[T]) -> &T {
        let mut idx = 0;
        for i in 0..arr.len() {
            if arr[i].compare(&arr[idx]) {
                idx = i;
            }
        }
        return &arr[idx];
    }
    impl Comparable for i32 {
        fn compare(&self, obj: &Self) -> bool {
            return &self > &obj;
        }
    }
    let a:[i32;5] = [1, 2, 3, 4, 5];
    let ans = max(&a); // should not use `move`
    println!("{}", ans);
}

fn main() {
    test_partial_specialization();
    test_trait();
    test_cond_impl();
    test_max();
}

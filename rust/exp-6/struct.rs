fn test_struct() {
    #[derive(Debug)]
    struct Site {
        domain: String,
        name: String,
        nation: String,
        found: u32,
    }

    struct Point(f64, f64); // defualt name 0, 1

    impl Point {
        // method
        fn add(&mut self) {
            // a mut impl
            self.0 += 1.0;
            self.1 += 1.0;
        }
        //
        fn create(x: f64, y: f64) -> Point {
            return Point(x, y);
        }
    }

    let baidu = Site {
        domain: String::from("www.baidu.com"),
        name: String::from("baidu"),
        nation: String::from("China"),
        found: 2031,
    };
    let mut origin = Point(0.0, 0.0);
    let p1 = Point::create(2.0, 3.0);
    origin.add();
    println!("point is <{},{}>", origin.0, origin.1);
    println!("site is {:?}", baidu);
}

fn test_enum() {
    enum Book {
        A,
        B,
    }

    let b = Book::A;
    match b {
        Book::A => {
            println!("book A");
        }
        Book::B => {
            println!("book B");
        }
        _ => {
            println!("error");
        }
    }
}

fn test_option() {
    let opt = Option::Some("hello");
    let opt_none: Option<&str> = Option::None; // must declare type
    match opt {
        Option::Some(s) => {
            println!("{}", s);
        }
        Option::None => {
            println!("error");
        }
    }
}

fn test_if_let_sugar() {
    let i = 0;
    if let 0 = i {
        println!("zero");
    }
}

fn main() {
    test_struct();
    test_enum();
    test_option();
    test_if_let_sugar();
}

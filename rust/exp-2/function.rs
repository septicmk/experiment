fn add(a: i32, b: i32) -> i32{
    return a+b;
}

fn func() {
    println!("this is func.");
}

fn main() {
    println!("this is main.");
    func();
    println!("3 + 2 = {0}", add(3, 2));
}

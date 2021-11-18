fn test_cond() {
    let a = 12;
    let mut b = 1;
    if a > 0 {
        //no brackets
        b -= 1;
    } else {
        b += 1;
    }
    println!("b is {}", b);
}

fn test_loop() {
    let mut num = 1;
    while num != 4 {
        println!("{}", num);
        num += 1;
    }
    println!("loop over");
}

fn main() {
    test_cond();
    test_loop();
}

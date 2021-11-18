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

fn test_loop_while() {
    let mut num = 1;
    while num != 4 {
        println!("{}", num);
        num += 1;
    }
    println!("loop over");
}

// no for(i=0; i<n; ++i) in rust
fn test_loop_for() {
    let a = [1, 2, 3, 4];
    for i in 0..a.len() {
        println!("a[{}] = {}", i, a[i])
    }
}

// use loop to search
fn test_loop_loop() {
    let s = [1,2,3,4];
    let mut i = 0;
    let loc = loop {
        let ch = s[i];
        if ch == 4 {
            break i;
        }
        i += 1;
    };
    println!("found target={}", loc);
}

fn main() {
    test_cond();
    test_loop_for();
    test_loop_loop();
    test_loop_while();
}

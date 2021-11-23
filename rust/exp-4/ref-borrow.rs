fn test_borrow() {
    let mut s1 = String::from("hello");
    let mut s2 = &s1;
    let mut s3 = s1;
    let s2 = &mut s3; // reborrow
    println!("string is {}", s2);
    //s2.push_str(" world"); //the compiler will complain
    println!("string is {}", s3);
}

fn test_mut_borrow() {
    let mut s1 = String::from("hello");
    let s2 = &mut s1;
    //let s3 = &s1;
    //let s4 = &mut s1;
    let s5 = &s2;
    s2.push_str(" world");
    //s1.push_str(" xx"); // the compiler will complain, is s2 is mutable, s1 is immutable
    //println!("string is {}", s1); // borrow before use
    println!("string is {}", s2);
    //println!("string is {}", s5);
}

//fn test_dangling_ref() -> &String{
//    let s = String::from("hello");
//    return &s;
//}

fn main() {
    test_borrow();
    test_mut_borrow();
    //let s = test_dangling_ref();
}

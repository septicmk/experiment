fn main(){
    // immutable variable
    let a=12;
    // a = 13;

    // mutable variable
    let mut b = 12;
    b=b+1;

    // const, should be uppercase
    const C:i32 = 12;

    // shadowing
    let a=13;
    let a="13";
    
    println!("hello world, a is {0}, b is {1}, and c is {2}", a, b, C);
}

fn test_string_slice() {
    let s = String::from("hello");
    let p1 = &s[0..3];
    let p2 = &s[3..5];
    println!("{}={}+{}", s, p1, p2);
}

fn test_array_slice() {
    let arr = [1, 3, 5, 7, 9];
    let part = &arr[0..3];
    for i in part.iter() {
        println!("{}", i);
    }
}

fn main() {
   test_string_slice();
}

fn test_Vec() {
    let mut empty_vec = Vec::new();
    let mut vector = vec![1, 2, 4, 8];
    vector.push(10);
    empty_vec.append(&mut vector); // append will move
    println!("{:?}", vector);
    println!("{:?}", empty_vec);

    println!(
        "{}",
        match empty_vec.get(10) {
            // may exceed the size
            Some(val) => val.to_string(),
            None => "None".to_string(),
        }
    );
    for x in &mut empty_vec {
        *x += 50;
        println!("{}", x);
    }
}

fn test_String() {
    let s1 = String::from("hello");
    let s2 = String::from("world");
    let s = s1.clone() + " " + &s2;
    println!("{} = {} + {}", s, s1, s2);
}

fn test_Map() {
    use std::collections::HashMap;
    let mut map = HashMap::new();
    map.insert("key", "value");
    for pair in map.iter() {
        println!("{:?}", pair);
    }
}

fn main() {
    test_Vec();
    test_String();
    test_Map();
}

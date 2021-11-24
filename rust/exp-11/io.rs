fn test_stdin() {
    use std::io::stdin;
    let mut str_buf = String::new();
    stdin()
        .read_line(&mut str_buf)
        .expect("failed to read line");
    println!("Your input line is \n{}", str_buf);
}

// read string object
fn test_read_file() {
    use std::fs;
    let text = fs::read_to_string("./text.data").expect("failed to open file");
    //let data = fs::read("./text.data").expect("failed to open file"); // read binary
    println!("{}", text);
}

fn test_buffer_read() {
    use std::fs;
    use std::io::Read;
    let mut buf = [0u8; 5]; // read 5 char
    let mut file = fs::File::open("./text.data").unwrap();
    file.read(&mut buf).unwrap();
    println!("{:?}", buf);
}

fn test_write_file() {
    use std::fs::OpenOptions;
    use std::io::prelude::*;
    let mut file = OpenOptions::new()
        .read(true).append(true).open("./text.data").unwrap();
    file.write(b"From rust");
    let mut buf = [0u8, 100];
    file.read(&mut buf);
    println!("{:?}", buf);
    //fs::write("./text.data", "From rust").unwrap();
}

fn main() {
    test_stdin();
    test_read_file();
    test_buffer_read();
    test_write_file();
}

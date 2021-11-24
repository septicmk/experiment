use std::fs::File;
use std::io;
use std::io::Read;

fn test_open_file() {
    let f = File::open("hello.txt");
    // let f = File::open("hello.text").expect("Failed to open");
    match f {
        Ok(file) => {
            println!("File opened!");
            //do some thing on file
        }
        Err(err) => {
            println!("error");
        }
    }
}

fn test_hand_err_out(i: i32) -> Result<i32, bool> {
    if let 0 = i {
        return Ok(i);
    } else {
        return Err(false);
    }
}

fn test_pass_err_sugar() -> Result<i32, bool> {
    let t = test_hand_err_out(99)?; // extract error
    return Ok(t);
}

fn test_err_kind() {
    fn gen_err() -> Result<String, io::Error> {
        let mut f = File::open("hello.txt")?;
        return Ok(String::from("Hello"));
    }
    let f = gen_err();
    match f {
        Ok(s) => println!("{}", s),
        Err(e) => match e.kind() {
            io::ErrorKind::NotFound => println!("No such file!"),
            _ => println!("cannot read the file"),
        },
    }
}

fn main() {
    test_open_file();

    let r = test_pass_err_sugar();
    if let Ok(v) = r {
        println!("Ok v={}", v);
    } else {
        println!("Error");
    }

    test_err_kind()
}

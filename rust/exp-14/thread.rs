use std::thread;
use std::time::Duration;

fn test_thread() {
    let lmb = |num: i32| -> i32 {
        let val = num + 1;
        println!("num is {}", val);
        return val;
    };

    let t = thread::spawn(move || {
        println!("{}", lmb(2));
    } );

    t.join().unwrap();
}

fn test_message() {
    use std::sync::mpsc;
    let (sender, recver) = mpsc::channel();
    let t = thread::spawn(move || {
        let val = String::from("hi");
        sender.send(val).unwrap();
    });

    let data = recver.recv().unwrap();
    t.join().unwrap();
    println!("master get {}", data);
}

fn main() {
    test_thread();
    test_message();
}

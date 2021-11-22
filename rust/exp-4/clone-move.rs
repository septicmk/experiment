
fn main(){
    {
        //s is agnostic
        let val = 5;
        //the scope of val
    }
    // val is invalid
    // val is free automatically

    // basic type is clone
    {
        println!("Test-1: basic type");
        let x = 5; // basic type just in the stack
        let y = x; 
        println!("x is {}, y is {}", x, y);
    }

    // object addr vs ref addr
    {
        println!("Test-2: addressing");
        // Stack     Heap
        //   s   -> "Test"
        let s = String::from("Test"); // s.as_ptr() is the addr of the obj in the heap
        let s_ref = &s; // the addr of "s" in the stack
        println!("real addr is {:p}", s.as_ptr());
        println!("ref  addr is {:p}", s_ref)
    }

    // move
    {
        println!("Test-3: move");
        let s1 = String::from("hello");
        println!("addr of s1 is {:p}", s1.as_ptr()); 
        let s2 = s1;
        //// s1 now is invalid
        println!("addr of s2 is {:p}", s2.as_ptr());
        // two ptrs point to "hello" in heap
    }

     // clone
    {
        println!("Test-4: clone");
        let s1 = String::from("hello");
        let s2 = s1.clone(); // clone the data in the heap
        println!("addr of s1 is {:p}", s1.as_ptr());  
        println!("addr of s2 is {:p}", s2.as_ptr());
        // two ptrs point to "hello" in heap
    }

}

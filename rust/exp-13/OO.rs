mod test {
    pub struct Example {
        filed: i32,
    }

    impl Example {
        pub fn new(val: i32) -> Example {
            return Example { filed: val };
        }

        pub fn public_method(&self) {
            println!("filed is {}", self.filed);
            self.private_method();
        }

        fn private_method(&self) {
            println!("A private method");
        }
    }
}

fn main() {
    let obj = test::Example::new(22);
    obj.public_method();
}

fn longer<'a>(s1: &'a str, s2: &'a str) -> &'a str {
    if s1.len() > s2.len() {
        return s1;
    } else {
        return s2;
    }
}

fn main() {
    let r;
    {
        let s1 = "rust";
        let s2 = "javascript";
        r = longer(s1, s2);
    }
    println!("{} is longer", r);
}

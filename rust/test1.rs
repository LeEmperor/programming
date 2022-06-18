#[allow(unused_imports)]
use std::cmp::{max, min};
use std::io::{stdin, stdout, BufWriter, Write};

fn main() {
    let mut bruh = String::new();
    stdin()
        .read_line(&mut bruh);

    println!("input: {}", bruh);
}

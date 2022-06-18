// begin prelude

use rand::Rng;
use std::cmp::Ordering;
use std::io;

// end prelude

fn main() {
    let secret = rand::thread_rng().gen_range(1..101);

    loop {
        let mut guess = String::new();

        io::stdin()
            .read_line(&mut guess)
            .expect("failed to read line");

        let guess: u32 = match guess.trim().parse() {
            Ok(num) => num,
            Err(_) => continue,
        };

        match guess.cmp(&secret) {
            Ordering::Less => print!("too small"),
            Ordering::Greater => print!("too big"),
            Ordering::Equal => {
                println!("win");
                break;
            }
        }
    }
}

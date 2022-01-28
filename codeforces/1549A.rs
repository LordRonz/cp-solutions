use std::io;

fn main() {
    let mut input_line = String::new();
    io::stdin()
        .read_line(&mut input_line)
        .expect("Failed to read line");
    let t: i32 = input_line.trim().parse().expect("Input not an integer");
    for _ in 0..t {
        input_line = String::new();
        io::stdin()
            .read_line(&mut input_line)
            .expect("Failed to read line");
        let n: i32 = input_line.trim().parse().expect("Input not an integer");
        println!("2 {}", n - 1);
    }
}

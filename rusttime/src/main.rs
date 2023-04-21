use std::time::{Duration, Instant};
use std::thread::sleep;

fn main() {
   let start = Instant::now();

   // we sleep for 10 seconds "threads"
   sleep(Duration::new(10, 0));

   let end = Instant::now();
   let elapsed = end - start;
   println!("Time taken {:.6} seconds", elapsed.as_secs_f64());
}
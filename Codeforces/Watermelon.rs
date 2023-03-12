use std::io;
fn main(){
	let mut w = String::new();
    io::stdin()
        .read_line(&mut w)
        .expect("failed to read input.");
    let w: i128 = w.trim().parse().expect("invalid input");
	if w%2==0&&w>=4 {
		print!("YES");
	}
	else{
		print!("NO");
	}
}
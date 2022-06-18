import java.util.*;
import java.io.*;

public class divmod {
	public static int solve(int l, int r, int a) {
		int bruh = 0;
		for(int i = r; i >  0; i--) {
			System.out.println("index i: " + i);
			if(i - 1 % a == 0) {
				}
			else {
				bruh = i - 1;
				break;
			}
		}
		System.out.println("bruh: " + bruh);
		int answer = (bruh / 2) + (bruh % a);
		return answer; 
	}
	public static void main(String[] args) throws Exception {
		Scanner in = new Scanner(System.in);
		int testcases = in.nextInt();

		for(int i = 0; i < testcases; i++) {
			int l, r, a;

			l = in.nextInt();
			r = in.nextInt();
			a = in.nextInt();
			
			System.out.println(String.format("l: %d r: %d a: %d", l, r, a));
			System.out.println("answeR: " + solve(l, r, a));
		}
	}
}


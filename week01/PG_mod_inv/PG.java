import java.io.*;
import java.util.*;
import java.lang.*;
import java.math.*;

class PG {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		for(int rnd = sc.nextInt(); rnd>0; rnd--) {
			BigInteger n, m;
			n = sc.nextBigInteger();
			m = sc.nextBigInteger();
			if(n.gcd(m).compareTo(BigInteger.ONE)>0) {
				System.out.println("-1");
			}
			else {
				System.out.println(n.modInverse(m).toString());
			}
		}
	}
}

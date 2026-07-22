/*
  https://codeforces.com/problemset/problem/22/A
*/

import java.lang.reflect.Array;
import java.util.Arrays;
import java.util.Scanner;

public class problem20 {

	public static void main(String[] args) {
		int n;
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt();
		int [] arr = new int[n];
		for(int i = 0; i<n; i++) {
			arr[i] = sc.nextInt();
		}
		
		Arrays.sort(arr);
		boolean flag = true;
		for(int i=0;i<n-1;i++) {
			if(arr[i]!=arr[i+1]) {
				System.out.println(arr[i+1]);
				flag = false;
				break;
			}
		}
		if(flag) System.out.println("NO");
	}

}
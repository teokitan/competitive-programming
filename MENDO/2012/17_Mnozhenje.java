import java.math.BigInteger;
import java.util.Arrays;
import java.util.Collections;
import java.util.Scanner;
import java.util.Vector;
 
public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
 
        int niza[] = new int[10];
 
        for (int i = 0; i<9; i++) {
            niza[i] = s.nextInt();
        }
 
        Vector<Integer> vec = new Vector<>();
 
        for (int i = 0; i<9; i++) {
            for (int j = 0; j<niza[i]; j++) {
                vec.add(i+1);
            }
        }
 
        Collections.reverse(vec);
 
        String a,b;
 
        a = "";
        a += vec.get(0);
        b = "";
 
        for (int i = 1; i<vec.size(); i++) {
            if (a.length() < b.length()) {
                a += vec.get(i);
            } else if (a.length() > b.length()) {
                b += vec.get(i);
            } else {
                if (a.compareTo(b) <= 0) {
                    a += vec.get(i);
                } else {
                    b += vec.get(i);
                }
            }
        }
 
        BigInteger aB = new BigInteger(a);
        BigInteger bB = new BigInteger(b);
 
        BigInteger res = aB.multiply(bB);
 
        //0 0 2 1 0 0 0 0 0
 
        System.out.println(res);
    }
}
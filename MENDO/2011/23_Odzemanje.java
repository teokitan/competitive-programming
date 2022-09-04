import java.math.BigInteger;
import java.util.Arrays;
import java.util.Scanner;
 
public class Main {
 
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
 
        String str = s.next();
 
        String max,min;
 
        max = min = "";
 
        char[] strChar = str.toCharArray();
 
        Arrays.sort(strChar);
 
        min = new String (strChar);
 
        for (int i = str.length()-1; i>=0; i--) {
            max += min.charAt(i);
        }
 
        BigInteger res1 = new BigInteger(max);
        BigInteger res2 = new BigInteger(min);
 
        BigInteger res3 = res1.subtract(res2);
 
        System.out.println(res3);
    }
}
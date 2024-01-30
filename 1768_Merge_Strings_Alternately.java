import java.util.*;
import java.util.Arrays;
import java.util.Collections;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
      String word1;
        Scanner sc = new Scanner(System.in);
        System.out.println("take 1st String");
        word1 = sc.nextLine();
        System.out.println("take 2nd String");
        String word2;
        word2 = sc.nextLine();
        String mergedString = mergeStrings(word1, word2);
        System.out.println("Output: " + mergedString);
    }
    public static String mergeStrings(String word1, String word2) {
        String s3 = word1.toLowerCase();
        String s4 = word2.toLowerCase();
        int w1 = s3.length();
        int w2 = s4.length();
        String result = "";
        int j = 0;
        int k = 0;

        for (int i = 0; i < w1 + w2; i++) {
            if (i % 2 == 0 && j < w1) {
                result += s3.charAt(j);
                j++;
            } else if (k < w2) {
                result += s4.charAt(k);
                k++;
            }
        }
        System.out.println(result);
        System.out.println("j ="+j+"k = "+k);
        System.out.println("w1 = "+w1+"w2 = "+w2);
        while (j < w1) {
            result += s3.charAt(j);
            j++;
        }

        while (k < w2) {
            result += s4.charAt(k);
            k++;
        }

        return result;
    }
}

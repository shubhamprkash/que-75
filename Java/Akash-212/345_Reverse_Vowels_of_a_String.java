import java.util.*;
public class leetcode75 {
    public static void main(String[] args) {
       String s;
        System.out.println("take any String");
        Scanner sc=new Scanner(System.in);
        s=sc.nextLine();
        String vowels="aeiouAEIOU";
        String n="";
        List<Integer> lis = new ArrayList<>();
        for(int i=0;i<s.length();i++){
            for(int j=0;j<vowels.length();j++){
                if(s.charAt(i)==vowels.charAt(j)){
                    n+=s.charAt(i);
                    lis.add(i);
                    break;
                }
            }
        }
        System.out.println("the vowels of the main string = "+n);
        System.out.println("the position of the vowels are "+ lis);
        String rev="";
        for(int i=n.length()-1;i>=0;i--){
            rev+=n.charAt(i);
        }
        System.out.println("the reverse string is = "+rev);
        StringBuilder sb = new StringBuilder(s);
        int k=0;
        for (int i : lis) {
            sb.setCharAt(i, rev.charAt(k));
            k++;
        }
        s = sb.toString();
        System.out.println("String after  reverse the vowels = "+s);
    }
}

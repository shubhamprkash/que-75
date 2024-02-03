import java.util.*;
public class leetcode75 {
    public static void main(String[] args) {
        int n;
        System.out.println("take the size of the array ");
        Scanner sc=new Scanner (System.in);
        n=sc.nextInt();
        System.out.println("take the array in a sorted manner ");
        int arr[]=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        System.out.println("the array we have take is = "+Arrays.toString(arr));
        System.out.println("enter the extra chocolate amount ");
        int num=sc.nextInt();
        List<Boolean> lis=new ArrayList<>();
        int maxCandies = Integer.MIN_VALUE;
        for (int candy : arr) {
            maxCandies = Math.max(maxCandies, candy);
        }
        System.out.println("maximum value is = "+maxCandies);
        for (int goc : arr) {
            lis.add(goc+num>=maxCandies);
        }
        System.out.println(lis);
    }
}

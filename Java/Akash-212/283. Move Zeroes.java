class Solution {
    public void moveZeroes(int[] arr) {
        int n=arr.length;
        //        List<Integer>lis=new ArrayList<>();
//        List<Integer>lis1=new ArrayList<>();
//        for(int i=0;i<n;i++){
//            if(arr[i]==0){
//                lis.add(arr[i]);
//            }
//            else{
//                lis1.add(arr[i]);
//            }
//        }
//        ArrayList<Integer> merge = new ArrayList<Integer>();
//        merge.addAll(lis1);
//        merge.addAll(lis);
//        System.out.println("The final result is = "+merge);
         int pos=0;
        for(int arr1:arr){
            if(arr1!=0){
                arr[pos]=arr1;
                pos++;
            }
        }
        while(pos<n){
            arr[pos]=0;
            pos++;
        }
        System.out.println(Arrays.toString(arr));
    }
}

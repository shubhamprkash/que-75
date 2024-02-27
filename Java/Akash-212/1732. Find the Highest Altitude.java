class Solution {
    public int largestAltitude(int[] arr) {
        List<Integer>lis=new ArrayList<>();
        lis.add(0);
         int j=0;
        for(int i=0;i<arr.length;i++){
            int addvalue=0;
            addvalue+= lis.get(j)+arr[i];
            j++;
            lis.add(addvalue);
        }
        System.out.println("the altitudes are :"+lis);
        int max=Collections.max(lis);
        return max;
    }
}

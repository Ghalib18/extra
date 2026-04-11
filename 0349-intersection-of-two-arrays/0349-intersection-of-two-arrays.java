class Solution {
    public int[] intersection(int[] num1, int[] num2) {
        Set<Integer> st1=new HashSet<>();
        Set<Integer> st2=new HashSet<>();

        for(int x: num1){
            st1.add(x);
        }
        for(int x:num2){
            if(st1.contains(x)){
                st2.add(x);
            }
        }
        int n=st2.size();
        int[] arr=new int[n];
        int i=0;
        for(Integer x:st2){
           arr[i]=x;
           i++;
        }
        return arr;
    }
}
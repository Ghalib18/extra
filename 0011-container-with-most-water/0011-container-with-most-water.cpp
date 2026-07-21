class Solution {
public:
    int maxArea(vector<int>& arr) {
        int n=arr.size();
        int i=0;
        int j=n-1;
        int maxi=0;
        while(i<j){
           if(arr[i]>arr[j]){
            maxi=max(maxi,(j-i)*arr[j]);
            j--;
           }
           else{
            maxi=max(maxi,(j-i)*arr[i]);
            i++;
           }
        }
        return maxi;
    }
};
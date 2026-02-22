class Solution {
public:
    int binaryGap(int n) {
        vector<int> temp;
        for(int i=0;i<32;i++){
            if((n>>i)&1!=0){
                temp.push_back(i);
            }
        }
        int maxi=0;
        for(int i=0;i<temp.size()-1;i++){
            maxi=max(maxi,(temp[i+1]-temp[i]));
        }
        return maxi;
    }
};
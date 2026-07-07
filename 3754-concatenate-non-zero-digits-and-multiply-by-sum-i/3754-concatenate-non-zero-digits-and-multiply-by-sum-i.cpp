class Solution {
public:
    long long sumAndMultiply(int n) {
        string str =to_string(n);
        if(n==0) return 0;

        string x="";
        int sum=0;

        for(auto s:str){
            if(s=='0') continue;
            else{
                x+=s;
                sum+=s-'0';
            }
        }

        long long ans= stoi(x)*(long long)sum;
        return ans;

    }
};
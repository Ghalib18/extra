class Solution {
public:
    int numSteps(string s) {
        int n=s.size();
        if(n==1 && s[0]=='1') return 0;
        int step=0;
        while(1){
            int x=s.size();
            int last=s[x-1]-'0';
            if(last%2==0){
                s.pop_back();
                step++;
            }
            else{
             int carry =1;
             string temp;
             for(int i=x-1;i>=0;i--){
                if(s[i]=='0'&& carry==1){
                   temp.push_back('1');
                   carry=0;
                }
                else if (s[i]=='1'&& carry==1) {
                   temp.push_back('0');
                   carry=1;
                }
                else{
                    temp.push_back(s[i]);
                }
             }
             if(carry==1) temp.push_back('1');
             reverse(temp.begin(),temp.end());
             s=temp;
             step++;
            }
            if(s.size()==1) break;
        }
       return step;
    }
};
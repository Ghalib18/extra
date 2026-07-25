class Solution {
public:
    int maxProduct(int n) {
        priority_queue<int> mp;
        while(n){
            mp.push(n%10);
            n=n/10;
        }
        int product=mp.top();
        mp.pop();
        product*=mp.top();
        return product;
    }
};
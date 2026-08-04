class Solution {
public:
    string mergeAlternately(string w1, string w2) {
        string merge="";
        int i=0;
        int j=0;
        int n=w1.size();
        int m=w2.size();
        while(i<n&&j<m){
            merge+=w1[i];
            merge+=w2[j];
            i++;
            j++;
        }
        while(i<n){
            merge+=w1[i];
            i++;
        }
        while(j<m){
            merge+=w2[j];
            j++;
        }
        return merge;
    }
};
class Solution {
public:
    void reverseString(vector<char>& s) {
        
        int low=0;
        int end=s.size()-1;
        char temp;
        while(low<end){
            temp=s[low];
            s[low]=s[end];
            s[end]=temp;
            low++;
            end--;
            
            
        }
        
    }
};
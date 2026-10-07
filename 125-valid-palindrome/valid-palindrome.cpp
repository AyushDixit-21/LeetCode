class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0 , l = s.size() -1;
        
        while(i<l){
            while(i<l && isalnum(s[i])== false){
                i = i+1;
            }
            while(l>i && isalnum(s[l])== false){
                l = l-1;
           }
           
           if(i>=l){
               return true;
           }
           if(tolower(s[i]) != tolower(s[l])){
               return false;
           }
           
           i = i +1;
           l = l-1;
          
       }
       return true;
       
    }
};
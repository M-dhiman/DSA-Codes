class Solution {
public:
    bool isPalindrome(int x) {
     std::string str = std::to_string(x);
      int s=0;
      int e=str.size()-1;

      while(s < e){
        if(str[s]!=str[e]){
            return false;
        }
        s++;
        e--;
      }
      return true;
    }
    
};
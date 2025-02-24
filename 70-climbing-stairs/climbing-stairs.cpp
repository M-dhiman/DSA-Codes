class Solution {
public:
    int climbStairs(int n) {
       int s=0;
       int b=2,a=1,i;
       if(n==1 || n==2){
        return n;
       } 
       else{
          for(i=3;i<=n;i++){
            s=b+a;
            a=b;
            b=s;
          }
       }
       return s;
    }
};
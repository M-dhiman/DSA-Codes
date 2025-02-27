class Solution {
public:
    int fib(int n){
        if(n==0) return 0;
        if(n==1) return 1;
        vector<int> arr(n+1,-1);
        arr[0]=0;
        arr[1]=1;
        return helper(arr,n);
    }
    private:
    int helper(vector<int>& arr, int n ){
        if(arr[n]!=-1) return arr[n];
        return arr[n] = helper(arr,n-1)+helper(arr,n-2);
    }
};
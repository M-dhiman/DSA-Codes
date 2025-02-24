class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int a=-1,b=-1;
        int s=0,e=nums.size()-1;
        while(s<=e){
            int mid=s+( e-s )/2;
            if(nums[mid]==target){
                a=mid;
                e=mid-1;
            }else if(nums[mid]<target){
                s=mid+1;
            }
            else{
                e = mid-1;
            }
        }
        s=0,e=nums.size()-1;
        while(s<=e){
            int mid=s+( e-s )/2;
            if(nums[mid]==target){
                b=mid;
                s=mid+1;
            }else if(nums[mid]<target){
                s=mid+1;
            }
            else{
                e = mid-1;
            }
        }
        return {a,b};   
    }
};
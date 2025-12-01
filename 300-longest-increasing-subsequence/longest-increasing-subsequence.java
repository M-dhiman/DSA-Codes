class Solution {
    public int lengthOfLIS(int[] nums) {
        int[] a=new int[nums.length];
        for(int i=1;i<nums.length;i++)
            for(int j=0;j<i;j++)
                if(nums[i]>nums[j])
            if(a[j]+1>a[i])
                    a[i]=a[j]+1;       
        
        int max=0;
        for(int i=0;i<a.length;i++){
            if(a[i]>a[max]){
                max=i;
            }
        }
        return a[max]+1;
}
}
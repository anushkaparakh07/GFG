class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        if(arr.size()<k) return -1;
        int win_sum = 0;
        for(int i=0;i<k;i++){
            win_sum+=arr[i];
        }
        int max_sum = win_sum;
        for(int i=k;i<arr.size();i++){
            win_sum = win_sum + arr[i]-arr[i-k];
            max_sum = max(max_sum,win_sum);
        }
        return max_sum;
    }
};









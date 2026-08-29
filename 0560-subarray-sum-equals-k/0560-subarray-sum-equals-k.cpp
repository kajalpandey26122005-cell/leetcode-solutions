// class Solution {
// public:
//     int subarraySum(vector<int>& nums, int k) {
//         int left = 0;
//         int right = 0;
//         int sum = 0;
//         int cnt = 0;
//         for(int right = 0; right < nums.size(); right++){
//             sum+= nums[right];
//             while(sum > k){
//                 sum -= nums[left];
//                 left++;
//             }
//             if(sum == k){
//                 cnt++;
//             }
//         }
//         return cnt;
        
//     }
// };


class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        mp[0] = 1;
        int sum = 0;
        int cnt = 0;
        for(int num:nums){
            sum += num;
            if(mp.find(sum-k) != mp.end()){
                cnt += mp[sum-k];
            }
            mp[sum]++;   
        }
        return cnt; 
    }
};
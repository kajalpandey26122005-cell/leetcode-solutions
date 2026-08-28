// class Solution {
// public:
//     int findNumbers(vector<int>& nums) {
//         int cnt = 0;
//         for(int num:nums){
//             int digit = 0;

//             while(num >0){
//                 num /= 10;
//                 digit++;
//             }
//             if(digit % 2 == 0){
//                 cnt++;
//             }
//         }
//         return cnt;
        
//     }
// };

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int d= 0;
        for(int i = 0; i<nums.size(); i++){
            int n = nums[i];
            if(no_of_digits(n) % 2 == 0){
                d++;
            }
        }
        return d;
        
    }

    int no_of_digits(int num){
        int cnt = 0;
        while(num >0){
            num /= 10;
            cnt++;
        }
        return cnt;
    }
};


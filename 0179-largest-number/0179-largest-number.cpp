class Solution {
public:
    string largestNumber(vector<int>& nums) {

        vector<string> strNum;

        for (int num : nums) {
            strNum.push_back(to_string(num));
        }

        sort(strNum.begin(), strNum.end(), [](string &a, string &b) {
            return a + b > b + a;
        });

        // If largest element is "0", everything is zero
        if (strNum[0] == "0") {
            return "0";
        }

        string result;

        for (string &s : strNum) {
            result += s;
        }

        return result;
    }
};
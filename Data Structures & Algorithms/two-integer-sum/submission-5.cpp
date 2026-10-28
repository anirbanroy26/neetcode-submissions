class Solution {
public:
    vector<int> hm;
    vector<int> result;
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0; i < nums.size(); i++){
            int val = target - nums[i];
            auto it = find(hm.begin(), hm.end(), nums[i]);
            if(hm.end() != it){
                cout << i << " " << distance(hm.begin(),it);
                result.push_back(distance(hm.begin(),it));
                result.push_back(i);              

                return result;
            }else{
                hm.push_back(val);
                cout<<val;
            }
        }
        return result;
    }
};

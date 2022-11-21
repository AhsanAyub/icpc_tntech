#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    static vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        int size = nums.size();

        if(size < 3){
            return {};
        }

        for(int i = 0; i < size; ++i){
            if(i > 0 && nums[i] == nums[i - 1]){
                continue;
            }

            int left = i + 1, right = size - 1;
            int sum = 0;

            while(left < right){
                sum = nums[left] + nums[right] + nums[i];

                if(sum < 0){
                    left++;
                }
                else if(sum > 0){
                    right--;
                }
                else{
                    ans.push_back({nums[i], nums[left], nums[right]});
                    int l_occurence = nums[left];
                    int r_occurence = nums[right];

                    while(left < right && nums[left] == l_occurence){
                        left++;
                    }

                    while(left < right && nums[right] == r_occurence){
                        right--;
                    }
                }
            }
        }

        return ans;
    }
};

int main(int argc, char* argv[]){
    if(argc == 1){
        cerr << "Incorrect amount of arguments.\n";
        return -1;
    }

    int m;
    stringstream iss;
    vector<int> nums;

    for(int i = 1; i < argc; ++i){
        iss.clear();
        iss.str(argv[i]);

        if((iss >> m).fail()){
            cerr << "Arguments should be integers.\n";
            return -1;
        }

        nums.push_back(m);
    }

    vector<vector<int>> ans = Solution::threeSum(nums);

    for(auto i : ans){
        for(auto j : i){
            cout << j << " ";
        }

        cout << "\n";
    }

    return 0;
}
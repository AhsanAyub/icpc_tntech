#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    static int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size() - 1;
        
        for(int k = i + 1; k < j / 2; ++k){
            if((k - i) < (height[k] - height[i])){
                i = k;
            }
        }
               
        for(int k = j - 1; k > (j - i) / 2; --k){
            if((j - k) < (height[k] - height[j])){
                j = k;
            }
        }

        int m = min(height[i], height[j]);
               
        return m * m;
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

    cout << Solution::maxArea(nums) << "\n";

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    static int maxProfit(vector<int>& prices) {
        if(prices.size() == 1){
            return 0;
        }

        vector<int>::iterator left = prices.begin();
        vector<int>::iterator right = prices.begin() + 1;
        int profit = 0;

        while(right != prices.end()){
            if(*right < *left){
                left = right;
                ++right;
            }
            else{
                profit = max(profit, *right - *left);
                ++right;
            }
        }

        return profit;
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

    cout << Solution::maxProfit(nums) << "\n";

    return 0;
}
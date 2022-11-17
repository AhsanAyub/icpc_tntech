class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int min = 0;
        unsigned int max = -1;
        int profit = 0;
        for (int i = 0; i < n - 1; i++)
        {
            while (i < n - 2 && prices[i] > prices[i + 1])
            {
                i++;
            }
            for (int j = i + 1; j < n; j++)
            {
                if (1 > prices[j] - prices[i])
                    break;
                
                while (j < n - 1 && prices[j] < prices [j + 1])
                {
                    j++;
                }
                if (prices[j] - prices[i] > profit)
                    profit = prices[j] - prices[i];
            }
        }
        return profit;
    }
};
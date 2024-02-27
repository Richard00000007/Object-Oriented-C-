#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        if (n <= 1) return n;

        vector<int> candies(n, 1); 
        for (int i = 1; i < n; ++i) {
            if (ratings[i] > ratings[i - 1]) {
                candies[i] = candies[i - 1] + 1;
            }
        }
            if (ratings[i] > ratings[i + 1]) {
                candies[i] = max(candies[i], candies[i + 1] + 1);
            }
        }
        int total = 0;
        for (int num : candies) {
            total += num;
        }

        return total;
    }
};

int main() {
    Solution sol;
    vector<int> ratings = {1, 0, 2};
    cout << "Total candies needed: " << sol.candy(ratings) << endl;
    return 0;
}


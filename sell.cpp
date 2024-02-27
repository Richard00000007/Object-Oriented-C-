#include <iostream>
using namespace std;

int maxProfit(vector<int>& prices) {
    int n = prices.size();
    if (n <= 1) return 0;
    int firstBuy = numeric_limits<int>::min();
    int firstSell = 0;
    int secondBuy = numeric_limits<int>::min();
    int secondSell = 0;

    for (int price : prices) {
        firstBuy = max(firstBuy, -price);
        firstSell = max(firstSell, firstBuy + price);
        secondBuy = max(secondBuy, firstSell - price);
        secondSell = max(secondSell, secondBuy + price);
    }

    return secondSell;
}

int main() {
    vector<int> prices = {3, 3, 5, 0, 0, 3, 1, 4};
    cout << "Maximum profit: " << maxProfit(prices) << endl;
    return 0;
}


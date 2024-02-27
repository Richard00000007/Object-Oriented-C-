#include<iostream>
using namespace std;

class RegistrationCost {
private:
    int lastFourDigits;
    int baseCost;
public:
    RegistrationCost(int digits) {
        lastFourDigits = digits;
        baseCost = 5000;
    }

    int computeCost() {
        int cost = baseCost;

        if (isSameLastFourDigits() || isPalindrome() || isDivisibleBy2()) {
            cost += 5000;
        }
        if (isPalindrome()) {
            cost += 3000;
        }
        if (isDivisibleBy2()) {
            cost += 1000;
        }

        return cost;
    }

private:
    bool isSameLastFourDigits() {
        return (lastFourDigits / 1000) == (lastFourDigits % 1000);
    }

    bool isPalindrome() {
        return ((lastFourDigits / 1000) == (lastFourDigits % 10)) && (((lastFourDigits / 100) % 10) == ((lastFourDigits / 10) % 10));
    }

    bool isDivisibleBy2() {
        return lastFourDigits % 2 == 0;
    }
};

int main() {
    int lastFourDigits;
    cout << "Enter the last four digits of the registration number: ";
    cin >> lastFourDigits;

    RegistrationCost regCost(lastFourDigits);
    int cost = regCost.computeCost();

    cout << "Cost is: " << cost << endl;

    return 0;
}



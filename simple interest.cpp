#include <iostream>
int main() {
    double principalAmount, rateOfInterest, time, simpleInterest;

    std::cout << "Enter the principal amount: ";
    std::cin >> principalAmount;
    rateOfInterest = 8.0;
    double returnOnInvestment = 10.0;
    time = returnOnInvestment / rateOfInterest;
    simpleInterest = (principalAmount * rateOfInterest * time) / 100.0;
    std::cout << "Simple Interest: " << simpleInterest << std::endl;

    return 0;
}

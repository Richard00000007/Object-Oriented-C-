#include <iostream>
void displayMessage(std::string message = "Hello",
 int repeatCount = 1) {
    for (int i = 0; i < repeatCount; ++i) {
        std::cout << message << std::endl;
    }
}

int main() {
    displayMessage();  
    displayMessage("Studentname:Ravi Varma"); 
    displayMessage("Mark list", 3); 

    return 0;
}

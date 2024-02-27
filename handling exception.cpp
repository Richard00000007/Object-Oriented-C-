#include <iostream>
using namespace std;
class Finally {
public:
    Finally() {
        cout << "Inside finally block: Resource Acquired." << endl;
    }

    ~Finally() {
        cout << "Inside finally block: Resource Released." << endl;
    }
};

int main() {
    try {
        Finally finalizer; 
        cout << "Inside try block." << endl;
        throw 
		
		runtime_error["An error occurred."]; 
        cout << "This line won't be executed." << endl;
    } catch (const exception& e) {
        cerr << "Exception caught: " << e.what() << endl;
    }

    cout << "After try-catch-finally." << endl;

    return 0;
}


#include <iostream>
class Student {
private:
    std::string name;
    int age;

public:
    Student(std::string studentName, int studentAge) : name(studentName), age(studentAge) {
        std::cout << "Constructor called for " << name << std::endl;
    }
    ~Student() {
        std::cout << "Destructor called for " << name << std::endl;
    }

    void displayInfo() {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    Student student1("David", 20);
    Student student2("Richard", 22);
    student1.displayInfo();
    student2.displayInfo();

    return 0;
}


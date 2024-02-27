#include <iostream>
class RightAngleTriangle {
public:
    RightAngleTriangle() {}

    RightAngleTriangle(int size) {
        drawTriangle(size);
    }

    ~RightAngleTriangle() {}

private:
    void drawTriangle(int size) {
        for (int i = 1; i <= size; ++i) {
            for (int j = 1; j <= i; ++j) {
                std::cout << "* ";
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    RightAngleTriangle triangle1;       
    RightAngleTriangle triangle2(5);     

    return 0;
}


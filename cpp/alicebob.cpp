#include <iostream>

void runalice() {
    int alice = 1;
    int bob = 0;
    int bottle = 5;
    bool smashed = false;
    for (int i = 0; i<10; i++) {
        alice += 1;
        bob += 1;
        std::cout << "t = " << i << std::endl;
        if (!smashed && (alice == bottle)) {
            smashed = true;
            std::cout << "Alice smashed the bottle" << std::endl;
        }
        else if (!smashed && (bob == bottle)) {
            smashed = true;
            std::cout << "Bob smashed the bottle" << std::endl;
        }
    }
}

int main() {
    runalice();
}
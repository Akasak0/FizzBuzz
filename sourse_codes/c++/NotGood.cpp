#include <iostream>

int main() {
    for(int i = 1; i <= 100; i++) {
        int num = 0;
        num += (i % 3 == 0) ? 1 : 0;
        num += (i % 5 == 0) ? 2 : 0;
        std::string str = "";
        switch(num) {
            case 1:
                str = "Fizz\n";
                break;
            case 2:
                str = "Buzz\n";
                break;
            case 3:
                str = "FizzBuzz\n";
                break;
            default:
                str = std::to_string(i) + '\n';
                break;
        }
        std::cout << str;
    }
    return 0;
}

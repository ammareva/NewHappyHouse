#include <iostream>
#include <string>
/*
int square(int x) {
    return x * x;
}

int main() {
    int num = 5;
    std::cout << square(num) << std::endl;
    return 0;
}
*/
int cube(int x) {
    return x * x * x;
}
std::string concat(std::string a, std::string b, std::string c) {
    return a + b + c;
}
int main() {
    int num = 5;
    std::cout << cube(num) << std::endl;
    return 0;
}

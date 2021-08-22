#include <iostream>

int main() {
    std::string intPart;
    std::string fractPart;
    std::string stNum;
    double Num;
    std::cout << "Input integer part" << std::endl;
    std::cin >> intPart;
    std::cout << "Input fractional part" << std:: endl;
    std::cin >> fractPart;
    stNum = intPart+"."+fractPart;
    Num = std::stod(stNum);

    std::cout << "You number is " << Num << std::endl;

    return 0;
}

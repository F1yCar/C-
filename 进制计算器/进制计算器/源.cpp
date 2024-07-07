#include <iostream>
#include <string>
#include <bitset>
#include <sstream>

// 函数声明
std::string decimalToBinary(int num);
std::string decimalToOctal(int num);
std::string decimalToHexadecimal(int num);

int main() {
    while (true) {
        int decimalValue;

        std::cout << "请输入一个十进制数字: ";
        std::cin >> decimalValue;

        std::cout << "二进制: " << decimalToBinary(decimalValue) << std::endl;
        std::cout << "八进制: " << decimalToOctal(decimalValue) << std::endl;
        std::cout << "十六进制: " << decimalToHexadecimal(decimalValue) << std::endl;

        std::cout << "按任意键继续，或输入 'exit' 退出程序: ";
        std::string exitInput;
        std::cin >> exitInput;

        if (exitInput == "exit") {
            break;
        }
    }

    std::cout << "程序结束，感谢使用！" << std::endl;

    return 0;
}

// 十进制转二进制
std::string decimalToBinary(int num) {
    std::bitset<32> bits(num);
    std::string binaryString = bits.to_string();
    binaryString.erase(0, binaryString.find_first_not_of('0')); // 移除前导零
    return binaryString.empty() ? "0" : binaryString;
}

// 十进制转八进制
std::string decimalToOctal(int num) {
    std::ostringstream oss;
    oss << std::oct << num;
    return oss.str();
}

// 十进制转十六进制
std::string decimalToHexadecimal(int num) {
    std::ostringstream oss;
    oss << std::hex << num;
    return oss.str();
}
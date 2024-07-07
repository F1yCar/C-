#include <iostream>
#include <string>
#include <bitset>
#include <sstream>

// ��������
std::string decimalToBinary(int num);
std::string decimalToOctal(int num);
std::string decimalToHexadecimal(int num);

int main() {
    while (true) {
        int decimalValue;

        std::cout << "������һ��ʮ��������: ";
        std::cin >> decimalValue;

        std::cout << "������: " << decimalToBinary(decimalValue) << std::endl;
        std::cout << "�˽���: " << decimalToOctal(decimalValue) << std::endl;
        std::cout << "ʮ������: " << decimalToHexadecimal(decimalValue) << std::endl;

        std::cout << "������������������� 'exit' �˳�����: ";
        std::string exitInput;
        std::cin >> exitInput;

        if (exitInput == "exit") {
            break;
        }
    }

    std::cout << "�����������лʹ�ã�" << std::endl;

    return 0;
}

// ʮ����ת������
std::string decimalToBinary(int num) {
    std::bitset<32> bits(num);
    std::string binaryString = bits.to_string();
    binaryString.erase(0, binaryString.find_first_not_of('0')); // �Ƴ�ǰ����
    return binaryString.empty() ? "0" : binaryString;
}

// ʮ����ת�˽���
std::string decimalToOctal(int num) {
    std::ostringstream oss;
    oss << std::oct << num;
    return oss.str();
}

// ʮ����תʮ������
std::string decimalToHexadecimal(int num) {
    std::ostringstream oss;
    oss << std::hex << num;
    return oss.str();
}
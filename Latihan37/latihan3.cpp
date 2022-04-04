#include<iostream>
#include<string>

int main(int argc, char const *argv[])
{
    std::string input_line, input, input_2;

    std::cout << "masukkan kata : " << std::endl;
    std::cin >> input;
    std::cout << "kata yg anda masukkan = " << input << std::endl;
    std::cout << "masukkan kata : " << std::endl;
    std::cin >> input_2;
    std::cout << "kata yg anda masukkan = " << input_2 << std::endl;
    std::cout << std::endl;
    
    std::cout << "masukkan kalimat : " << std::endl;
    std::getline(std::cin,input_line);
    std::cout << "kalimat yg anda masukkan = " << input_line << std::endl;
    
    return 0;
}

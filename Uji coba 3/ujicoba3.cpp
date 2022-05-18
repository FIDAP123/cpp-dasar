#include<iostream>
#include <fstream>

int main(int argc, char const *argv[])
{
    std::ifstream fileku ("test.txt");

    std::string kalimat;
    std::getline(fileku,kalimat);
    std::cout << kalimat << std::endl;

    fileku.close();

    return 0;
}

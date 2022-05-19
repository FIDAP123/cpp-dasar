#include<iostream>
#include <fstream>

int main(int argc, char const *argv[])
{
    std::ofstream fileBuat("test.txt");
    std::ifstream fileku ("test.txt");

    std::string kalimat;
    std::getline(fileku,kalimat);
    std::cout << kalimat << std::endl;

    fileBuat.close();
    fileku.close();

    return 0;
}

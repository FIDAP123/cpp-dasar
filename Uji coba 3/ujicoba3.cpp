#include<iostream>
#include <fstream>

int main(int argc, char const *argv[])
{
    std::ifstream fileku ("test.txt");

    std::cout << fileku.tellg() << std::endl;
    //std::cout << fileku.tellp() << std::endl;
    fileku.seekg(3);
    //fileku.sekkp(1);
    std::string kalimat;
    std::getline(fileku,kalimat);
    std::cout << kalimat << std::endl;

    //fileBuat.close();
    fileku.close();

    return 0;
}

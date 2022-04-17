/*
    Latihan 47 Membaca file eksternal (ifstream) :
    1.  b
*/

#include<iostream>
#include<fstream>

int main(int argc, char const *argv[])
{
    std::ifstream file_saya;
    std::string output, buffer;
    bool is_table = false;
    
    file_saya.open("latihan47.txt");
    std::cout<< "membaca file dengan menaruhnya di 1 variable dengan 1 kata :" << std::endl;
    file_saya >> output;
    std::cout << output << std::endl;
    file_saya >> output;
    std::cout<< output << std::endl;
    file_saya.close();
    std::cout << std::endl;

    file_saya.open("latihan47.txt");
    std::cout<< "membaca file dengan menaruhnya di 1 variable dengan 1 baris :" << std::endl;
    std::getline(file_saya,output);
    std::cout<< output << std::endl;
    std::getline(file_saya,output);
    std::cout<< output << std::endl;
    file_saya.close();
    std::cout << std::endl;

    //std::cout<< "halo" << std::endl;
    
    return 0;
}

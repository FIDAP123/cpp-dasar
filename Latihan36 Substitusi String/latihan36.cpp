/*
    Latihan 36 Substitusi String :
    1.  b
*/

#include<iostream>
#include<string>

int main(int argc, char const *argv[])
{
    std::string kalimat_1 = "sarimin makan mi sarimi";
    std::string kalimat_2("kalau tidak bobok digigit nyamuk");

    std::cout << "Sebelum kalimat 1 dan 2 di swap : " << std::endl;
    std::cout << "kalimat 1 = " << kalimat_1 << std::endl;
    std::cout << "kalimat 2 = " << kalimat_2 << std::endl;
    
    std::cout << std::endl;
    
    kalimat_1.swap(kalimat_2);
    std::cout << "Sesudah kalimat 1 dan 2 di swap" << std::endl;
    std::cout << "kalimat 1 = " << kalimat_2 << std::endl;
    std::cout << "kalimat 2 = " << kalimat_1 << std::endl;

    std::cout << std::endl;

    

    return 0;
}

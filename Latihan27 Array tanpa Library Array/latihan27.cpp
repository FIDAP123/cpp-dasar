/*
    Latihan 27 Array :
    1.  Array adalah kumpulan data
*/

#include<iostream>

int main(int argc, char const *argv[])
{
    int nilai[3];

    std::cout << "di memori nilai[0] = " << &nilai[0] << " nilainya = " << nilai[0] << std::endl;
    std::cout << "di memori nilai[1] = " << &nilai[1] << " nilainya = " << nilai[1] << std::endl;
    std::cout << "di memori nilai[2] = " << &nilai[2] << " nilainya = " << nilai[2] << std::endl;
    std::cout << "di memori nilai[3] = " << &nilai[3] << " nilainya = " << nilai[3] << std::endl;
    std::cout << "di memori nilai[4] = " << &nilai[4] << " nilainya = " << nilai[4] << std::endl;
    std::cout << "di memori nilai    = " << &nilai << " nilainya = " << nilai << std::endl;
    
    return 0;
}

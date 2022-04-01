/*
    Latihan 33 Library String : 
    1.  b
*/

#include<iostream>
#include<string>

int main(int argc, char const *argv[])
{
    char huruf[5] = {'r','u','m','a','h'};// untuk array char ini kita sulit menambahkan dan ini fix tidak boleh diubah di bawahnya
    std::cout << huruf << std::endl;
    
    std::cout << std::endl;

    std::string kata_1 = "halo";//disini kita menampilkan string dengan library dari iostream
    std::cout << kata_1 << std::endl;
    std::cout << std::endl;
    std::string kata_2 ("bayu");//disini kita memakai library dari string
    std::cout << kata_2 << std::endl;

    return 0;
}

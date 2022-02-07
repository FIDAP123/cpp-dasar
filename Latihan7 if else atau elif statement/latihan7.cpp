/*
Latihan 7 If else atau elif Statement :
1.  berisi true dan false tergantung kondisi yang diberikan
*/
#include <iostream>

int main()
{
    int a;
    std::cout << "masukkan angka = ";
    std::cin >> a;

    if (a == 3)//artinya if atau jika kondisi a tidak boleh dari 3 berarti 
    //prgram akan di eksekusi disini, untuk kondisi diisi memakai komparasi boolean
    {
        std::cout << "a sama dengan 3\n";
    }
    else if (a<=5)
    {
        std::cout << "a kurang dari sama dengan 5\n";
    }
    else if (a>=8)
    {
        std::cout << "a lebih dari sama dengan 8\n";
    }
    else
    {
        std::cout << "salah\n";
    }
    

    std::cout << "selesai\n";
    
    return 0;
}
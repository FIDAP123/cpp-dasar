/*
    Latihan 16 Fugsi dengan return :

*/

#include<iostream>

int kuadrat (int x)
{
    int y ;

    y = x*x;
    
    return y;
}

int main(int argc, char const *argv[])
{
    int hasil;
    int input;
    
    std::cout << "masukkan nilai kuadrat = ";
    std::cin >> input;
    hasil = kuadrat(input);
    
    std::cout << "hasilnya adalah " << hasil << std::endl;

    return 0;
}

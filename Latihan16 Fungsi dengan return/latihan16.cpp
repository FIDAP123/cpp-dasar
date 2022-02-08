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

int tambah (int a, int b)
{
    int c;
    c = a + b;
    return c;
}

int main(int argc, char const *argv[])
{
    int hasil;
    int input1;
    int input2;
    
    std::cout << "masukkan nilai kuadrat1 = ";
    std::cin >> input1;
    hasil = kuadrat(input1);
    std::cout << "hasil fungsi kuadrat(x) dalam var hasil = " << hasil << std::endl;

    std::cout << "masukkan nilai kuadrat2 = ";
    std::cin >> input2;
    std::cout << "hasil fungsi kuadrat(x) tanpa var hasil = " << kuadrat(input2) << std::endl;
    
    std::cout << "masukkan nilai tambah huruf 1 = ";
    std::cin >> input1;
    std::cin >> input2;
    hasil = tambah(input1,input2);
    std::cout << "nilai tambah dengan var = " << hasil;

    std::cout << "masukkan nilai tambah huruf 1 = ";
    std::cin >> input1;
    std::cin >> input2;
    std::cout << "nilai tambah dengan var = " << tambah(input1,input2);
    
    return 0;
}

/*
    Latihan 16 Fugsi dengan return :
    1.  membuat fungsi return yang hampir sama seperti fungsi int main (), fungsi return atau fungsi kembalian adalah   
        fungsi yang akan mengembalikan fungsi itu sendiri sehingga fungsi dapat tampil di konsol dengan perantara variable lain
    2.  function harus ada deklarasi sebagai penentu variable awal. 
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
    std::cout << "hasil fungsi kuadrat(x) tanpa var hasil = " << kuadrat(input2) << std::endl << std::endl;
    
    std::cout << "masukkan nilai tambah huruf 1 = ";
    std::cin >> input1;
    std::cout << "masukkan nilai tambah huruf 2 = ";
    std::cin >> input2;
    hasil = tambah(input1,input2);
    std::cout << "nilai tambah dengan var = " << hasil << std::endl;

    std::cout << "masukkan nilai tambah huruf 1 = ";
    std::cin >> input1;
    std::cout << "masukkan nilai tambah huruf 2 = ";
    std::cin >> input2;
    std::cout << "nilai tambah dengan var = " << tambah(input1,input2) << std::endl;
    
    return 0;
}

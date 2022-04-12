/*
    Latihan 43 Comma Operator :
    1.  Comma operator adalah operator yg berfungsi agar program menjadi 1 line dan menjadi lebih simple
    2.  cara penggunaannya harus urut dan untuk variable hasilnya jika ingin di tampailkan di konsol maka sintax cout 
        harus ditaruh dibawahnya
*/

#include<iostream>

int main(int argc, char const *argv[])
{
    //int hasil = (int angka_1 = 2);disni kita harus mendeklarasikan variablenya terlebih dahulu sebelum melakukan comma operator
    int angka_1,angka_2,hasil;//ini bukan comma operator
    hasil = (angka_1 = 2, std::cout << "angka 1 = "<< angka_1, angka_2 = 5, std::cout << "angka 2 = "<< angka_2 , angka_1+angka_2);//ini adalah comma operator kita bisa memasukkan ekspresion atau semuanya disini

    std::cout << hasil << std::endl;
    return 0;
}

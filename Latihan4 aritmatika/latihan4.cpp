#include <iostream>

int main()
{
    int a;
    int b;
    float hasil;
    bool hasil_1;

    std::cout << "masukan nilai a\n";
    std::cin >> a;
    std::cout << "\n masukan nilai b\n";
    std::cin >> b;
    //penjumlahan
    hasil = a + b;
    std::cout << a << " + " << b << " = " << hasil << "\n";
    //pengurangan
    hasil = a - b;
    std::cout << a << " - " << b << " = " << hasil << "\n";
    //pembagian
    hasil = (float)a / b;//mengubah tipe data variable a dan b dengan menuliskan tipe data yang mau diubah l
    std::cout << a << " / " << b << " = " << hasil << "\n";
    //modulus
    //hasil = a % b;
    //std::cout << a << " % " << b << " = " << hasil << "\n";
    //perkalian
    hasil = a * b;
    std::cout << a << " x " << b << " = " << hasil << "\n";
    //pangkat
    //hasil = a ^ b;
    //std::cout << a << " ^ " << b << " = " << hasil << "\n";
    //kurung
    hasil = (a+b)*a;
    std::cout << "(a+b)xa = " << hasil << "\n";

    hasil_1 = a>b;
    std::cout << "a>b = " << hasil_1 << "\n";


    return 0;
}
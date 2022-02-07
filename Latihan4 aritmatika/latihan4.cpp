#include <iostream>

int main()
{
    float a;
    float b;
    float hasil;

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
    hasil = a / b;
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

    return 0;
}
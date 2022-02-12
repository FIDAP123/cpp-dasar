/*
    latihan 19 prototype function :
    1.  prototype function seperti deklarasi di int main()

*/

#include<iostream>

double Luas(double p, double l);//ini adalah prototype fungsi, tujuannya seperti deklarasi agar kita tidak bingung jika ingin menuliskan kode di bawah int main(), karena jika fungsi akan dieksekusi di int main, sedangkan kita harus mendeklarasikannya agar program tidak error
double Keliling(double p, double l);

void println_Luas(double p, double l);
void println_Keliling(double p, double l);

int main(int argc, char const *argv[])
{
    double panjang,lebar;
    
    std::cout << "Luas dan Keliling persegi panjang\n" << std::endl;
    std::cout << "masukkan panjang = ";
    std::cin >> panjang;
    std::cout << "masukkan lebar = ";
    std::cin >> lebar;

    println_Luas(panjang,lebar);
    println_Keliling(panjang,lebar);

    return 0;
}

double Luas(double p, double l)
{
    return p*l;
}

double Keliling(double p, double l)
{
    return 2*(p+l);
}

void println_Luas(double p, double l)
{
    std::cout << "Luas = " << Luas(p,l) << std::endl;
}

void println_Keliling(double p, double l)
{
    std::cout << "Keliling = " << Keliling(p,l) << std::endl;
}
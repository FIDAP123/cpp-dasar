/*
    latihan18 membuat luas persegi dengan memanfaatkan fungsi return dan void
    1.  m
*/
#include<iostream>

double Luas(double p, double l)
{
    return p*l;
}

double keliling(double p, double l)
{
    return 2*(p+l);
}

void hasil_luas(double p, double l)
{
    std::cout << "Luas = " << std::endl;
}

int main(int argc, char const *argv[])
{
    double p,l, input_p, input_l;
    
    std::cout << "masukkan panjang = ";
    std::cin >> input_p;
    std::cout << "masukkan lebar = ";
    std::cin >> input_l;
    std::cout << "Luas = " << Luas(input_p,input_l);
    
    return 0;
}

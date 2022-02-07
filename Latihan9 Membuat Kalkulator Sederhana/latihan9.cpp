/*
Latihan Membuat Kalkulator Sederhana dengan elif & switch case :
1.  kesulitan yg dialami ketika pemilihan tipe data, ketika tipe datanya kurang tepat 
    maka program akan mengalami eror atau terdapat sedikit bug
*/

#include <iostream>

int main()
{
    float a, b, hasil;//khusus switch case pakai tipe data angka atau huruf harus yg 
    //ukuran data kecil maka pakai saja float,int,char. Untuk elif jika ingin pakai 
    //double maka harus memakai string bukan char, karena string ukurannya besar sama 
    //dengan double & long
    char aritmatika;
    std::cout << "masukkan angka 1 = ";
    std::cin >> a;
    std::cout << "masukkan aritmatika(+-/*) = ";
    std::cin >> aritmatika;
    std::cout << "masukkan angka 2 = ";
    std::cin >> b;

    std::cout << "-------memakai elif atau if else-----\n";
    if (aritmatika == '+')
    {
        hasil = a + b;
        std::cout << a << " + " << b << " = " << hasil;
    }
    else if (aritmatika == '-')
    {
        hasil = a - b;
        std::cout << a << " - " << b << " = " << hasil;
    }
    else if (aritmatika == '/')
    {
        hasil = a / b;
        std::cout << a << " / " << b << " = " << hasil;
    }
    else if (aritmatika == '*')
    {
        hasil = a * b;
        std::cout << a << " x " << b << " = " << hasil;
    }
    else
    {
        std::cout << "Operator default";
    }

    std::cout << "\nselesai";

    std::cout << "-------memakai switch case-----\n";
    switch (aritmatika)
    {
    case '+':
        hasil = a + b;
        std::cout << a << " + " << b << " = " << hasil;
        break;
    case '-':
        hasil = a - b;
        std::cout << a << " - " << b << " = " << hasil;
        break;
    case '/':
        hasil = a / b;
        std::cout << a << " / " << b << " = " << hasil;
        break;
    case '*':
        hasil = a * b;
        std::cout << a << " x " << b << " = " << hasil;
        break;
    default:
        std::cout << "salah";
        
    }

std::cout << "\nselesai";
    
    return 0;
}

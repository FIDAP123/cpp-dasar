/*
latihan 14 : Pengenalan fungsi/ method, dan library internal/standard library dari C++
1.  penambahan standard library bertujuan agar kode" yang kita tulis atau source code 
    yg kita tulis bisa di eksekusi
2.  
*/

#include<iostream>
#include<cmath>// https://en.cppreference.com/w/ untuk mencari referensi library di C++

int main()
{
    double x,y,z;

    std::cout << "menghitung akar dari x : ";
    std::cin >> x; 
    std::cout << sqrt(x) << std::endl;
    std::cout << "menghitung exponen dari y : ";
    std::cin >> y;
    z = exp(y);
    std::cout << z << std::endl;
    
    std::cin.get();
    return 0;
}

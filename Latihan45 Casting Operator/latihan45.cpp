/*
    Latihan 45 Casting Operator :
    1.  Casting operator atau mengubah nilai hasil tipe data dari operator
    2.  Casting Operator untuk string tidak bisa karena string adalah standard library dan string hanya bisa di 
        operasikan atau ditambah dengan char atau string lainnya
*/

#include<iostream>

int main(int argc, char const *argv[])
{
    bool boolean = 1;
    short angka_short = 2;
    int angka_int = 3;
    long angka_long = 4;
    size_t angka_sizet = 5;
    ssize_t angka_ssizet = 6;
    float desimal_float = 7.5;
    double desimal_double = 8.3;
    char huruf_char = '9';
    std::string huruf_string = " 10 ";
   
    std::cout << "boolean + boolean = " << boolean + boolean << std::endl;
    std::cout << "boolean + angka_short = " << boolean + angka_short << std::endl;
    std::cout << "boolean + (bool)angka_short = " << boolean + (bool)angka_short << std::endl;
    std::cout << "(short)boolean + angka_short = " << (short)boolean + angka_short << std::endl;
    std::cout << "boolean + angka_int = " << boolean + angka_int << std::endl;
    std::cout << "boolean + (bool)angka_int = " << boolean + (bool)angka_int << std::endl;
    std::cout << "(int)boolean + angka_int = " << (int)boolean + angka_int << std::endl;
    std::cout << "boolean + angka_long = " << boolean + angka_long << std::endl;
    std::cout << "boolean + (bool)angka_long = " << boolean + (bool)angka_long << std::endl;
    std::cout << "(long)boolean + angka_long = " << (long)boolean + angka_long << std::endl;
    std::cout << "boolean + angka_sizet = " << boolean + angka_sizet << std::endl;
    std::cout << "boolean + (bool)angka_sizet = " << boolean + (bool)angka_sizet << std::endl;
    std::cout << "(size_t)boolean + angka_sizet = " << (size_t)boolean + angka_sizet << std::endl;
    std::cout << "boolean + angka_ssizet = " << boolean + angka_ssizet << std::endl;
    std::cout << "boolean + (bool)angka_ssizet = " << boolean + (bool)angka_ssizet << std::endl;
    std::cout << "(ssize_t)boolean + angka_ssizet = " << (ssize_t)boolean + angka_ssizet << std::endl;
    std::cout << "boolean + desimal_float = " << boolean + desimal_float << std::endl;
    std::cout << "boolean + (bool)desimal_float = " << boolean + (bool)desimal_float << std::endl;
    std::cout << "(float)boolean + desimal_float = " << (float)boolean + desimal_float << std::endl;
    std::cout << "boolean + desimal_double = " << boolean + desimal_double << std::endl;
    std::cout << "boolean + (bool)desimal_double = " << boolean + (bool)desimal_double << std::endl;
    std::cout << "(double)boolean + desimal_double = " << (double)boolean + desimal_double << std::endl;
    std::cout << "boolean + huruf_char = " << boolean + huruf_char << std::endl;
    std::cout << "boolean + (bool)huruf_char = " << boolean + (bool)huruf_char << std::endl;
    std::cout << "(char)boolean + huruf_char = " << (char)boolean + huruf_char << std::endl;
    //std::cout << "boolean + huruf_string = " << boolean + huruf_string << std::endl;
    //std::cout << "boolean + (bool)huruf_string = " << boolean + (bool)huruf_string << std::endl;
    //std::cout << "(std::string)boolean + huruf_string = " << (std::string)boolean + huruf_string << std::endl;
    
    std::cout << std::endl;

    std::cout << "angka_short + angka_short = " << angka_short + angka_short << std::endl;
    std::cout << "angka_short + angka_int = " << angka_short + angka_int << std::endl;
    std::cout << "angka_short + (short)angka_int = " << angka_short + (short)angka_int << std::endl;
    std::cout << "(int)angka_short + angka_int = " << (int)angka_short + angka_int << std::endl;
    std::cout << "angka_short + angka_long = " << angka_short + angka_long << std::endl;
    std::cout << "angka_short + (short)angka_long = " << angka_short + (short)angka_long << std::endl;
    std::cout << "(long)angka_short + angka_long = " << (long)angka_short + angka_long << std::endl;
    std::cout << "angka_short + angka_sizet = " << angka_short + angka_sizet << std::endl;
    std::cout << "angka_short + (short)angka_sizet = " << angka_short + (short)angka_sizet << std::endl;
    std::cout << "(size_t)angka_short + angka_sizet = " << (size_t)angka_short + angka_sizet << std::endl;
    std::cout << "angka_short + angka_ssizet = " << angka_short + angka_ssizet << std::endl;
    std::cout << "angka_short + (short)angka_ssizet = " << angka_short + (short)angka_ssizet << std::endl;
    std::cout << "(ssize_t)angka_short + angka_ssizet = " << (ssize_t) angka_short + angka_ssizet << std::endl;
    std::cout << "angka_short + desimal_float = " << angka_short + desimal_float << std::endl;
    std::cout << "angka_short + (short)desimal_float = " << angka_short + (short)desimal_float << std::endl;
    std::cout << "(float)angka_short + desimal_float = " << (float)angka_short + desimal_float << std::endl;
    std::cout << "angka_short + desimal_double = " << angka_short + desimal_double << std::endl;
    std::cout << "angka_short + (short)desimal_double = " << angka_short + (short)desimal_double << std::endl;
    std::cout << "(double)angka_short + desimal_double = " << (double)angka_short + desimal_double << std::endl;
    std::cout << "angka_short + huruf_char = " << angka_short + huruf_char << std::endl;
    std::cout << "angka_short + (short)huruf_char = " << angka_short + (short)huruf_char << std::endl;
    std::cout << "(char)angka_short + huruf_char = " << angka_short + huruf_char << std::endl;
    //std::cout << "angka_short + huruf_string = " << angka_short + huruf_string << std::endl;// disini angka tidak bisa ditambahkan dengan string, karena string berisi huruf random, berbeda dengan char yg hurufnya tersusuh seperti angka
    //std::cout << "angka_short + (short)huruf_string = " << angka_short + (short)huruf_string << std::endl;
    //std::cout << "(std::string)angka_short + huruf_string = " << (std::string)angka_short + huruf_string << std::endl;
    
    std::cout << std::endl;

    std::cout << "angka_int + angka_int = " << angka_int + angka_int << std::endl;
    std::cout << "angka_int + angka_long = " << angka_int + angka_long << std::endl;
    std::cout << "angka_int + (int)angka_long = " << angka_int + (int)angka_long << std::endl;
    std::cout << "(long)angka_int + angka_long = " << (long)angka_int + angka_long << std::endl;
    std::cout << "angka_int + angka_sizet = " << angka_int + angka_sizet << std::endl;
    std::cout << "angka_int + (int)angka_sizet = " << angka_int + (int)angka_sizet << std::endl;
    std::cout << "(size_t)angka_int + angka_sizet = " << (size_t)angka_int + angka_sizet << std::endl;
    std::cout << "angka_int + angka_ssizet = " << angka_int + angka_ssizet << std::endl;
    std::cout << "angka_int + (int)angka_ssizet = " << angka_int + (int)angka_ssizet << std::endl;
    std::cout << "(ssize_t)angka_int + angka_ssizet = " << (ssize_t)angka_int + angka_ssizet << std::endl;
    std::cout << "angka_int + desimal_float = " << angka_int + desimal_float << std::endl;
    std::cout << "angka_int + (int)desimal_float = " << angka_int + (int)desimal_float << std::endl;
    std::cout << "(float)angka_int + desimal_float = " << (float)angka_int + desimal_float << std::endl;
    std::cout << "angka_int + desimal_double = " << angka_int + desimal_double << std::endl;
    std::cout << "angka_int + (int)desimal_double = " << angka_int + (int)desimal_double << std::endl;
    std::cout << "(double)angka_int + desimal_double = " << (double)angka_int + desimal_double << std::endl;
    std::cout << "angka_int + huruf_char = " << angka_int + huruf_char << std::endl;
    std::cout << "angka_int + (int)huruf_char = " << angka_int + (int)huruf_char << std::endl;
    std::cout << "(char)angka_int + huruf_char = " << (char)angka_int + huruf_char << std::endl;
    //std::cout << "angka_int + huruf_string = " << angka_int + huruf_string << std::endl;
    //std::cout << "angka_int + (int)huruf_string = " << angka_int + (int)huruf_string << std::endl;
    //std::cout << "(std::string)angka_int + huruf_string = " << (std::string)angka_int + huruf_string << std::endl;

    std::cout << std::endl;
    
    std::cout << "angka_long + angka_long = " << angka_long + angka_long << std::endl;
    std::cout << "angka_long + angka_sizet = " << angka_long + angka_sizet << std::endl;
    std::cout << "angka_long + (long)angka_sizet = " << angka_long + (long)angka_sizet << std::endl;
    std::cout << "(size_t)angka_long + angka_sizet = " << (size_t)angka_long + angka_sizet << std::endl;
    std::cout << "angka_long + angka_ssizet = " << angka_long + angka_ssizet << std::endl;
    std::cout << "angka_long + (long)angka_ssizet = " << angka_long + (long)angka_ssizet << std::endl;
    std::cout << "(ssize_t)angka_long + angka_ssizet = " << (ssize_t)angka_long + angka_ssizet << std::endl;
    std::cout << "angka_long + desimal_float = " << angka_long + desimal_float << std::endl;
    std::cout << "angka_long + (long)desimal_float = " << angka_long + (long)desimal_float << std::endl;
    std::cout << "(float)angka_long + desimal_float = " << (float)angka_long + desimal_float << std::endl;
    std::cout << "angka_long + desimal_double = " << angka_long + desimal_double << std::endl;
    std::cout << "angka_long + (long)desimal_double = " << angka_long + (long)desimal_double << std::endl;
    std::cout << "(double)angka_long + desimal_double = " << (double)angka_long + desimal_double << std::endl;
    std::cout << "angka_long + huruf_char = " << angka_long + huruf_char << std::endl;
    std::cout << "angka_long + (long)huruf_char = " << angka_long + (long)huruf_char << std::endl;
    std::cout << "(char)angka_long + huruf_char = " << (char)angka_long + huruf_char << std::endl;
    //std::cout << "angka_long + huruf_char = " << angka_long + huruf_string << std::endl;
    //std::cout << "angka_long + (long)huruf_char = " << angka_long + (long)huruf_string << std::endl;
    //std::cout << "(std::string)angka_long + huruf_char = " << (std::string)angka_long + huruf_string << std::endl;

    std::cout << std::endl;
    
    std::cout << "angka_sizet + angka_sizet = " << angka_sizet + angka_sizet << std::endl;
    std::cout << "angka_sizet + angka_ssizet = " << angka_sizet + angka_ssizet << std::endl;
    std::cout << "angka_sizet + (size_t)angka_ssizet = " << angka_sizet + (size_t)angka_ssizet << std::endl;
    std::cout << "(ssize_t)angka_sizet + angka_ssizet = " << (ssize_t)angka_sizet + angka_ssizet << std::endl;
    std::cout << "angka_sizet + desimal_float = " << angka_sizet + desimal_float << std::endl;
    std::cout << "angka_sizet + (size_t)desimal_float = " << angka_sizet + (size_t)desimal_float << std::endl;
    std::cout << "(float)angka_sizet + desimal_float = " << (float)angka_sizet + desimal_float << std::endl;
    std::cout << "angka_sizet + desimal_double = " << angka_sizet + desimal_double << std::endl;
    std::cout << "angka_sizet + (size_t)desimal_double = " << angka_sizet + (size_t)desimal_double << std::endl;
    std::cout << "(double)angka_sizet + desimal_double = " << (double)angka_sizet + desimal_double << std::endl;
    std::cout << "angka_sizet + huruf_char = " << angka_sizet + huruf_char << std::endl;
    std::cout << "angka_sizet + (size_t)huruf_char = " << angka_sizet + (size_t)huruf_char << std::endl;
    std::cout << "(char)angka_sizet + huruf_char = " << (char)angka_sizet + huruf_char << std::endl;
    //std::cout << "angka_sizet + huruf_string = " << angka_sizet + huruf_string << std::endl;
    //std::cout << "angka_sizet + (size_t)huruf_string = " << angka_sizet + (size_t)huruf_string << std::endl;
    //std::cout << "(std::string)angka_sizet + huruf_string = " << (std::string)angka_sizet + huruf_string << std::endl;

    std::cout << std::endl;
    
    std::cout << "angka_ssizet + angka_ssizet = " << angka_ssizet + angka_ssizet << std::endl;
    std::cout << "angka_ssizet + desimal_float = " << angka_ssizet + desimal_float << std::endl;
    std::cout << "angka_ssizet + (ssize_t)desimal_float = " << angka_ssizet + (ssize_t)desimal_float << std::endl;
    std::cout << "(float)angka_ssizet + desimal_float = " << (float)angka_ssizet + desimal_float << std::endl;
    std::cout << "angka_ssizet + desimal_double = " << angka_ssizet + desimal_double << std::endl;
    std::cout << "angka_ssizet + (ssize_t)desimal_double = " << angka_ssizet + (ssize_t)desimal_double << std::endl;
    std::cout << "(double)angka_ssizet + desimal_double = " << (double)angka_ssizet + desimal_double << std::endl;
    std::cout << "angka_ssizet + huruf_char = " << angka_ssizet + huruf_char << std::endl;
    std::cout << "angka_ssizet + (ssize_t)huruf_char = " << angka_ssizet + (ssize_t)huruf_char << std::endl;
    std::cout << "(char)angka_ssizet + huruf_char = " << (char)angka_ssizet + huruf_char << std::endl;
    //std::cout << "angka_ssizet + huruf_string = " << angka_ssizet + huruf_string << std::endl;
    //std::cout << "angka_ssizet + (ssize_t)huruf_string = " << angka_ssizet + (ssize_t)huruf_string << std::endl;
    //std::cout << "(std::string)angka_ssizet + huruf_string = " << (std::string)angka_ssizet + huruf_string << std::endl;

    std::cout << std::endl;
    
    std::cout << "desimal_float + desimal_float = " << desimal_float + desimal_float << std::endl;
    std::cout << "desimal_float + desimal_double = " << desimal_float + desimal_double << std::endl;
    std::cout << "desimal_float + (float)desimal_double = " << desimal_float + (float)desimal_double << std::endl;
    std::cout << "(double)desimal_float + desimal_double = " << (double)desimal_float + desimal_double << std::endl;
    std::cout << "desimal_float + huruf_char = " << desimal_float + huruf_char << std::endl;
    std::cout << "desimal_float + (float)huruf_char = " << desimal_float + (float)huruf_char << std::endl;
    std::cout << "(char)desimal_float + huruf_char = " << (char)desimal_float + huruf_char << std::endl;
    //std::cout << "desimal_float + huruf_string = " << desimal_float + huruf_string<< std::endl;//disini desimal juga sama seperti angka diatas
    //std::cout << "desimal_float + (float)huruf_string = " << desimal_float + (float)huruf_string<< std::endl;//disini desimal juga sama seperti angka diatas
    //std::cout << "(std::string)desimal_float + huruf_string = " << (std::string)desimal_float + huruf_string<< std::endl;//disini desimal juga sama seperti angka diatas
    
    std::cout << std::endl;
    
    std::cout << "desimal_double + desimal_double = " << desimal_double + desimal_double << std::endl;
    std::cout << "desimal_double + huruf_char = " << desimal_double + huruf_char << std::endl;
    std::cout << "desimal_double + (double)huruf_char = " << desimal_double + (double)huruf_char << std::endl;
    std::cout << "(char)desimal_double + huruf_char = " << (char)desimal_double + huruf_char << std::endl;
    //std::cout << "desimal_double + huruf_string = " << desimal_double + huruf_string << std::endl;
    //std::cout << "desimal_double + (double)huruf_string = " << desimal_double + (double)huruf_string << std::endl;
    //std::cout << "(std::string)desimal_double + huruf_string = " << (std::string)desimal_double + huruf_string << std::endl;
    
    std::cout << std::endl;
    
    std::cout << "huruf_char + huruf_char = " << huruf_char + huruf_char << std::endl;
    std::cout << "huruf_char + huruf_string = " << huruf_char + huruf_string << std::endl;
    //std::cout << "huruf_char + (char)huruf_string = " << huruf_char + (char)huruf_string << std::endl;
    //std::cout << "(std::string)huruf_char + huruf_string = " << (std::string)huruf_char + huruf_string << std::endl;

    std::cout << std::endl;
    std::cout << "huruf_string + huruf_string = " << huruf_string + huruf_string << std::endl;
    
    return 0;
}
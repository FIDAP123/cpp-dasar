/*
    Latihan 26 Fungsi Pointer dan Reference :
    1.  fungsi yang bertujuan sebagai pengalamatan memori seperti pointer dan reference yang bertujuan agar program bisa 
        lebih menghemat memori pc atau perangkat harus berupa void
*/

#include <iostream>

void fungsi_reference(int &c)
{
    std::cout << "nilai        c = " <<  c << std::endl;
    std::cout << "nilai memori c = " <<  &c << std::endl;
    
}
void p_reference_luas_persegi(int &c)
{
    std::cout << "hasil volume persegi = " << (c) * (c) << std::endl;
}

void p_ptr_volume_persegi(int *);//prototype di dalam fungsi bisa kita tuliskan seperti ini atau kita tambahkan nama variable prototipenya

void fungsi_pointer(int *b);

int main(int argc, char const *argv[])
{
    int a;
    a = 6;
    
    std::cout << "nilai a        = " << a << std::endl;
    std::cout << "nilai memori a = " << &a << std::endl << std::endl;

    fungsi_pointer(&a);//untuk pointer disini harus memakai alamat atau addresnya
    std::cout << std::endl;
    p_ptr_volume_persegi(&a);
    std::cout << std::endl;
    fungsi_reference(a);// sedangkan untuk reference disini menggunakan inputan yang bukan alamatnya tapi valuenya
    std::cout << std::endl;
    p_reference_luas_persegi(a);

    return 0;
}

void p_ptr_volume_persegi(int *aptr)
{
    std::cout << "hasil volume persegi = " << (*aptr) * (*aptr) * (*aptr) << std::endl;
}

void fungsi_pointer(int *b)
{
    std::cout << "nilai memori b = " <<  b << std::endl;
    std::cout << "nilai b        = " << *b << std::endl;//dereferensi
}
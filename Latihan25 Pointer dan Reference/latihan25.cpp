/*
    Latihan 25 Pointer :
    1. a.   pointer berguna mengatur memori pada tipe data tertentu
       b.   perintah &a adalah addresing atau pengalamatan memori, misal &a maksudnya kita ingin memanggil addressing 
            dari a
       c.   pointer dilambangkan *
       d.   pointer tidak cocok dijadikan inputan karena jika dijadikan inputan maka poiter harus berisi pengalamatan 
            memorinya bukan valuenya
       e.   Pointer adalah variable yang hanya bisa menyimpan memori, tetapi kita bisa mengambil value dari memori yang 
            kita tuju dengan cara dereferensing, dereferensing adalah pengambilan value dari alamat memori di dalam pointer
    2. a.   reference adalah sebuah alias dari variable lain yang nama variablenya berbeda tetapi memorinya sama karena 
            reference mengambil pengalamatan memori yang sama dengan variable yg dituju
*/
#include<iostream>

int main(int argc, char const *argv[])
{
    std::cout << "-----------POINTER-----------" << std::endl;
    /*--------------------------Nilai a = 3--------------------------*/
    int a;
    a=3;
    int *aPtr;//* adalah pointer yang menandakan kalau ini berarti kita akan menyimpan address memory kita disini
    aPtr = &a;// bisa juga kita menuliskan langsung int *aPtr = &a
    int *kosongPtr = nullptr;
    int *isi_nullPtr = nullptr;// null disini maksudnya kita membuat pointer dengan address kosong
    isi_nullPtr = &a;// ini maksudnya kita akan mengisi pointer yang alamatnya kosong degan alamat dari a
    
    std::cout<< "nilai a = " << a << std::endl;
    std::cout<< "memori nilai a = " << aPtr << std::endl;
    std::cout<< "memori kosong atau null pointer = " << kosongPtr << std::endl;
    std::cout<< "memori kosong atau null pointer yag diisi memori a = " << isi_nullPtr << std::endl;
    std::cout<< "memori nilai dari aPtr = " << *aPtr << std::endl;

    /*-------------------Nilai a = 90------------------------------*/
    std::cout<< "\n" << std::endl;
    
    a=90;
    int *bPtr;
    bPtr = &a;
    int *kosong1Ptr = nullptr;
    int *isi1_nullPtr = nullptr;
    isi1_nullPtr = &a;
    
    std::cout<< "nilai a = " << a << std::endl;// disini alamat dari a akan selalu sama meskipun valuenya dirubah karena alamat itu disimpan didalam variablenya yaitu a
    std::cout<< "memori nilai a = " << bPtr << std::endl;
    std::cout<< "memori kosong atau null pointer = " << kosong1Ptr << std::endl;
    std::cout<< "memori kosong atau null pointer yag diisi = " << isi1_nullPtr << std::endl;
    std::cout<< "memori nilai dari aPtr = " << *bPtr << std::endl << std::endl;

    std::cout << "-----------Reference-----------" << std::endl;
    //int c; untuk reference kita tidak boleh menulis deklarasi pertama kali dengan variable
    int &c = a;//untuk deklarasinya kita tulisan kan seperti ini, ini artinya kita akan menaruh variable a ke alamat dari c atau alamat c = a
    std::cout << "nilai c = " << c << std::endl;
    std::cout<< "memori nilai c = " << &c << std::endl << std::endl;
    
    c = 2;// dengan ini maka a dan c akan berubah valuenya dan alamatnya juga sama berbeda dengan kita meuliskan lagsung a=c maka sistem akan membuat 2 memori sekaligus, tujuan dari reference adalah supaya komputer lebih ringan untuk menjalankan program karena alamat atau memorinya sama
    
    std::cout << "nilai c = " << c << std::endl;
    std::cout<< "memori nilai c = " << &c << std::endl << std::endl;

    std::cout << "memori nilai a = " << a << std::endl;
    std::cout<< "memori nilai dari a = " << &a << std::endl;
    // disini nilai value atau memori dari a dan b akan sama karena reference
    std::cin.get();
    return 0;
}

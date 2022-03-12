/*
    Latihan 25 Pointer :
    1.  pointer berguna mengatur memori pada tipe data tertentu
    2.  perintah &a adalah addresing atau pengalamatan memori, misal &a maksudnya    
        kita ingin memanggil addressing dari a
    3.  pointer dilambangkan *
*/
#include<iostream>

int main(int argc, char const *argv[])
{
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
    std::cout<< "memori kosong atau null pointer yag diisi = " << isi_nullPtr << std::endl;
    std::cout<< "memori nilai dari aPtr = " << *aPtr << std::endl;

    /*-------------------Nilai a = 90------------------------------*/
    std::cout<< "\n" << std::endl;
    
    a=90;
    int *bPtr;
    bPtr = &a;
    int *kosong1Ptr = nullptr;
    int *isi1_nullPtr = nullptr;
    isi1_nullPtr = &a;
    
    std::cout<< "nilai a = " << a << std::endl;
    std::cout<< "memori nilai a = " << bPtr << std::endl;
    std::cout<< "memori kosong atau null pointer = " << kosong1Ptr << std::endl;
    std::cout<< "memori kosong atau null pointer yag diisi = " << isi1_nullPtr << std::endl;
    std::cout<< "memori nilai dari aPtr = " << *bPtr << std::endl;
    
    

    return 0;
}

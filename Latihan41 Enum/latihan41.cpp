/*
    Latihan 41 Enum :
    1.  Enum adalah data yang berisi index
    2.  Enum berguna untuk mempermudah user membaca kodingan karena dengan enum kita bisa tau letak indexnya
    3.  Kita juga bisa mengatur index di enum
*/

#include<iostream>


int main(int argc, char const *argv[])
{
    enum hari{senin,selasa,rabu,kamis, jumat, sabtu=7, minggu};//enum bisa ditaruh diluar sebelum fungsi main dan didalam fungsi main
    //kita juga bisa mengubah urutan index dari enum dan untuk data setelahnya akan berubah dengan urut
    hari pertama;

    std::cout << selasa << std::endl;
    std::cout << jumat << std::endl;
    std::cout << sabtu << std::endl;

    pertama = selasa;//disini selasa akan menjadi kerword dari pertama

    if (pertama == rabu)//dengan data enum kita jadi lebih mudah membaca index dari enum
    {
        std::cout << "hari pertama hari rabu" << std::endl;
    }
    else
    {
        std::cout << "hari pertama bukan hari rabu" << std::endl;
    }

    if (pertama == selasa)
    {
        std::cout << "hari pertama hari selasa" << std::endl;
    }
    else
    {
        std::cout << "hari pertama bukan hari selasa" << std::endl;
    }


    return 0;
}

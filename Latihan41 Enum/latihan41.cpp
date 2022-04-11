/*
    Latihan 41 Enum :
    1.  b
*/

#include<iostream>

enum hari{senin,selasa,rabu,kamis, jumat, sabtu=7, minggu};

int main(int argc, char const *argv[])
{
    hari pertama;

    std::cout << selasa << std::endl;
    std::cout << jumat << std::endl;
    std::cout << sabtu << std::endl;

    pertama = selasa;

    if (pertama == rabu)
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

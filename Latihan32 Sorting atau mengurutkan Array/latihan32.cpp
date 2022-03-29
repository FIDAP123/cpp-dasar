/*
    Latihan 32 Sorting array atau mengurutkan array:
    1.  sorting berguna untuk mengurutkan array
    2.  sorting berasal dari library algorithm
*/

#include<iostream>
#include<array>
#include<algorithm>

const size_t data_array = 10;

void fungsi_arr_angka (std::array<int,data_array>&array_angka)
{
    std::cout << "[ ";
    for (int &nilai :  array_angka)
    {
        std::cout << nilai << ",";
    }
    std::cout << "\b ]" << std::endl;
}

void fungsi_arr_huruf (std::array<char,data_array>&array_huruf)
{
    std::cout << "[ ";
    for (char &nilai :  array_huruf)
    {
        std::cout << nilai << ",";
    }
    std::cout << "\b ]" << std::endl;
}

int main(int argc, char const *argv[])
{
    std::array<int, data_array> array_angka = {9,6,4,3,2,1,7,8,5,10};
    std::array<char, data_array> array_huruf = {'q','w','e','r','t','y','u','i','o','p'};

    std::cout << "sebelum diurutkan : " << std::endl;
    
    fungsi_arr_angka(array_angka);
    fungsi_arr_huruf(array_huruf);
    
    std::cout << std::endl;

    std::sort(array_angka.begin(),array_angka.end());//sort adalah salah satu fungsi yg ada di library algorithm, jika kita ingin mengurutkan maka memakai fungsi sort ini dan fungsi ini biasanya dipadukan dengan library array untuk fungsi begin dan end nya
    std::sort(array_huruf.begin(),array_huruf.end());
    
    std::cout << "sesudah diurutkan : " << std::endl;
    
    fungsi_arr_angka(array_angka);
    fungsi_arr_huruf(array_huruf);
    return 0;
}

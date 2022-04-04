/*
    Latihan 36 Substitusi String :
    1.  substitusi string atau mengubah nilai string dari kesulurah yaitu swap yg menukar kedua value dan variablenya, 
        lalu replace untuk mengganti kata yg ada ditengah string sesuai keinginan kita, lalu insert untuk menambahkan 
        string ditengah-tengah
    2.  substitusi string dari dalam yaitu replace dan insert lebih mudah menggunakan fungsi find karena dengan fungsi 
        find kita tidak usah menghitung atau mengetahui index dari string yg akan kita masukkan string didalamnya, atau 
        yg ingin kita ganti katanya 
*/

#include<iostream>
#include<string>

int main(int argc, char const *argv[])
{
    std::string kalimat_1 = "sarimin makan mi sarimi";
    std::string kalimat_2("kalau tidak bobok digigit nyamuk");

    std::cout << "Sebelum kalimat 1 dan 2 di swap : " << std::endl;
    std::cout << "kalimat 1 = " << kalimat_1 << std::endl;
    std::cout << "kalimat 2 = " << kalimat_2 << std::endl;
    
    std::cout << std::endl;
    
    kalimat_1.swap(kalimat_2);//untuk swap kita hanya bisa memakai 2 buah variable contoh variable1.swap(variable2);
    std::cout << "Sesudah kalimat 1 dan 2 di swap : " << std::endl;
    std::cout << "kalimat 1 = " << kalimat_1 << std::endl;//disini kalimat 1 dan 2 sudah di tukar sehingga penulisannya menjadi terbalik
    std::cout << "kalimat 2 = " << kalimat_2 << std::endl;

    std::cout << std::endl;

    kalimat_2.replace(kalimat_2.find("makan"),5,"minum");//disini kita dipermudah dengan fungsi find karena find untuk menemukan index awal string dari kata yg ingin di replace
    kalimat_1.replace(6,5,"nggak");//disini rumusnya adalah variable.replace(index,pajang,string kata penggantinya) 
    std::cout << "Sesudah kalimat 1 dan 2 di replace : " << std::endl;
    std::cout << "kalimat 1 = " << kalimat_1 << std::endl;
    std::cout << "kalimat 2 = " << kalimat_2 << std::endl;

    std::cout << std::endl;
    kalimat_2.insert(17,"goreng ");//disini rumusnya adalah variable.replace(index,string kata yg ingin ditambahkan)
    kalimat_1.insert(kalimat_1.find("digigit"),"nanti ");//disini kita dipermudah dengan fungsi find karena find untuk menemukan index awal string dari index yg ingin di tambahkan
    std::cout << "Sesudah kalimat 1 dan 2 di insert kata : " << std::endl;
    std::cout << "kalimat 1 = " << kalimat_1 << std::endl;
    std::cout << "kalimat 2 = " << kalimat_2 << std::endl;

    return 0;
}
/*
    Latihan 35 Akses Substring :
    1.  n
*/

#include<iostream>
#include<string>

int main(int argc, char const *argv[])
{
    std::string kalimat_1("monyet kok pergi ke pasar harusnya ke hutan"); 
    std::string kalimat_2 = "mau jadi Programmer ya harus mau rajin latihan lah, eat sleep code harus mau brother, jangan hanya pengen mau lulus aja lu";
    
    std::cout << "Menampilkan Substring dari kalimat_1 di index ke-7 dan panjang 3 huruf : " << std::endl;
    std::cout << kalimat_1.substr(7,3) << std::endl;//rumus variable.substr(index,panjang)
    
    std::cout << std::endl;
    
    std::cout << "Menampilkan Substring dari kalimat_2 di index ke-9 dan panjang 10 huruf : " << std::endl;
    std::string kalimat_3 = kalimat_2.substr(9,10);//disini fungsi bisa disimpan di variable lain, tipe data variable simpan harus bertipe string, karena fungsi substr menghasilkan string
    std::cout << kalimat_3 << std::endl;//disini kita bisa menampilkan variable kalimat_3 yg menunjuk ke variable kalimat_2

    std::cout << std::endl;

    std::cout << "Posisi index awal dari kata pergi di kalimat_1 posisi 1 = " << kalimat_1.find("pergi") << std::endl;//fungsi find(kata yg dicari) untuk menunjukkan kata yg dicari pada posisi pertama

    std::cout << std::endl;

    std::cout << "Posisi index awal dari kata mau di kalimat_2 posisi 1 : ";
    int kalimat_4 = kalimat_2.find("mau");
    std::cout << kalimat_4 << std::endl;
    std::cout << "Posisi index awal dari kata mau di kalimat_2 posisi 2 : ";
    std::cout << kalimat_2.find("mau", kalimat_4 + 1) << std::endl;//fungsi find(kata yg dicari, variable + 1) untuk menunjuk ke kata yg dicari pada posisi kedua
    //std::cout << kalimat_2.find("mau", kalimat_4 + 2) << std::endl; //hasilnya akan sama dengan yg diatas
    
    std::cout << std::endl;
    
    std::cout << kalimat_2.rfind("mau") << std::endl;//fungsi rfind(kata yg dicari) untuk menunjuk ke kata yg dicari pada posisi terakhir
    
    return 0;
}

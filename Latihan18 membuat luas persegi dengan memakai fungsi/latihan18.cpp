/*
    latihan18 membuat luas persegi dengan memanfaatkan fungsi return dan void
    1.  membuat luas dan keliling kita harus tahu rumusnya terlebih dahulu, kemudian kita hubungkan dengan menyamakan 
        input fungsi dengan variablenya
*/
#include<iostream>

double Luas(double pL, double lL)
{
    return pL*lL;// begitupun dengan fungsi ini, fungsi ini akan masuk ke fungsi void dibawah, dan fungsi void akan masuk ke fungsi main
}

double keliling(double pk, double lk)
{
    return 2*(pk+lk);
}

void hasil_luas(double hasil_pL, double hasil_lL)
{
    std::cout << "Luas = " << Luas(hasil_pL,hasil_lL) << std::endl;//disini fungsi akan terpaggil dari int main(), disini fungsi akan terhubung jika kita menuliskan kode yang sama seperti 2 tipedata dan variable diatas
}

void hasil_keliling(double hasil_pk, double hasil_lk)
{
    std::cout << "keliling = " << keliling(hasil_pk,hasil_lk) << std::endl;
}

int main(int argc, char const *argv[])
{
    double input_p, input_l;
    
    std::cout << "masukkan panjang = ";
    std::cin >> input_p;
    std::cout << "masukkan lebar = ";
    std::cin >> input_l;

    hasil_luas(input_p,input_l);//maksutnya kita mengisi 2 tipe data dari fungsi void hasil luas, kita mengganti hasil_pk dan hasil_lk menjadi bilangan inputan dari yang kita ketik, dan data tersebut harus berupa angka karena tipe datanya double
    hasil_keliling(input_p,input_l);
    return 0;
}

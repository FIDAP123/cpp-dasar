/*
    latihan 18 membuat luas persegi dengan memanfaatkan fungsi return dan void
    1.  membuat luas dan keliling kita harus tahu rumusnya terlebih dahulu, kemudian kita hubungkan dengan menyamakan 
        input fungsi dengan variablenya
*/
#include<iostream>

double Luas(double pL, double lL)
{
    return pL*lL;// begitupun dengan fungsi ini, fungsi ini akan masuk ke fungsi void dibawah, dan fungsi void akan masuk ke fungsi main dan di inputan fungsi akan dimasukkan variable sesuai yang kita tuliskan
}

double keliling(double pk, double lk)
{
    return 2*(pk+lk);
}

void hasil_luas(double hasil_pL, double hasil_lL)
{
    std::cout << "Luas = " << Luas(hasil_pL,hasil_lL) << std::endl;//disini fungsi akan terpaggil dari int main(), disini fungsi akan terhubung jika kita menuliskan kode yang sama di kedua inputan fungsinya
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

    hasil_luas(input_p,input_l);//maksutnya kita memanggil dari fungsi void hasil luas dengan mengisi input nya sesuai yang kita tuliskan pada variable input_p dan input_l, kita mengganti hasil_pk dan hasil_lk menjadi bilangan inputan dari yang kita ketik, dan data tersebut harus berupa angka karena tipe datanya double.
    hasil_keliling(input_p,input_l);
    return 0;
}

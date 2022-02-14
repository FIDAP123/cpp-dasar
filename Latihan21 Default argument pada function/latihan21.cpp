/*
    Latihan 21 Default argumen pada fungsi :
    1.  default argumen adalah nilai default atau nilai ketetapan jika kita tidak menuliskan jumlah angka pada argumen 
        sesuai perintah yang tertera di awal fungsi dalam hal ini saya menggunakan prototype
    2.  default argumen jika ditaruh di argumen pertama maka dalam fungsi ini double a=0 maka argumen kedua harus ditulis 
        default argumennya dalam fungsi ini double t=0
    3.  default argumen jika ditaruh di tengah"nya maka argumen setelahnya harus ditulis
    4.  default argumen jika ditaruh di akhir maka di argumen awal dan seterusnya sampai argumen sebelum terakhir tidak 
        apa" jika tidak dituliskan
*/
#include<iostream>

double luas_segitiga(double a=0, double t=0);//double a=0 dan double t=0 adalah default dari fungsi ini sehingga jika kita ingin menampilkan fungsinya tanpa menuliskan argumennya maka argumen akan berisi a=0 dan t=0
double volume_prisma_segitiga(double a, double t=0, double T=0);

int main(int argc, char const *argv[])
{
    std::cout << "Luas segitiga = " << luas_segitiga(5,4) << std::endl;//kita bisa mengeksekusi perintah ini tanpa memberikan argumennya karena kita sudah menuliskan defaultnya diatasnya, jika kita menuliskan argumennya maka defaulrnya akan tergantikan karena default akan mengisi ketika kita tidak menulis argumen dari fungsinya
    std::cout  << "Volume prisma segitiga = " << volume_prisma_segitiga(2,4,6) << std::endl;
    
    return 0;
}

double luas_segitiga(double a, double t)
{
    return 0.5*(a*t);
}

double volume_prisma_segitiga(double a, double t, double T)
{
    return (0.5*(a*t))*T;
}
/*
Latihan 12 Control Flow dengan menggunakan Continue dan Break :
1.  a.  Continue hanya bisa dilakukan di dalam loop dengan memakai syarat boolean dari 
        if atau switch case
    b.  Continue harus diletakkan terpisah dengan output agar output dapat ditampilkan 
        dalam hal ini di dalam perintah if atau switch case, kalau ingin menampilkannya 
        taruh dibawahnya yaitu tetap di bagian loop agar loop tetap jalan, karena angka 
        yg ada pada syarat if atau switch case tersebut akan di skip
2.  a.  Break hanya bisa di pakai di looping dan switch case
    b.  Break berfungsi sebagai pemberhenti hitungan ketika looping dan switch case 
        terjadi
    c.  Output harus diletakkan sebelum perintah break bahkan harus di atas syarat 
        booleannya yaitu ketika if atau case yg terdapat kata break di switch case
3.  Control Flow pada 3X Looping
    a. loop akan di putus atau mundur 2 kali yaitu yang pertama sebagai syarat atau   
       boolean pengganti if atau switch case lalu yang ke dua pengeksekusiannya jadinya loop akan kembali lagi ke loop pertama selajutnya 
*/
#include <iostream>

int main()
{
    int a,b,c,d,e,f,g,h;

    a=1;
    do
    {
        a++;//increment atau aritmatika pada looping harus diletakkan diatas continue 
        //agar sistem tidak eror
        switch (a)
        {
        case 5:
            
            std::cout << a << " contiue" << std::endl;//perintah ini tidak akan dilaksanakan 
            continue;//continue artinya lanjutkan, maksutnya melanjutkan hitungan dari 
            //loop yg berlangsung dengan mengabaikan atau men skip 1 bilangan sesuai 
            //syarat atau booleannya, perintah continue harus di gunakan dengan syarat 
            //boolean atau if dan switch case
            //karena control flow berfungsi mengontrol looping dengan memanfaat kan boolean 
            //dari syarat if atau switch case
        }
        if (a==10)
        {
            std::cout << a << " break" << std::endl;
            break;//break digunakan untuk mengeluarkan urutan yg terjadi didalam loop 
            //atau switch case
        }
        std::cout << "Do While Loop = " << a << std::endl;//cout harus ditaruh di belakang karena 
        //syarat continue yaitu operasi bilangan dulu atau incremen, decremen lalu if atau switch 
        //case beserta continue
    } while (a<=12);
    std::cout << std::endl;

    b=2;
    while (b<=12)
    {
        b++;
        switch (b)
        {
        case 5:
            
            std::cout << b << " contiue" << std::endl;
            continue;
        }
        if (b==10)
        {
            std::cout << b << " break" << std::endl;
            break;
        }
        std::cout << "While Loop = " << b << std::endl;
    }
    std::cout << std::endl;

    for (c = 3; c <= 12; c++)
    {
        switch (c)
        {
        case 5:
            
            std::cout << c << "contiue" << std::endl;
            continue;
        }
        if (c==10)
        {
            std::cout << c << "break" << std::endl;
            break;
        }
        std::cout << "For Loop = " << c << std::endl;
    }
    std::cout << std::endl;
    
    /*looping di dalam looping dengan break*/
    e= 1;
    for (int d = 1; d <= 10; d++)
    {
        std::cout << "d looping " << d << std::endl;

        while(e<=d)//program akan disamakan dengan if karena semua program yang 
        //mengalir seperti loop,switch case, if akan dibatalkan oleh break
        {

            std::cout << "e looping " << e << std::endl;
            e++;
            break;
        }
        
    }

    /*-------------------------------3X looping-------------------------------------*/
    std::cout << std::endl;
    std::cout << "penambahan control flow untuk 3X Looping" << std::endl;

    int count;
    std::cout << "masukkan angka" << std::endl;
    std::cin >> count;
    for (int f = 1; f <= count; f++)
    {
        for (int g = 1; g <= f; g++)
        {
            for (int h = 1; h <= g; h++)
            {
                break;
                std::cout << h << "h" << std::endl;
            }
            std::cout << g << " g" << std::endl;
        }
        std::cout << f << " f" << std::endl;
    }
    /*untuk control flow di 3x looping looping akan di putus untuk 2 yaitu yang terakhir yang di eksekusi akan dijadikan sebagai syarat booleannya lalu loop sebelumnya akan di putus kembali ke loop sebelumnya yaitu loop pertama */
    return 0;
}
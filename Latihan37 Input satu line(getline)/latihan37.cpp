/*
    Latihan 37 Input satu line (getline) :
    1.  fungsi getline adalah salah satu yg berfungsi supaya kita bisa menuliskan input dengan spasi karena dengan cin 
        jika kita menuliskan spasi maka kata setelah spasi akan disimpan untuk variable yg memakai cin kedua
    2.  saat memakai getline jangan memakai cin di awal karena jika kita memakai cin di awal maka getline yg dibawahnya 
        akan tidak bisa diisi
*/

#include<iostream>
#include<string>

int main(int argc, char const *argv[])
{
    std::string input_line1, input_line2;
    std::string input;

    // std::cout << "masukkan kata : " << std::endl;
    // std::cin >> input; //untuk getline tidak boleh ada cin di atasnya karena jika ada maka input_line akan dilewati saja dan kita tidak bisa memasukkan input di getline
    // std::cout << "kalimat yg anda masukkan = " << input << std::endl;
    
    std::cout << "masukkan kalimat 1 : " << std::endl;
    std::getline(std::cin,input_line1);
    std::cout << "kalimat yg anda masukkan = " << input_line1 << std::endl;
    
    std::cout << std::endl;
    
    std::cout << "masukkan kalimat 2 : " << std::endl;
    std::getline(std::cin,input_line2);
    std::cout << "kalimat yg anda masukkan = " << input_line2 << std::endl;
    
    std::cout << std::endl;
    
    std::cout << "masukkan kata = ";
    std::cin >> input; //kita boleh menaruh cin setelah fungsi getline
    std::cout << "kalimat yg anda masukkan = " << input << std::endl;
    
    std::cout << std::endl;

    std::cout << "menghitung kata" << std::endl;
    int posisi,jumlah;
    posisi = 0;
    jumlah = 0;

    while (true)
    {
        posisi = input_line1.find(" ",posisi + 1);
        std::cout << "posisi = " << posisi << " jumlah = " << jumlah << std::endl;
        jumlah++;
        if (posisi <= 0)
        {
            std::cout << "posisi = " << posisi << " jumlah = " << jumlah << std::endl;
            std::cout << "\njumlah kata = " << jumlah << std::endl;
            break;
        }
        
    }
    

    return 0;
}

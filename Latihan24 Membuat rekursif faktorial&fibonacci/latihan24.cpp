/*
    Latihan 24 Membuat fungsi rekursif faktorial dan fibonacci
*/
#include<iostream>

int faktorial(int a)
{
    if (a==1)
    {
        return a;
    }
    else
    {
        return a * faktorial(a-1);
    }
}

void p_faktorial(int a)
{
    std::cout << "faktorial = " << faktorial(a) << std::endl;
}

int main(int argc, char const *argv[])
{
    int a;
    
    std::cout << "masukkan nilai faktorial = ";
    std::cin >> a;
    std::cout << "\n";

    p_faktorial(a);
    
    return 0;
}

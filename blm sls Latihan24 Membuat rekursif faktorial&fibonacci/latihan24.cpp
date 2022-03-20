/*
    Latihan 24 Membuat fungsi rekursif faktorial dan fibonacci
*/
#include<iostream>

int faktorial(int a);
void p_faktorial(int a);

int fibonacci (int a);
void p_fibonacci(int a);


int main(int argc, char const *argv[])
{
    int a;

    std::cout << "masukkan nilai faktorial = ";
    std::cin >> a;
    std::cout << "\n";

    p_faktorial(a);
    p_fibonacci(a);
    
    return 0;
}

int faktorial(int a)
{
    if (a==1)
    {
        std::cout << a << "= " ;
        return a;
    }
    else
    {
        std::cout << a << "*";
        return a * faktorial(a-1);
        
    }
}

void p_faktorial(int a)
{
    std::cout << a << "!= " << faktorial(a) << std::endl;
}

int u1_global,u2_global;

int fibonacci (int a, int u1, int u2)
{
    if (a <= 1)
    {
        u1_global= 0;
        std::cout << u1_global << std::endl;
        return u1_global;
    }
    
    else
    {
        u1 = u1 + u2;
        std::cout << u1 << ", ";
        a= a-1;
        u2 = u1 + u2;
        std::cout << u2 << ", ";
        return fibonacci(a-1,u1,u2) + u2;
    }
}
void p_fibonacci(int a)
{
    u1_global = 0;
    u2_global = 1;
    std::cout << "fibonacci "<< a << " = " << fibonacci(a,u1_global,u2_global) << std::endl;
}
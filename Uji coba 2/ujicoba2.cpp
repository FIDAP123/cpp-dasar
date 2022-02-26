#include<iostream>

std::string halo(int a)
{
    std::string segitiga = "x ";
    if (a==1)
    {
        return segitiga;
    }
    else
    {
        return segitiga + halo(a-1);
    }
    
    
}

int main(int argc, char const *argv[])
{
    std::cout << "x adalah :\n";
    std::cout << halo(4);
    return 0;
}

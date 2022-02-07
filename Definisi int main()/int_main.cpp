#include <iostream>

int main(int argc, char** argv) //bisa ditulis int main() atau int main(int argc, char const *argv[])
{
    std::cout << "Have " << argc << " arguments:" << std::endl;
    for (int i = 0; i <argc; ++i) 
    {
        std::cout << argv[i] << std::endl;// ini menunjukkan alur program int main dengan argc sebagai jumlah argumen yang sudah ditulis di dalam argumen vektor atau argv, vektor hampir sama dengan char
    }
    
    return 0;//mengembalikan nilai argc ke nol agar program dapat di eksekusi
}
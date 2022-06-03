/*
  Latihan 50 Membaca file dengan tellg dan seekg :
  1.  tellg dan seekg merupakan function yg hanya dapat digunakan di input file stream atau ifstream
  2.  tellg bernilai 0 jika kita tidak menggerakkan kursor dengan perintah seekg
  3.  tellp bisa dipakai dan fungsinya sama dengan tellg tapi lebih baik memakai tellg untuk mengetehui ukuran filenya
  4.  sebelum perintah tellg dan tellp untuk menghitung jumlah kata kita harus menggunakan seekg agar bisa menggerakkan 
      kursor agar semua huruf atau angka bisa dibaca mesin
*/
#include <iostream>     
#include <fstream>  

int main (int argc, char const *argv[]) 
{
  std::fstream infile ("test.txt", std::ios::in | std::ios::binary);
  std::fstream inputfile ("test2.txt", std::ios::in | std::ios::binary);

  // get length of file:
  std::cout << "tellp = " << infile.tellp() << std::endl;
  std::cout << "tellg 1 = " << infile.tellg() << std::endl;//disini tellg akan bernilai 0 karena kursor berada di index 0 atau index awal
  infile.seekg (0, infile.end);
  std::cout << "tellp = " << infile.tellp() << std::endl;//disini tellp jg bisa kita pakai sama dengan tellg tetapi lebih baik lagi memakai tellg karena tellg untuk input sedangkan tellp untuk output
  std::cout << "tellg 2 = " << infile.tellg() << std::endl;//disini tellg akan bernilai sesuai jumlah kata yg ada di dalam file karena kursor sudah berpindah dengan menggunakan perintah seekg
  int length = infile.tellg();
  infile.seekg (0, infile.beg);

  // allocate memory:
  char * buffer = new char [length];//disini memakai pointer agar meghemat pemakaian memori dibanding memakai variable
  char buffer1[length];//disini memakai pointer agar meghemat pemakaian memori dibanding memakai variable

  std::cout << std::endl;

  // read data as a block:
  infile.read (buffer1,length);//perintah read adalah perintah pengganti variable, tujuannya agar pemakaian memori lebih ringan

  std::cout << std::endl;
    
  // print content:
  std::cout << "infilei file : \n" << std::endl;
  std::cout.write (buffer1,length) << std::endl;
  std::cout << "tellp = " << infile.tellp() << std::endl;
  //delete buffer
  delete[] buffer;//delete berfungsi agar data yg disimpan sementara di pointer dapat terhapus dan lebih menghemaat memori

  infile.close();
  return 0;
}
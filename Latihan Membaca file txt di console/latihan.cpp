// read a file into memory
#include <iostream>     // std::cout
#include <fstream>      // std::ifstream

int main () {
  std::ifstream is ("test.txt", std::ifstream::binary);
  if (is) 
  {
    // get length of file:
    is.seekg (0, is.end);
    int length = is.tellg();
    std::cout << "length = " << length << std::endl;
    is.seekg (0, is.beg);

    // allocate memory:
    char * buffer = new char [length];
    std::cout << "buffer = " << buffer << std::endl;
    std::cout << "*buffer = " << *buffer << std::endl;

    // read data as a block:
    is.read (buffer,length);


    is.close();

    // print content:
    std::cout.write (buffer,length) << std::endl;
    std::cout << "length = " << length << std::endl;

    // delete[] buffer;
    std::cout << "buffer = " << buffer << std::endl;
    std::cout << "*buffer = " << *buffer << std::endl;
  }

  return 0;
}
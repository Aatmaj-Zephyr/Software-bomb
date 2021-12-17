#include <fstream>
#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main() {
  ofstream fout;
  fout.open("file.txt");
  for (int i = 10000000; i >= 0; i--) {
    fout << "Hello";
  }
}

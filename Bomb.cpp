#include <iostream>
#include <string.h>
#include<fstream>
#include<stdlib.h>

using namespace std;

int main()
{   ofstream fout;
    fout.open("file.txt");
	for(int i=10000000;i>=0;i--){
		fout<<"Hello";
	}
}

//FILE HANDLING PROGRAM//
#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
void copyfile(char* f1,char* f2);
void copyfile(char* f1,char* f2)
{
    ifstream fin;
    ofstream fout;
    char ch;
    fin.open(f1);
    fout.open(f2);
    ch=fin.get();
    while(!fin.eof())
    {
        fout<<ch;
        ch=fin.get();
    }
    fin.close();
    fout.close();
}
int main()
{
    copyfile("chmmoo.txt","ABC.txt");
    cout<<"File Copy is Completed ";
    getch();
}

//FILE HANDLING PROGRAM//
#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
void copyfile(char* f1,char* f2);      //FUNCTION DECLARATION//
void copyfile(char* f1,char* f2)         //CREATE A NEW FUNCTION(copyfile)//
{
    ifstream fin;                    //ifstream is Function It'll Open Our Exist file and *fin is a object//
    ofstream fout;                   //ofstream is a Function It'll Copy our Exist File Data to Another File and *fout is a object//
    char ch;
    fin.open(f1);                        //fin a function It'll entered in our Exist file 
    fout.open(f2);                       //fout Is  a FUnction It'll open our new file
    ch=fin.get();                          //get is function which read our exist file data
    while(!fin.eof())                    //eof Is a Function It control the loop to the end of file data
    {
        fout<<ch;
        ch=fin.get();
    }
    fin.close();                            //close is a function which close our exist file //
    fout.close();                             //And also Close our New File//
}
int main()
{
    copyfile("chmmoo.txt","ABC.txt");                //"chmmoo.txt" Is a txt File Which Was already in our Computer
    cout<<"File Copy is Completed ";                    //"ABC.txt" Is a new Created file and copy exist file data in this file
    getch();
}

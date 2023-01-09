//Tema I, Comunicaţii codificate :: PCLP 13 DECEMBRIE 2022 (CATALIN DANIEL BRADAC) ETTI grupa I, anul I IESC
//Criptarea mesajului

#include <iostream>
#include <fstream>
#include <cstring>
#include <string>

using namespace std;
int main()
{
    string file_text;
    ofstream g("cod.txt");
    cout<<"Te rog introdu textul ce urmeaza a fi criptat: ";
    //char a[101];
    //cin.getline(a, 101);
    getline(cin,file_text);
    int i, v, nr1, q[101], j;
    cout<<"V=";cin>>v;
    g<<v;
    //for (i = 0; i <= strlen(a); i++)
    //{
      //  nr1 = (unsigned int)a[i];
      //  q[i] = nr1;
    //}

    //for(j=0; j<i; j++)
    //{
       // q[j] = (q[j] + v) % 256;
 // g<<(char)q[j]<<" ";
    //}

    for(i=0;i<file_text.length();i++)
        {
            file_text.at(i)=(file_text.at(i)+v)%256;
        }
    g<<file_text;
    g.close();

 return 0;
}

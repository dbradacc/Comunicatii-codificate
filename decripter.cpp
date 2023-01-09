//Tema I, Comunicaţii codificate :: PCLP 13 DECEMBRIE 2022 (CATALIN DANIEL BRADAC) ETTI grupa I, anul I IESC
//Criptarea mesajului

#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
int main()
{
    ifstream f("cod.txt");
    char a[101];
    f.getline(a, 101);
    int i, v=0, nr1, q[101], j;
    v = (int)a[0] -48;
    for (i = 1; i <strlen(a); i++)
    {
        nr1 = (int)a[i];
        q[i] = nr1;
    }

    for(j=1; j<i; j++)
    {
        q[j] = (q[j] - v) % 256;
        cout<<(char)q[j];
    }



 return 0;
}

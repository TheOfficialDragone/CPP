//
//  main.cpp
//  Cifrario Cesare
//
//  Created by Rocco Carpi on 09/06/21.
//

#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;


void Cifra(string s,int k);        // stringa da cifrare + chiave
void cifra_File(char c , int k);  // carattere da cifrare + chiave

int main(int argc, const char * argv[])
{
    /*
    string input;
    cout << "inserire frase: ";
    cin>>input;
    
//    cout << input;
    
    int k = 3;
    Cifra(input, k);
*/
    char var;
    ifstream fin("daCifrare.txt");
    int k = 3;
    
    cout << "inserire chiave cifratura: ";
    cin>>k;
    
    while (fin.get(var))
    {
        cifra_File(var, k);
        cout << "sto cifrando.."<< endl;
    }
    fin.close();
    
    return 0;
}

void Cifra(string s , int k)
{
    int i;
    long n = s.length();
    
    for( i = 0; i < n; i++)
    {
        s[i] = s[i] + k;
    }
    
    cout<< "frase cifrata: "<< s << endl;
}


void cifra_File(char c , int k)
{
    ofstream cifrato("Cifrato.txt");
    char enc = (char)c + k;
    
    if (enc > 'Z')
    {
        enc = (c - (26-k));
    }
    
//    cout << enc;
    cifrato<<enc;       //FIXME NON STAMPA SU FILE MA IN ENC C'E LA FRASE CIFRATA
   
}

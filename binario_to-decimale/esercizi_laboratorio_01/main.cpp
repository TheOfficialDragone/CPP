//
//  main.cpp
//  esercizi_laboratorio_01
//
//  Created by Rocco Carpi on 13/05/21.
//

#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

    int main ()
{
        int d=0,len,i=0;
        char b[10];
        cout<< "Inserisci la sequenza di bit\n ";
        cin>>b;
        len=strlen(b);
        while(len!=0)
        {
                if (b[i]=='1')
                    d=d+pow(2,(len-1));
                
                len--;
                i++;
        }

        cout << "\nValore decimale: " << d << "\n";
        return 0;
        
    
}

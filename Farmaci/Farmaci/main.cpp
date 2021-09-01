//
//  main.cpp
//  Farmaci
//
//  Created by Rocco Carpi on 10/03/21.
//

#include <iostream>
#include <fstream>
#include <string>

#define NFARMACI 100

using namespace std;

typedef struct {int G,M,A;}TipoData;

typedef struct{string NomeFarmaco;
             float costo;
            TipoData Scadenza;} TipoFarmaco;

void estraiData(const string d,int& G, int& M, int& A)
{
    string temp;
    
    temp = d.substr(0,2);
    G = stoi(temp);
    
    temp = d.substr(3,2);
    M = stoi(temp);
    
    temp = d.substr(6,4);
    A = stoi(temp);
}

int main(int argc, const char * argv[])
{
    TipoFarmaco farmaci[NFARMACI];
    string nome, data; float costo;
    int conta;
    int giorno,mese,anno;
    
    ifstream file;
    file.open("farmaci.txt");
    
    if (file.fail())
    {
        cerr <<"impossibile leggere file"<< endl;
        return -1;
    }
    
    
    for (conta = 0; conta <NFARMACI && !file.eof(); conta++)
    {
        file >> nome >> costo >> data;
        
        estraiData(data, giorno, mese, anno);
        
        if (anno > 2021)
        {
            farmaci[conta].NomeFarmaco = nome;
            farmaci[conta].costo = costo;
            farmaci[conta].Scadenza.G = giorno;
            farmaci[conta].Scadenza.M = mese;
            farmaci[conta].Scadenza.A = anno;
            
        }
        
    }
    
    
    // stampo tutti i farmaci letti
     
    for (int i = 0; i<conta; i++)
    {
        cout << "Nome farmaco: "<< farmaci[i].NomeFarmaco << " costo: "<< farmaci[i].costo << " data di scadenza: "<<farmaci[i].Scadenza.G << "/"<<  farmaci[i].Scadenza.M<< "/"<<farmaci[i].Scadenza.A << endl;
    }
     
    // visualizzo il farmaco piu costoso
    int max = 0;
    int indice = 0;
    for (int i = 0; i<conta; i++)
    {
        if (farmaci[i].costo > max)
        {
            max = farmaci[i].costo;
            indice = i;
        }
        
    }
    
    cout << endl << "il farmaco piu costoso è: "<< farmaci[indice].NomeFarmaco << " con un costo di: " << farmaci[indice].costo<< " " << "euro"<<endl;
    
    file.close();
    return 0;
}

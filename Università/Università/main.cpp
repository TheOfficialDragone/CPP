//
//  main.cpp
//  Università
//
//  Created by Rocco Carpi on 13/05/21.
//

#include <iostream>

#include "Docenti.hpp"
#include "Studente.hpp"
#include "Corso_di_Laurea.hpp"

using namespace::std;

int main(int argc, const char * argv[]) {
   
    corso a("farmacia", 12, "medicina");
    Docente d1("andrea","prati",100,a);
    cout<<d1.visualizza()<<endl;
    return 0;
}

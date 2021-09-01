//
//  main.cpp
//  Linea_assemblaggio
//
//  Created by Rocco Carpi on 11/07/21.
//

#include <iostream>
#include "Ascia.hpp"
#include "Cassetto_grezzo.hpp"
#include "Pezzo.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    /*
    ascia betulla("betulla", false);
    ascia quercia("quercia", false);
    */
    
    cassetto c("quercia", false);
    
   cout << c.get_nome()<< endl;
   cout<< c.get_difettoso();
    
    return 0;
}

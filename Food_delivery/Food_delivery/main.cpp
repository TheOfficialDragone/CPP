//
//  main.cpp
//  Food_delivery
//
//  Created by Rocco Carpi on 31/08/21.
//

#include <iostream>
#include "Auto.hpp"
#include "Rosticceria.hpp"
#include "Ristorante.hpp"
#include "Motorini.hpp"
#include <vector>

using namespace::std;

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    Auto a1("pippo", 1);
    Auto a2("pluto", 1);
    Auto a3("paperino", 1);
    Auto a4("lolo", 1);
    
    vector<Auto>parco_auto;
    
    parco_auto.push_back(a1);
    parco_auto.push_back(a2);
    parco_auto.push_back(a3);
    parco_auto.push_back(a4);
    
    motorini m1("scooter", 1, 13);
    motorini m2("scooter", 1, 13);
    motorini m3("scooter", 1, 13);
    motorini m4("scooter", 1, 13);
    
    vector<motorini>parco_motorini;
    
    parco_motorini.push_back(m1);
    parco_motorini.push_back(m2);
    parco_motorini.push_back(m3);
    parco_motorini.push_back(m4);
   
    
    ristorante r1("ristorante", 2, 4, 34.4, "pizza", 34, parco_auto);
    ristorante r2("ristorante", 4, 4, 37.4, "kebab", 34, parco_auto);
    ristorante("ristorante", 5, 6, 43.4, "pesce", 21, parco_auto);
    
    Rosticceria("rosticceria", 5, 7, 54.6, "pollo", 12, parco_motorini);
    
    
    return 0;
}

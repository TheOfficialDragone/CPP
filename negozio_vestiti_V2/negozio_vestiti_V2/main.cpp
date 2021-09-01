//
//  main.cpp
//  negozio vestiti
//
//  Created by Rocco Carpi on 09/08/21.
//

#include <iostream>
#include "Vestito.h"
#include "Negozio.h"
#include "Pantalone.h"
#include "Cliente.h"
#include "Camicia.h"
#include <vector>
int main(int argc, const char * argv[])
{
 
    Camicia c1("camicia", "xl", 12, "a", true);
    Camicia c2("camicia", "xl", 12, "a", true);
    Camicia c3("camicia", "xl", 12, "a", true);
    Camicia c4("camicia", "xl", 12, "a", true);
    
    Pantalone p1("panta", "l", 21, "viola", false);
    Pantalone p2("panta", "l", 21, "viola", false);
    Pantalone p3("panta", "l", 21, "viola", false);
    
    
    Cliente d1("paperino", "araldi", 'm');
    
    vector<Vestito>cp;
    
    cp.push_back(p2);
    cp.push_back(c1);
    cp.push_back(c2);
    cp.push_back(c3);
    cp.push_back(c4);
    cp.push_back(p3);
    cp.push_back(p1);
    
    
    
    
    Negozio n1("pippo", "pluto", cp);
    
    /*
   cout << d1.compra(n1, c2, 4) << endl;
    cout << d1.compra(n1,p1,3) << endl;
    
    cout << n1.cercaVestito("camicia") <<endl;
     */
    cout << n1.faiConto("panta", 3)<< endl;
    
    
    
    
    return 0;
}

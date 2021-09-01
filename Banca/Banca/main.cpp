//
//  main.cpp
//  Banca
//
//  Created by Rocco Carpi on 18/05/21.
//

#include <stdio.h>

#include "banca.hpp"
#include "banca_online.hpp"
#include "Banca_tradizionale.hpp"
#include "banca_online.hpp"
#include "conto_corrente.hpp"
#include "Conto_deposito.hpp"

using namespace std;

int main()
{
    banca_tradizionale unicredit = banca_tradizionale("unicredit", 3, 4, "milano", 123);
    banca_tradizionale intesa = banca_tradizionale("intesa", 2, 5, "torino", 125);
    banca_online hype = banca_online("hype", "www.hype.com");
    
    conto_corrente paolo = conto_corrente("Paolo Ferrari", 12354, 999);
    
}

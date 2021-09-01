#include <iostream>
#include <vector>
#include "Negozio.h"
#include "Vestito.h"
#include "Pantalone.h"
#include "Camicia.h"
#include "Gonna.h"
#include "Cliente.h"

using namespace std;

int main()
{
    vector<Negozio> citta;

    Negozio n1("Moda mare", "Via Ippolito Nievo, 22 - Roma");
    Negozio n2("Moda mare 2", "Via Ippolito Nievo, 22 - Roma");
    Negozio n3("Moda mare", "Via Ippolito Nievo, 22 - Roma");
    Negozio n4("Moda mare", "Via Ippolito Nievo, 22 - Roma");

    Vestito *v1 = new Pantalone("Jeans blue", "XL", "blu", 25.00, false);
    Vestito *v2 = new Camicia("Camicia", "XL", "blu", 100.00, true);
    Vestito *v3 = new Pantalone("Jeans blue", "XL", "blu", 25.00, true);
    Vestito *v4 = new Gonna("Minigonna", "XL", "blu", 125.00, 25.0);

    n1.aggiungiVestito(v1);
    n1.aggiungiVestito(v2);
    n1.aggiungiVestito(v3);
    n1.aggiungiVestito(v4);
    n1.aggiungiVestito(v4);
    n1.aggiungiVestito(v4);
    n1.aggiungiVestito(v4);
    n1.aggiungiVestito(v4);
    n1.aggiungiVestito(v4);

    n2.aggiungiVestito(v3);

    citta.push_back(n1);
    citta.push_back(n2);

    cout << n1.cercaVestito("Jeans blue") << endl;

    Cliente c("Tizia Caia", 'm');
    cout << n1.faiConto("Minigonna", 4, c) << endl;

    Negozio nmigliore;
    float p;

    c.compra("Jeans blue",2,citta,nmigliore,p);
    cout << nmigliore.getNome() << " - " << p << endl;

    return 0;
}

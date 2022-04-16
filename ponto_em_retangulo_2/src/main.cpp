#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <algorithm>
using std::min;
using std::max;

#include "function.h"

void verificar_pontos(Ponto* P1, Ponto* P2)
{

    Ponto temporario;

    if (!((P1->x < P2->x) || (P1->x == P2->x && P1->y < P2->y) || (P1->y == P2->y && P1->x < P2->x)))
    {
        temporario = *P1;
        *P1 = *P2;
        *P2 = temporario;
    }
}

int main(void)
{
    Ponto P;
    Ponto IE;
    Ponto SD;

    while (cin >> std::ws >> IE.x >> std::ws >> IE.y >> std::ws >> SD.x >> std::ws >> SD.y >> std::ws >> P.x >> std::ws >> P.y)
    {
        if (IE.y == SD.y && IE.x == SD.x)
        {
            std::cout << "invalid" << std::endl;
        }
        else
        {
            verificar_pontos(&IE, &SD);

            location_t result = pt_in_rect(IE, SD, P);

            if (result == 0)
            {
                std::cout << "inside" << std::endl;
            }
            else if (result == 1)
            {
                std::cout << "border" << std::endl;
            }
            else
            {
                std::cout << "outside" << std::endl;
            }
        }
    }

    return 0;

}


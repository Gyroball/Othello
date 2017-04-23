#ifndef PLATEAU_H_INCLUDED
#define PLATEAU_H_INCLUDED
#include "piece.h"
using namespace std;
class Plateau
{
public:
    Piece m_plateau[8][8];
    Plateau();
    ~Plateau();
    bool EstSurPlateau(int x, int y);
    bool EstSurBord(int x, int y);
    bool Casevide(int x, int y);
    Piece* retourcase(int x ,int y);
    void modifCase(int x, int y,Piece p);
    void afficheplateau();
    void graphique();
    bool coupjouable1(int a,int b);
    bool coupjouable2(int a,int b);

};


#endif // PLATEAU_H_INCLUDED

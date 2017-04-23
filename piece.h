#ifndef PIECE_H_INCLUDED
#define PIECE_H_INCLUDED
#include<iostream>
using namespace std;
class Piece
{
protected :

    string m_type;

public :

    Piece();
    Piece(string type);
    ~Piece();
    string getType()const;
    void setType(string type);

    ///virtual void affichage ()=0;

};


#endif // PIECE_H_INCLUDED

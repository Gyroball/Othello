#include "plateau.h"
using namespace std;
Plateau::Plateau()
{


     Piece plateau[8][8];


     for(int i=0;i<8;i++)
     {
         for(int j=0;j<8;j++)
         {
              Piece p(" . ");
             m_plateau[i][j]=p;
         }
     }
     m_plateau[3][3]=Piece(" X ");
     m_plateau[4][4]=Piece(" X ");
     m_plateau[3][4]=Piece(" O ");
     m_plateau[4][3]=Piece(" O ");

}
Plateau::~Plateau()
{

}

void Plateau:: afficheplateau()
{
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)

        {

            cout<<m_plateau[i][j].getType()<<" ";
        }
    cout<< endl;
    }

}

void Plateau::modifCase(int x,int y, Piece p)
{
    m_plateau[x][y]=p;
}
Piece* Plateau::retourcase(int x,int y)
{

    Piece* p=nullptr;
    if(EstSurPlateau(x,y)==true)
    return &m_plateau[x][y];
    else
        return p;
}
bool Plateau::EstSurPlateau(int x, int y)
{
    if((x>=1)&&(x<8)&&(y>=1)&&(y<8))
        return true;
}
bool Plateau::EstSurBord(int x, int y)
{
    if((x==1)||(x==7)||(y==1)||(y==7))
        return true;
    else
            return false;
}
bool Plateau::Casevide(int x,int y)
{
    if ((m_plateau[x][y].getType()==" . ")||((m_plateau[x][y].getType()==" | ")))
        return true;
    else
        return false;
}
bool Plateau::coupjouable1(int a,int b)
{
    if(((EstSurPlateau(a,b)==true)||(EstSurBord(a+1,b)==true)||(EstSurBord(a,b+1)==true)||(EstSurBord(a-1,b)==true)||(EstSurBord(a,b-1)==true)||(EstSurPlateau(a+1,b+1)==true)||(EstSurPlateau(a-1,b-1)==true)||(EstSurPlateau(a+1,b-1)==true)||(EstSurPlateau(a-1,b+1)==true)||(EstSurPlateau(a-1,b+1)==true))&&((m_plateau[a+1][b].getType()==" O ")||(m_plateau[a][b+1].getType()==" O ")||(m_plateau[a-1][b].getType()==" O ")||(m_plateau[a][b-1].getType()==" O ")||(m_plateau[a+1][b+1].getType()==" O ")||(m_plateau[a+1][b-1].getType()==" O ")||(m_plateau[a-1][b-1].getType()==" O ")||(m_plateau[a-1][b+1].getType()==" O "))&&(m_plateau[a][b].getType()==" . "))
{
    return true;
}
else {
    return false;
}
}
bool Plateau::coupjouable2(int a,int b)
{
    if(((EstSurPlateau(a,b)==true)||(EstSurBord(a+1,b)==true)||(EstSurBord(a,b+1)==true)||(EstSurBord(a-1,b)==true)||(EstSurBord(a,b-1)==true)||(EstSurPlateau(a+1,b+1)==true)||(EstSurPlateau(a-1,b-1)==true)||(EstSurPlateau(a+1,b-1)==true)||(EstSurPlateau(a-1,b+1)==true)||(EstSurPlateau(a-1,b+1)==true))&&((m_plateau[a+1][b].getType()==" X ")||(m_plateau[a][b+1].getType()==" X ")||(m_plateau[a-1][b].getType()==" X ")||(m_plateau[a][b-1].getType()==" X ")||(m_plateau[a+1][b+1].getType()==" X ")||(m_plateau[a+1][b-1].getType()==" X ")||(m_plateau[a-1][b-1].getType()==" X ")||(m_plateau[a-1][b+1].getType()==" X "))&&(m_plateau[a][b].getType()==" . "))
{
    return true;
}
else {
    return false;
}
}
void Plateau::graphique ()
 {

      cout << "                                         " << endl;
    cout << "           -----------------------------" << endl;
    cout << "          |     |     |     |     |     |" << endl;
    cout << "           -----------------------------" << endl;
    cout << "          |     |     |     |     |     |" << endl;
    cout << "           -----------------------------" << endl;
    cout << "          |     |     |     |     |     |" << endl;
    cout << "           -----------------------------" << endl;
    cout << "          |     |     |     |     |     |" << endl;
    cout << "          ------------------------------" << endl;
    cout << "          |     |     |     |     |     |" << endl;
    cout << "          ------------------------------" << endl;
 }

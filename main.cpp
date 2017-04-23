#include <iostream>
#include "include.h"
#include "stdlib.h"

using namespace std;


int main()
{
     Plateau game;

    bool victoire=false;
    string reserve[64];
    int cpt=0;
    int cpt2=0;
    int cp3=4;
    int compteursimu;
    int init;
    int test1;
    cout<<"\t_________________________________________"<< endl;
   cout<<"\t\t\tOthello\n"<< endl;
   cout<<"\tCode par   Kenneth Folly"<< endl;
   cout<<"\n\t_________________________________________"<< endl;
   cout<<"\n\n\n\nNouvelle Partie : 1\nNiveau2: 2\n1vs1 : 3\n4:Charger une partie\n"<< endl;

   cin>>init;
    for(int i=0;i<64;i++)
    {
        reserve[i]=" X ";
    }

    switch(init)
{
    case 1:
        system("cls");
    game.afficheplateau();
    while(victoire!=true)
    {
    J1(game,cpt);
        for(int i=1;i<7;i++)
    {
        for(int j=1;j<7;j++)
        {
            renvoi(game,i,j);

        }
    }
    system("PAUSE");
    system("cls");
    fin(game);
    game.afficheplateau();
    system("PAUSE");
    system("cls");
    ordi(game,cpt2);
    fin2(game);
    game.afficheplateau();
    sauvegarde(game);
//test1=test(game,3,3);
           //cout<< test1;
    }
break;
    case 2:
        system("cls");
         system("cls");
    game.afficheplateau();
    while(victoire!=true)
    {
    J1(game,cpt);
        for(int i=1;i<7;i++)
    {
        for(int j=1;j<7;j++)
        {
            renvoi(game,i,j);

        }
    }
    system("PAUSE");
    system("cls");
    fin(game);
    game.afficheplateau();
    system("PAUSE");
    system("cls");
    simulation(game,compteursimu);
    IA_jouer(game,cp3);
    //ordi(game,cpt2);
    //fin2(game);
    game.afficheplateau();
    }
        break;
    case 3:
         system("cls");
    game.afficheplateau();
    while(victoire!=true)
    {
    J1(game,cpt);
        for(int i=1;i<7;i++)
    {
        for(int j=1;j<7;j++)
        {
            renvoi(game,i,j);

        }
    }
    system("PAUSE");
    system("cls");
    fin(game);
    game.afficheplateau();
    system("PAUSE");
    system("cls");
    game.afficheplateau();
    J2(game,cpt2);
     for(int i=1;i<7;i++)
    {
        for(int j=1;j<7;j++)
        {
            renvoi2(game,i,j);

        }
    }
    fin2(game);
    game.afficheplateau();

//test1=test(game,3,3);
           //cout<< test1;
    }
break;
    case 4:
        system("cls");
        charger(game);
        game.afficheplateau();
        while(victoire!=true)
    {
    J1(game,cpt);
        for(int i=1;i<7;i++)
    {
        for(int j=1;j<7;j++)
        {
            renvoi(game,i,j);

        }
    }
    system("PAUSE");
    system("cls");
    fin(game);
    game.afficheplateau();
    system("PAUSE");
    system("cls");
    ordi(game,cpt2);
    fin2(game);
    game.afficheplateau();
    sauvegarde(game);
//test1=test(game,3,3);
           //cout<< test1;
    }

}
return 0;
}

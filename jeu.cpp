#include "include.h"
int JoueurCourant=0;
 void Color(int flags)
{
    HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H,(WORD)flags);
}

void Locate(int x,int y)
{
    HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
    COORD C;
    C.X=(SHORT)x;
    C.Y=(SHORT)y;
    SetConsoleCursorPosition(H,C);
}
 /*void bouger()
 {
     bool quit(false);
     int a(0),b(0);
     Console* pConsole=NULL;
     pConsole=Console::getInstance();
     while(!quit)
     {
         if (pConsole->isKeyboardPressed())
            {
                int key=pConsole->getInputkey();
         if(key==72)
         {
             if(a>0)
                a--;
         }
         else if(key==80)
         {
             if(a<7)
                a++;
         }
         else if(key==77)
         {
             if(b<7)
             {
                 b++;
             }
         }
          else if(key==75)
          {
              if(b>0)
                b--;
          }
            }

     }
 } */
 void J1(Plateau& plateau,int cpt)
 {
     Plateau local;
     string q=" X ";
     int a,b,i;
     char posx;
     char posy;
     int z;
     cout<<"Veuillez choisir ou jouer J1"<<endl;


     cout<<"Ligne"<< endl;
     cin>>a;
     a--;
     cout<<"Colonnes"<< endl;
     cin>> b;
     b--;
    // cout<<cpt;

     //if(((plateau.EstSurPlateau(a,b)==true)||(plateau.EstSurBord(a+1,b)==true)||(plateau.EstSurBord(a,b+1)==true)||(plateau.EstSurBord(a-1,b)==true)||(plateau.EstSurBord(a,b-1)==true)||(plateau.EstSurPlateau(a+1,b+1)==true)||(plateau.EstSurPlateau(a-1,b-1)==true)||(plateau.EstSurPlateau(a+1,b-1)==true)||(plateau.EstSurPlateau(a-1,b+1)==true)||(plateau.EstSurPlateau(a-1,b+1)==true))&&((plateau.m_plateau[a+1][b].getType()==" O ")||(plateau.m_plateau[a][b+1].getType()==" O ")||(plateau.m_plateau[a-1][b].getType()==" O ")||(plateau.m_plateau[a][b-1].getType()==" O ")||(plateau.m_plateau[a+1][b+1].getType()==" O ")||(plateau.m_plateau[a+1][b-1].getType()==" O ")||(plateau.m_plateau[a-1][b-1].getType()==" O ")||(plateau.m_plateau[a-1][b+1].getType()==" O "))&&(plateau.m_plateau[a][b].getType()==" . "))
        if(plateau.coupjouable1(a,b)==true)
        {
            plateau.m_plateau[a][b].setType(q);
            while(plateau.m_plateau[a-1][b].getType()==" O ")
            {
                plateau.m_plateau[a-1][b].setType(q);
                cpt++;
            }
             while(plateau.m_plateau[a][b-1].getType()==" O ")
            {
                plateau.m_plateau[a][b-1].setType(q);
                cpt++;
            }
             while(plateau.m_plateau[a+1][b].getType()==" O ")
            {
                plateau.m_plateau[a+1][b].setType(q);
                cpt++;
            }
             while(plateau.m_plateau[a][b+1].getType()==" O ")
            {
                plateau.m_plateau[a][b+1].setType(q);
                cpt++;
            }
            /* if(((plateau.m_plateau[a-1][b].getType()==" O ")&& (plateau.m_plateau[a-2][b].getType()==" X ")))
            {
                plateau.m_plateau[a-1][b].setType(q);
                cpt++;
            }
             if(((plateau.m_plateau[a][b-1].getType()==" O ")&& (plateau.m_plateau[a][b-2].getType()==" X ")))
            {
                plateau.m_plateau[a][b-1].setType(q);
                cpt++;
            }
             if(((plateau.m_plateau[a+1][b].getType()==" O ")&& (plateau.m_plateau[a+2][b].getType()==" X ")))
            {
                plateau.m_plateau[a+1][b].setType(q);
                cpt++;
            }
             if(((plateau.m_plateau[a][b+1].getType()==" O ")&& (plateau.m_plateau[a][b+2].getType()==" X ")))
            {
                plateau.m_plateau[a][b+1].setType(q);
                cpt++;
            } */


            cout<<"Score j1:";
            cout<<cpt<<endl;



        }
 else{
    cout<<"Coup invalide"<< endl;
 }
 }
 void simulation(Plateau plateau,int cpt)
 {
     Plateau local;
     string q=" X ";
     int a,b,i;
      for(int i=a;a<7;a++)
    {
        for(int b=1;b<7;b++)
        {
            renvoisimu(plateau,a,b);

        if(plateau.coupjouable1(a,b)==true)
        {

            while((plateau.m_plateau[a-1][b].getType()==" O ")&&(plateau.m_plateau[a][b].getType()!=" . "))
            {
                plateau.m_plateau[a-1][b].setType(q);
                cpt++;
                a--;
            }
             while((plateau.m_plateau[a][b-1].getType()==" O ")&&(plateau.m_plateau[a][b].getType()!=" . "))
            {
                plateau.m_plateau[a][b-1].setType(q);
                cpt++;
                b--;
            }
             while((plateau.m_plateau[a+1][b].getType()==" O ")&&(plateau.m_plateau[a][b].getType()!=" . "))
            {
                plateau.m_plateau[a+1][b].setType(q);
                cpt++;
                a++;
            }
             while((plateau.m_plateau[a][b+1].getType()==" O ")&&(plateau.m_plateau[a][b].getType()!=" . "))
            {
                plateau.m_plateau[a][b+1].setType(q);
                cpt++;
                b++;
            }
        }
    }
    // cout<<cpt;

     //if(((plateau.EstSurPlateau(a,b)==true)||(plateau.EstSurBord(a+1,b)==true)||(plateau.EstSurBord(a,b+1)==true)||(plateau.EstSurBord(a-1,b)==true)||(plateau.EstSurBord(a,b-1)==true)||(plateau.EstSurPlateau(a+1,b+1)==true)||(plateau.EstSurPlateau(a-1,b-1)==true)||(plateau.EstSurPlateau(a+1,b-1)==true)||(plateau.EstSurPlateau(a-1,b+1)==true)||(plateau.EstSurPlateau(a-1,b+1)==true))&&((plateau.m_plateau[a+1][b].getType()==" O ")||(plateau.m_plateau[a][b+1].getType()==" O ")||(plateau.m_plateau[a-1][b].getType()==" O ")||(plateau.m_plateau[a][b-1].getType()==" O ")||(plateau.m_plateau[a+1][b+1].getType()==" O ")||(plateau.m_plateau[a+1][b-1].getType()==" O ")||(plateau.m_plateau[a-1][b-1].getType()==" O ")||(plateau.m_plateau[a-1][b+1].getType()==" O "))&&(plateau.m_plateau[a][b].getType()==" . "))

            /* if(((plateau.m_plateau[a-1][b].getType()==" O ")&& (plateau.m_plateau[a-2][b].getType()==" X ")))
            {
                plateau.m_plateau[a-1][b].setType(q);
                cpt++;
            }
             if(((plateau.m_plateau[a][b-1].getType()==" O ")&& (plateau.m_plateau[a][b-2].getType()==" X ")))
            {
                plateau.m_plateau[a][b-1].setType(q);
                cpt++;
            }
             if(((plateau.m_plateau[a+1][b].getType()==" O ")&& (plateau.m_plateau[a+2][b].getType()==" X ")))
            {
                plateau.m_plateau[a+1][b].setType(q);
                cpt++;
            }
             if(((plateau.m_plateau[a][b+1].getType()==" O ")&& (plateau.m_plateau[a][b+2].getType()==" X ")))
            {
                plateau.m_plateau[a][b+1].setType(q);
                cpt++;
            } */

        }
 }
void J2(Plateau& plateau,int cpt)
 {
     Plateau local;
     string q=" O ";
     int a,b,i;
     int z;
     cout<<"Veuillez choisir ou jouer J2"<<endl;
     cout<<"Ligne"<< endl;
     cin>>a;
     a--;
     cout<<"Colonnes"<< endl;
     cin>> b;
     b--;
    // cout<<cpt;

     //if(((plateau.EstSurPlateau(a,b)==true)||(plateau.EstSurBord(a+1,b)==true)||(plateau.EstSurBord(a,b+1)==true)||(plateau.EstSurBord(a-1,b)==true)||(plateau.EstSurBord(a,b-1)==true)||(plateau.EstSurPlateau(a+1,b+1)==true)||(plateau.EstSurPlateau(a-1,b-1)==true)||(plateau.EstSurPlateau(a+1,b-1)==true)||(plateau.EstSurPlateau(a-1,b+1)==true)||(plateau.EstSurPlateau(a-1,b+1)==true))&&((plateau.m_plateau[a+1][b].getType()==" O ")||(plateau.m_plateau[a][b+1].getType()==" O ")||(plateau.m_plateau[a-1][b].getType()==" O ")||(plateau.m_plateau[a][b-1].getType()==" O ")||(plateau.m_plateau[a+1][b+1].getType()==" O ")||(plateau.m_plateau[a+1][b-1].getType()==" O ")||(plateau.m_plateau[a-1][b-1].getType()==" O ")||(plateau.m_plateau[a-1][b+1].getType()==" O "))&&(plateau.m_plateau[a][b].getType()==" . "))
        if(plateau.coupjouable2(a,b)==true)
        {
            plateau.m_plateau[a][b].setType(q);
            while(plateau.m_plateau[a-1][b].getType()==" X ")
            {
                plateau.m_plateau[a-1][b].setType(q);
            }
             while(plateau.m_plateau[a][b-1].getType()==" X ")
            {
                plateau.m_plateau[a][b-1].setType(q);
            }
             while(plateau.m_plateau[a+1][b].getType()==" X ")
            {
                plateau.m_plateau[a+1][b].setType(q);
            }
             while(plateau.m_plateau[a][b+1].getType()==" X ")
            {
                plateau.m_plateau[a][b+1].setType(q);
            }
            /* if(((plateau.m_plateau[a-1][b].getType()==" O ")&& (plateau.m_plateau[a-2][b].getType()==" X ")))
            {
                plateau.m_plateau[a-1][b].setType(q);
                cpt++;
            }
             if(((plateau.m_plateau[a][b-1].getType()==" O ")&& (plateau.m_plateau[a][b-2].getType()==" X ")))
            {
                plateau.m_plateau[a][b-1].setType(q);
                cpt++;
            }
             if(((plateau.m_plateau[a+1][b].getType()==" O ")&& (plateau.m_plateau[a+2][b].getType()==" X ")))
            {
                plateau.m_plateau[a+1][b].setType(q);
                cpt++;
            }
             if(((plateau.m_plateau[a][b+1].getType()==" O ")&& (plateau.m_plateau[a][b+2].getType()==" X ")))
            {
                plateau.m_plateau[a][b+1].setType(q);
                cpt++;
            } */

            cout<<"Score j2:";
            cout<<cpt<<endl;


        }
 else{
    cout<<"Coup invalide"<< endl;
 }
 }
void fin(Plateau& plateau)
{
    int q;
    for(int i=0;i<8;i++)
     {
         for(int j=0;j<8;j++)
         {

             if(plateau.m_plateau[i][j].getType()==" X ")
                q++;
         }
     }
int cpt1=0;
for(int a=1;a<7;a++)
{

    for(int b=1;b<7;b++)
    {
        if(coupjouable1(plateau,a,b)==true)
        {
        cpt1++;
    }
}
}
if(cpt1==0)
  {
      cout<<"Le jeu est fini"<<endl;
      cout<<"J1 a win"<<endl;
      exit(0);
}
}
void fin2(Plateau& plateau)
{
    int q;
    for(int i=0;i<8;i++)
     {
         for(int j=0;j<8;j++)
         {

             if(plateau.m_plateau[i][j].getType()==" X ")
                q++;
         }
     }
if (q==64)
{
    cout <<"le jeu est fini"<< endl;
}
int cpt2=0;
for(int a=1;a<7;a++)
{

    for(int b=1;b<7;b++)
    {
        if(coupjouable2(plateau,a,b)==true)
        {
        cpt2++;
    }
}
}
if(cpt2==0)
  {
      cout<<"Le jeu est fini"<<endl;
      cout<<"L'IA a win"<<endl;
      exit(0);
}
}

bool verifpose2(int a,int b,Plateau plateau)
{
     if(((plateau.EstSurPlateau(a,b)==true)||(plateau.EstSurPlateau(a+1,b)==true)||(plateau.EstSurPlateau(a,b+1)==true)||(plateau.EstSurPlateau(a-1,b)==true)||(plateau.EstSurPlateau(a,b-1)==true))&&((plateau.m_plateau[a+1][b].getType()==" X ")||(plateau.m_plateau[a][b+1].getType()==" X ")||(plateau.m_plateau[a-1][b].getType()==" X ")||(plateau.m_plateau[a][b-1].getType()==" X ")))
     {
         return true;
     }
else
{
    return false;
}
}
void ordi(Plateau& plateau,int cpt2)
 {
     Plateau local;
     srand(time(NULL));
     string q=" O ";
     int c3=0;
     int a,b,i;
     int z;
     a= rand()%7;
     b= rand()%7;
     while (verifpose2(a,b,plateau)!=true)
     {
          a=rand()%7;
     b=rand()%7;
     }

            plateau.m_plateau[a][b].setType(q);
            if(((plateau.m_plateau[a-1][b].getType()==" X ")&& (plateau.m_plateau[a-2][b].getType()==" O ")))
            {
                plateau.m_plateau[a-1][b].setType(q);
                cpt2++;
            }
             if(((plateau.m_plateau[a][b-1].getType()==" X ")&& (plateau.m_plateau[a][b-2].getType()==" O ")))
            {
                plateau.m_plateau[a][b-1].setType(q);
                cpt2++;
            }
             if(((plateau.m_plateau[a+1][b].getType()==" X ")&& (plateau.m_plateau[a+2][b].getType()==" O ")))
            {
                plateau.m_plateau[a+1][b].setType(q);
                cpt2++;
            }
             if(((plateau.m_plateau[a][b+1].getType()==" x ")&& (plateau.m_plateau[a][b+2].getType()==" O ")))
            {
                plateau.m_plateau[a][b+1].setType(q);
                cpt2++;
            }

for(int i=1;i<8;i++)
    {
    for(int j=1;j<8;j++)
{
    if(verifpose2(a,b,plateau)==true)
        c3++;
}
}
if(c3==0)
{
    cout<<"Defaite IA"<<endl;
    exit(0);
}
/*else{
    cout<<"Defaite"<<endl;
    exit(0);
} */
}

int test(Plateau plateau,int a,int b)
{

    int cpt=0;
    bool oui=false;
    int i=0;
    while((plateau.m_plateau[a+i][b].getType()==" . ")||(oui==true))
    {
        i++;
        if (plateau.m_plateau[a+i][b].getType()==" X ")
        {
            oui=true;
        }

    }
    if (oui== true)
    {
        i=0;
        while(plateau.m_plateau[a+i][b].getType()!=" X ")
        {
            i++;
            cpt++;
        }
        oui= false;
    }


    while((plateau.m_plateau[a][b+i].getType()==" . ")||(oui==true))
    {
        i++;
        if (plateau.m_plateau[a][b+i].getType()==" X ")
        {
            oui=true;
        }

    }
    if (oui== true)
    {
        i=0;
        while(plateau.m_plateau[a][b+i].getType()!=" X ")
        {
            i++;
            cpt++;
        }
        oui= false;
    }

    while((plateau.m_plateau[a+i][b+i].getType()==" . ")||(oui==true))
    {
        i++;
        if (plateau.m_plateau[a+i][b+i].getType()==" X ")
        {
            oui=true;
        }

    }
    if (oui== true)
    {
        i=0;
        while(plateau.m_plateau[a+i][b+i].getType()!=" X ")
        {
            i++;
            cpt++;
        }
        oui= false;
    }

    while((plateau.m_plateau[a-i][b].getType()==" . ")||(oui==true))
    {
        i++;
        if (plateau.m_plateau[a-i][b].getType()==" X ")
        {
            oui=true;
        }

    }
    if (oui== true)
    {
        i=0;
        while(plateau.m_plateau[a-i][b].getType()!=" X ")
        {
            i++;
            cpt++;
        }
        oui= false;
    }

    while((plateau.m_plateau[a-i][b-i].getType()==" . ")||(oui==true))
    {
        i++;
        if (plateau.m_plateau[a-i][b-i].getType()==" X ")
        {
            oui=true;
        }

    }
    if (oui== true)
    {
        i=0;
        while(plateau.m_plateau[a-i][b-i].getType()!=" X ")
        {
            i++;
            cpt++;
        }
        oui= false;
    }

    while((plateau.m_plateau[a][b-i].getType()==" . ")||(oui==true))
    {
        i++;
        if (plateau.m_plateau[a][b-i].getType()==" X ")
        {
            oui=true;
        }

    }
    if (oui== true)
    {
        i=0;
        while(plateau.m_plateau[a][b-i].getType()!=" X ")
        {
            i++;
            cpt++;
        }
        oui= false;
    }

    while((plateau.m_plateau[a+i][b-i].getType()==" . ")||(oui==true))
    {
        i++;
        if (plateau.m_plateau[a+i][b-i].getType()==" X ")
        {
            oui=true;
        }

    }
    if (oui== true)
    {
        i=0;
        while(plateau.m_plateau[a+i][b-i].getType()!=" X ")
        {
            i++;
            cpt++;
        }
        oui= false;
    }

    while((plateau.m_plateau[a-i][b+i].getType()==" . ")||(oui==true))
    {
        i++;
        if (plateau.m_plateau[a-i][b+i].getType()==" X ")
        {
            oui=true;
        }

    }
    if (oui== true)
    {
        i=0;
        while(plateau.m_plateau[a-i][b+i].getType()!=" X ")
        {
            i++;
            cpt++;
        }
        oui= false;
    }
return cpt;
}
int renvoi(Plateau plateau, int a ,int b)
{
if(coupjouable1(plateau,a,b)==true)
{
    cout<<a+1;
    cout<<b+1;
    cout<<" "<<endl;
}
}
int renvoisimu(Plateau plateau, int a ,int b)
{
if(coupjouable1(plateau,a,b)==true)
{
    return a;
    return b;
}
}
int renvoi2(Plateau plateau, int a ,int b)
{
if(coupjouable2(plateau,a,b)==true)
{
    cout<<a+1;
    cout<<b+1;
    cout<<" "<<endl;
}
}
bool coupjouable1(Plateau plateau,int a,int b)
{
    if(((plateau.EstSurPlateau(a,b)==true)||(plateau.EstSurBord(a+1,b)==true)||(plateau.EstSurBord(a,b+1)==true)||(plateau.EstSurBord(a-1,b)==true)||(plateau.EstSurBord(a,b-1)==true)||(plateau.EstSurPlateau(a+1,b+1)==true)||(plateau.EstSurPlateau(a-1,b-1)==true)||(plateau.EstSurPlateau(a+1,b-1)==true)||(plateau.EstSurPlateau(a-1,b+1)==true)||(plateau.EstSurPlateau(a-1,b+1)==true))&&((plateau.m_plateau[a+1][b].getType()==" O ")||(plateau.m_plateau[a][b+1].getType()==" O ")||(plateau.m_plateau[a-1][b].getType()==" O ")||(plateau.m_plateau[a][b-1].getType()==" O ")||(plateau.m_plateau[a+1][b+1].getType()==" O ")||(plateau.m_plateau[a+1][b-1].getType()==" O ")||(plateau.m_plateau[a-1][b-1].getType()==" O ")||(plateau.m_plateau[a-1][b+1].getType()==" O "))&&(plateau.m_plateau[a][b].getType()==" . "))
{
    return true;
}
else {
    return false;
}
}
bool coupjouable2(Plateau plateau,int a,int b)
{
     if(((plateau.EstSurPlateau(a,b)==true)||(plateau.EstSurBord(a+1,b)==true)||(plateau.EstSurBord(a,b+1)==true)||(plateau.EstSurBord(a-1,b)==true)||(plateau.EstSurBord(a,b-1)==true))&&((plateau.m_plateau[a+1][b].getType()==" X ")||(plateau.m_plateau[a][b+1].getType()==" X ")||(plateau.m_plateau[a-1][b].getType()==" X ")||(plateau.m_plateau[a][b-1].getType()==" X "))&&(plateau.m_plateau[a][b].getType()==" . "))
    {
        return true;
    }
else
{
   return false;
}
}
void IA_jouer(Plateau& plateau,int profondeur)
{
     int max = -10000;
     int tmp,maxi,maxj;
     int i,j;
     string q= " O ";
     string dz=" . ";
cout<<"b1";
     for(i=1;i<8;i++)
     {
          for(j=1;j<8;j++)
          {
                if((plateau.m_plateau[i][j].getType() ==" . ")&&(coupjouable2(plateau,i,j)==true ))
                {
                     cout<<"b2";
                     plateau.m_plateau[i][j].setType(q);
                      cout<<"b3";
                      tmp = Min(plateau,profondeur-1);
cout<<"b4";
                      if(tmp > max)
                      {
                            max = tmp;
                            maxi = i;
                            maxj = j;
                      }
                      plateau.m_plateau[i][j].setType(dz);
                }
          }
     }
     plateau.m_plateau[maxi][maxj].setType(q);

}
int Max(Plateau plateau,int profondeur)
{
     if(profondeur == 0)
     {
          return eval(plateau);
     }

     int max = -10000;
     int i,j,tmp;
     string q=" X ";
     string z=" O ";
     string v=" . ";

     for(i=1;i<8;i++)
     {
          for(j=1;j<8;j++)
          {
                if(plateau.m_plateau[i][j].getType() ==" . ")
                {
                      plateau.m_plateau[i][j].setType(z);
                      tmp = Min(plateau,profondeur-1);

                      if(tmp > max)
                      {
                            max = tmp;
                      }
                        plateau.m_plateau[i][j].setType(v);
                }
          }
     }

     return max;

}
int Min(Plateau plateau,int profondeur)
{
     if(profondeur == 0 )
     {
          return eval(plateau);
          exit(0);
     }

     int min = 10000;
     int i,j,tmp;
     string q=" X ";
     string z=" O ";
     string v=" . ";

     for(i=1;i<8;i++)
     {
          for(j=1;j<8;j++)
          {
                if(plateau.m_plateau[i][j].getType() ==" . ")
                {
                    plateau.m_plateau[i][j].setType(z);
                      tmp = Max(plateau,profondeur-1);

                      if(tmp < min)
                      {
                            min = tmp;
                      }
                     plateau.m_plateau[i][j].setType(v);
                }
          }
     }

     return min;

}
int eval(Plateau plateau)
{
    //cout<<"test eval"<<endl;
     int nb_de_pions = 0,nb_pion_blanc=0,nb_pion_noir=0;
     int i,j;

     //On compte le nombre de pions présents sur le plateau
     for(i=1;i<8;i++)
     {
          for(j=1;j<8;j++)
          {
               if((plateau.m_plateau[i][j].getType() ==" X ")||(plateau.m_plateau[i][j].getType() ==" O "))
               {
                    nb_de_pions++;
               }
               if(plateau.m_plateau[i][j].getType() ==" X ")
               {
                    nb_pion_blanc++;
               }
               if(plateau.m_plateau[i][j].getType() ==" O ")
               {
                    nb_pion_noir++;
               }
          }
     }

if(nb_de_pions==64)
    {
         if( nb_pion_blanc>nb_pion_noir)
          {
               return 1000 - nb_de_pions;
          }
          else if( nb_pion_blanc<nb_pion_noir )
          {
               return -1000 + nb_de_pions;
          }
     }
     else
     {
         return 0;
     }
 //On compte le nombre de séries de 2 pions alignés de chacun des joueurs
    int poidsIA = 0, poidsJoueur = 0;

    for(int i=1; i<8; i++)
        for(int j=1; j<8; j++)
        {
            if(plateau.m_plateau[i][j].getType()==" O ")
                poidsIA++;
            if(plateau.m_plateau[i][j].getType()==" X ")
                poidsJoueur++;
        }

    return poidsIA - poidsJoueur;

}
    //On compte le nombre de séries des  pions alignés de chacun des joueurs






 /*void saisirActionJ1(Plateau& plateau)
 {
     Plateau local;
     int a,b,i;
     string choix;
     string tipe;
     int z;
     cout<<"Que voulez-vous faire?"<< endl;
     cout<<"1.Avancer/ 2.Sortir un Pion/ 3.Orienter son pion/ 4.Entrer un pion / 5.Pousser"<<endl;
     cin>>i;
     switch(i)
     {
     case 1:
        Avancer1(plateau);
        break;
     case 2:
        Sortir1(plateau);
        break;
     case 3:
        orienter1(plateau);
        break;
     case 4:
        cout<<"Choisir un pion"<< endl;
     cin>>z;
        cout<<"Saisir coords"<<endl;
        cin>>a;
        cin>>b;
        if(((plateau.EstSurBord(a,b))!=false)&&(plateau.Casevide(a,b)!=false)&&(plateau.m_plateau[0][z].getType()==" E "))
           {
            plateau.m_plateau[a][b]=plateau.m_plateau[0][z];
            plateau.m_plateau[0][z].setType(" . ");
            plateau.m_plateau[0][z].setresistance(0);}
            //plateau.afficheplateau();

        else
                cout<<"Entree impossible"<< endl;
        break;
     case 5:
    Pousse1(plateau);
    break;


     }

 }
 Sens direction(string choix)
 {
     if((choix=="D"))
        return Sens::Droite;
     if((choix=="H"))
        return Sens::Haut;
     if((choix=="B"))
        return Sens::Bas;
     if((choix=="G"))
        return Sens::Gauche;
     return Sens::None;
 }
Type typeaction(string tipe)
 {
     if((tipe=="A"))
        return Type::Avancer;
     if((tipe=="E"))
        return Type::Entrer;
     if((tipe=="S"))
        return Type::Sortir;
     if((tipe=="T"))
        return Type::Tourner;
     return Type::None;
 }
bool verifvictoire(Plateau plateau)
{
    for(int i=0;i<7;i++)
    {
        for(int j=0;j<7;j++)
        {
            if (((plateau.m_plateau[i][j].getType())==(" M "))&&(plateau.EstSurBord(i,j)!=false))
                return true;
            else
                return false;
        }
    }
}
void Gameplay(Plateau& plateau,int JoueurCourant)
{

    if((JoueurCourant%2)==0)
    {
        cout<<"J1:"<< endl;
        saisirActionJ1(plateau);}
    if((JoueurCourant%1)==0)
    {

        cout<<"J2:"<< endl;
        saisirActionJ2(plateau);
    }
JoueurCourant++;  }
void Avancer1(Plateau& plateau)
{

    int step,b,c;

    cout<<"Quel pion souhaitez vous bouger?"<<endl;
    cin>>b;
    cin>>c;
    cout<<"Ou voulez vous Avancer?"<< endl;
    cout<<"1: En haut"<< endl;
    cout<<"2:En bas"<< endl;
    cout<<"3:A gauche"<< endl;
    cout<<"4: A droite"<< endl;
    cin>>step;
    if(((plateau.m_plateau[b][c].getType()==" E ")||(plateau.m_plateau[b][c].getType()==" Eb")||(plateau.m_plateau[b][c].getType()==" Eh")||(plateau.m_plateau[b][c].getType()==" Eg")||(plateau.m_plateau[b][c].getType()==" Ed"))&&(plateau.Casevide((b+1),(c+1))!=false))
    {
        switch(step)
    {
    case 1:
        plateau.m_plateau[b][c]=plateau.m_plateau[b-1][c];
         plateau.m_plateau[b][c].setType(" . ");
         plateau.m_plateau[b][c].setresistance(0);
        //plateau.afficheplateau();
        break;
    case 2:
        plateau.m_plateau[b][c]=plateau.m_plateau[b++][c];
        plateau.m_plateau[b-1][c].setType(" . ");
        plateau.m_plateau[b+1][c].setresistance(0);
        //plateau.afficheplateau();
        break;
    case 3:
        plateau.m_plateau[b][c]=plateau.m_plateau[b][c--];
         plateau.m_plateau[b][c+1].setType(" . ");
         plateau.m_plateau[b][c+1].setresistance(0);
        //plateau.afficheplateau();
        break;
    case 4:
        plateau.m_plateau[b][c]=plateau.m_plateau[b][c++];
         plateau.m_plateau[b][c-1].setType(" . ");
         plateau.m_plateau[b][c-1].setresistance(0);
        //plateau.afficheplateau();
        break;
    }
}
else
    {cout<<"Impossible de bouger le decor"<< endl;}

}
void Sortir1(Plateau& plateau)
{

     int z,a,b,c;
     cout<<"Choisir un pion à sortir"<< endl;
     cin>>z;
     cin>>c;
        cout<<"Saisir coords de la case de sortie"<<endl;
        cin>>a;
        cin>>b;
        if(((plateau.EstSurBord(a,b))!=false)&&(plateau.Casevide(a,b)==true)&&(plateau.m_plateau[z][c].getType()==" E ")||(plateau.m_plateau[z][c].getType()==" Eb")||(plateau.m_plateau[z][c].getType()==" Eh")||(plateau.m_plateau[z][c].getType()==" Eg")||(plateau.m_plateau[z][c].getType()==" Ed"))
           {
            plateau.m_plateau[z][c]=plateau.m_plateau[a][b];
            plateau.m_plateau[a][b].setType(" E ");
            plateau.m_plateau[a][b].setresistance(1.0);
            }
        else
                cout<<"Sortie impossible"<< endl;


}
void saisirActionJ2(Plateau& plateau)
 {
     Plateau local;
     int a,b,i;
     string choix;
     string tipe;
     int z;
     cout<<"Que voulez-vous faire?"<< endl;
     cout<<"1.Avancer/ 2.Sortir un Pion/ 3.Orienter son pion/ 4.Entrer un pion/ 5.Pousser"<<endl;
     cin>>i;
     switch(i)
     {
     case 1:
        Avancer2(plateau);
        break;
     case 2:
        Sortir2(plateau);
        break;
     case 3:
        float q;
        cout<<"Choisir orientation"<<endl;
         orienter2(plateau);

        break;
     case 4:
        cout<<"Choisir un pion"<< endl;
     cin>>z;
        cout<<"Saisir coords"<<endl;
        cin>>a;
        cin>>b;
        if(((plateau.EstSurBord(a,b))!=false)&&(plateau.Casevide(a,b)!=false)&&(plateau.m_plateau[6][z].getType()==" R "))
           {
            plateau.m_plateau[a][b]=plateau.m_plateau[6][z];
            plateau.m_plateau[6][z].setType(" . ");
            plateau.m_plateau[6][z].setresistance(0);}

        else
                cout<<"Entree impossible"<< endl;
        break;
     }

 }
void Sortir2(Plateau& plateau)
{

     int z,a,b,c;
     cout<<"Choisir un pion à sortir"<< endl;
     cin>>z;
     cin>>c;
        cout<<"Saisir coords de la case de sortie"<<endl;
        cin>>a;
        cin>>b;
        if(((plateau.EstSurBord(a,b))!=false)&&(plateau.Casevide(a,b)==true)&&(plateau.m_plateau[z][c].getType()==" R ")||(plateau.m_plateau[z][c].getType()==" Rb")||(plateau.m_plateau[z][c].getType()==" Rh")||(plateau.m_plateau[z][c].getType()==" Rg")||(plateau.m_plateau[z][c].getType()==" Rd"))
           {
            plateau.m_plateau[z][c]=plateau.m_plateau[a][b];
            plateau.m_plateau[a][b].setType(" R ");
            plateau.m_plateau[a][b].setresistance(1.0);
            //plateau.afficheplateau();}
            }
        else
                cout<<"Sortie impossible"<< endl;


}
void Avancer2(Plateau& plateau)
{

    int step,b,c;

    cout<<"Quel pion souhaitez vous bouger?"<<endl;
    cin>>b;
    cin>>c;
    cout<<"Ou voulez vous Avancer?"<< endl;
    cout<<"1: En haut"<< endl;
    cout<<"2:En bas"<< endl;
    cout<<"3:A gauche"<< endl;
    cout<<"4: A droite"<< endl;
    cin>>step;
    if(((plateau.m_plateau[b][c].getType()==" R ")||(plateau.m_plateau[b][c].getType()==" Rb")||(plateau.m_plateau[b][c].getType()==" Rh")||(plateau.m_plateau[b][c].getType()==" Rg")||(plateau.m_plateau[b][c].getType()==" Rd"))&&(plateau.Casevide((b-1),(c-1))!=false))
    {
        switch(step)
    {
    case 1:
        plateau.m_plateau[b][c]=plateau.m_plateau[b--][c];
         plateau.m_plateau[b+1][c].setType(" . ");
         plateau.m_plateau[b+1][c].setresistance(0);
        //plateau.afficheplateau();
        break;
    case 2:
        plateau.m_plateau[b][c]=plateau.m_plateau[b++][c];
        plateau.m_plateau[b-1][c].setType(" . ");
        plateau.m_plateau[b-1][c].setresistance(0);
        //plateau.afficheplateau();
        break;
    case 3:
        plateau.m_plateau[b][c]=plateau.m_plateau[b][c--];
         plateau.m_plateau[b][c+1].setType(" . ");
         plateau.m_plateau[b][c+1].setresistance(0);
        //plateau.afficheplateau();
        break;
    case 4:
        plateau.m_plateau[b][c]=plateau.m_plateau[b][c++];
         plateau.m_plateau[b][c-1].setType(" . ");
         plateau.m_plateau[b][c-1].setresistance(0);
        //plateau.afficheplateau();
        break;
    }
}
else
    {cout<<"Impossible de bouger le decor"<< endl;}

}
void orienter2(Plateau& plateau)
{
    int step,b,c;
    cout<<"Quel pion souhaitez vous bouger?"<<endl;
    cin>>b;
    cin>>c;
    cout<<"Vers ou voulez vous vous orienter?"<< endl;
    cout<<"1: En haut"<< endl;
    cout<<"2:En bas"<< endl;
    cout<<"3:A gauche"<< endl;
    cout<<"4: A droite"<< endl;
    cin>>step;
    if((plateau.m_plateau[b][c].getType()==" R "))
    {
        switch(step)
{
case 1:
    plateau.m_plateau[b][c].setType(" Rh");
    break;
case 2:
    plateau.m_plateau[b][c].setType(" Rb");
    break;
case 3:
    plateau.m_plateau[b][c].setType(" Rg");
    break;
case 4:
    plateau.m_plateau[b][c].setType(" Rd");
    break;
}
    }
}
void orienter1(Plateau& plateau)
{
    int step,b,c;
    cout<<"Quel pion souhaitez vous bouger?"<<endl;
    cin>>b;
    cin>>c;
    cout<<"Vers ou voulez vous vous orienter?"<< endl;
    cout<<"1: En haut"<< endl;
    cout<<"2:En bas"<< endl;
    cout<<"3:A gauche"<< endl;
    cout<<"4: A droite"<< endl;
    cin>>step;
    if((plateau.m_plateau[b][c].getType()==" E "))
    {
        switch(step)
{
case 1:
    plateau.m_plateau[b][c].setType(" Eh");
    break;
case 2:
    plateau.m_plateau[b][c].setType(" Eb");
    break;
case 3:
    plateau.m_plateau[b][c].setType(" Eg");
    break;
case 4:
    plateau.m_plateau[b][c].setType(" Ed");
    break;
}
    }
}
 bool verifpoussebas(int x,int y,Plateau plateau)
 {

float somme=0;
     for(int i=(x+1);i<6;i++)
        {
            somme=plateau.m_plateau[i][y].getresistance();
            }
 cout <<somme<< endl;
 if(somme<(plateau.m_plateau[x][y].getresistance()))
 {
     return true;
 }
 else
    return false;
 }
bool verifpoussehaut(int x,int y,Plateau plateau)
 {

     float somme=0;
     for(int i=(x-1);i<6;i--)
        somme=plateau.m_plateau[i][y].getresistance();
 if(somme<(plateau.m_plateau[x][y].getresistance()))
 {
     return true;
 }
 else
    return false;
 }
bool verifpoussedroite(int x,int y,Plateau plateau)
 {

     float somme=0;
     for(int i=(x+1);i<6;i++)
        somme=plateau.m_plateau[x][i].getresistance();
 if(somme<(plateau.m_plateau[x][y].getresistance()))
 {
     return true;
 }
 else
    return false;
 }
bool verifpoussegauche(int x,int y,Plateau plateau)
 {

     float somme=0;
     for(int i=(x-1);i<6;i--)
        somme=plateau.m_plateau[x][i].getresistance();
 if(somme<(plateau.m_plateau[x][y].getresistance()))
 {
     return true;
 }
 else
    return false;
 }
void Pousse1(Plateau& plateau)
{
   int step,b,c;
   cout<<"Quel pion souhaitez vous pousser?"<<endl;
    cin>>b;
    cin>>c;
    cout<<"Ou voulez vous Pousser?"<< endl;
    cout<<"1: En haut"<< endl;
    cout<<"2:En bas"<< endl;
    cout<<"3:A gauche"<< endl;
    cout<<"4: A droite"<< endl;
    cin>>step;
 switch(step)
 {
 case 1:
    if((plateau.m_plateau[b][c].getType()==" Eh")&&(verifpoussehaut(b,c,plateau)==true))
    {

 string a;
         Piece piece(0," V ");
         Piece z(0," V ");

         //plateau.m_plateau[b][c].getType()=a;
         piece=plateau.m_plateau[b--][c];

         plateau.m_plateau[b+1][c]=plateau.m_plateau[b--][c];
         plateau.m_plateau[b+1][c]=z;
         //plateau.m_plateau[b+2][c]=piece;

    }
 else
        cout<<"Il n'y a rien a pousser " << endl;
 break;
 case 2:
     if((plateau.m_plateau[b][c].getType()==" Eb")&&(verifpoussebas(b,c,plateau)==true))
     {
         string a;
         Piece piece(0," V ");
         Piece z(0," V ");

         //plateau.m_plateau[b][c].getType()=a;
         piece=plateau.m_plateau[b++][c];

         plateau.m_plateau[b][c]=plateau.m_plateau[b++][c];
         plateau.m_plateau[b--][c]=z;
         //plateau.m_plateau[b+2][c]=piece;
         //cout <<" Poussee Possible" << endl;
     }
else
        cout<<"Il n'y a rien à pousser " << endl;
        break;
 case 3:
     if((plateau.m_plateau[b][c].getType()==" Eg")&&(verifpoussegauche(b,c,plateau)==true))
     {
         string a;
         Piece piece(0," V ");
         Piece z(0," V ");

         //plateau.m_plateau[b][c].getType()=a;
         piece=plateau.m_plateau[b][c--];

         plateau.m_plateau[b][c]=plateau.m_plateau[b][c--];
         plateau.m_plateau[b][c++]=z;
         //plateau.m_plateau[b+2][c]=piece;
     }
else
        cout<<"Il n'y a rien à pousser " << endl;
        break;
 case 4:
     if((plateau.m_plateau[b][c].getType()==" Ed")&&(verifpoussedroite(b,c,plateau)==true))
     {
          string a;
         Piece piece(0," V ");
         Piece z(0," V ");

         //plateau.m_plateau[b][c].getType()=a;
         piece=plateau.m_plateau[b][c++];

         plateau.m_plateau[b][c]=plateau.m_plateau[b][c++];
         plateau.m_plateau[b][c--]=z;
         //plateau.m_plateau[b+2][c]=piece;
     }
else
        cout<<"Il n'y a rien à pousser " << endl;
        break;
 }
}
void Regles()
{
     cout<<"Les elephants (E) et les rhinoceros (R), il faut donc deux joueurs, s'affrontent sur un plateau de jeu (5x5 cases)."<<endl;
    cout<<"Le but du jeu est de sortir une montage (M) du plateau. Le premier qui sort une montagne a gagner. "<<endl;
    cout<<"Les pions sont orientes et peuvent se deplacer dans 4 directions differentes. Il y a un rapport de force entre les pions et les montagnes. "<<endl;
    cout<<"Ils exercent une resistance quand on les pousse. Pour pouvoir pousser une piece, il faut etre oriente dans le bon sens. "<<endl;
    cout<<"Au debut, les joueurs choisissent leurs animaux. Les elephants commencent, puis chacun joue a tour de role. "<<endl;

    cout<<"A chaque tour nous pouvons realiser les 4 actions suivantes :"<<endl;
    cout<<"       - faire rentrer un animal sur le plateau "<<endl;
    cout<<"       - deplacer l'animal d'une case a l'autre (qu'elle soit libre ou non) "<<endl;
    cout<<"       - changer l'orientation d'un animal"<<endl;
    cout<<"       - faire sortir un animal du plateau qui est sur une des cases exterieures "<<endl;

    cout<<"Quand on fait entrer un animal sur le plateau dans une case vide, on choisit l'orientation de l'animal rentrant. "<<endl;
    cout<<"Si la case est occupee, avec certaines conditions on peut rentrer sur le plateau en effectuant une poussee."<<endl;
    cout<<"On ne peut effectuer que des deplacements orthogonaux (pas de diagonales). "<<endl;
    cout<<"L'orientation de l'animal n'influence pas sur le deplacement dans le cas ou la case est vide. "<<endl;
    cout<<"Par contre, pour acceder a une case occupe, il faut effectuer une poussee, dans ce cas, l'orientation est importante. "<<endl;
    cout<<"Un joueur peut se servir de la puissance d'un des pions du joueur adverse en fonction de son orientation. "<<endl;

    cout<<"Mais attention, le vainqueur est celui qui possede l'animal le plus proche de la montagne qui est participe a la poussee. "<<endl;
    cout<<"Un animal possede une force et une resistance de 1 dans le sens de la poussee et de 0 sur ces cotes. "<<endl;
    cout<<"Une montagne a une resistance de 0,9. "<<endl;

    cout<<"Donc par exemple, si un elephant pousse un rhinoceros, oriente vers la droite, vers le bas et que en poussant ce rhinoceros, "<<endl;
    cout<<"il sort une montagne, l'elephant gagne. "<<endl;
    cout<<"Mais si ce rhinoceros etait oriente vers le bas, c'est les rhinoceros qui auraient gagne. "<<endl;
    cout<<"Et si le rhinoceros etait oriente vers le haut, il aurait fallu deux elephants oriente vers le bas pour pousser le rhinoceros et la montagne, "<<endl;
    cout<<"et les elephants auraient gagne.  "<<endl;
    cout<<"On peut changer l'orientation d'un animal a tout moment mais attention cela compte comme un tour de jeu. "<<endl;
    cout<<"On peut sortir un animal du plateau s'il est situe sur les cases exterieures.  "<<endl;
    cout<<"Mais attention comme pour l'orientation, cela compte comme un tour de jeu. "<<endl;
    cout<<"L'animal sorti reste a disposition est pourra etre reutilise quand on le souhaite mais il devra rentrer a nouveau sur le plateau. "<<endl;
    cout<<endl;
    cout<<endl;

    system("pause");
    system("cls");
}
*/

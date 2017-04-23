#ifndef JEU_H_INCLUDED
#define JEU_H_INCLUDED
/*void saisirActionJ1(Plateau& plateau);
Sens direction(string choix);
Type typeaction(string tipe);
bool verifvictoire(Plateau plateau);
void Gameplay(Plateau& plateau,int JoueurCourant);
void Avancer1(Plateau& plateau);
void Sortir1(Plateau& plateau);
void orienter1(Plateau& plateau);
void saisirActionJ2(Plateau& plateau);
void Avancer2(Plateau& plateau);
void Sortir2(Plateau& plateau);
void orienter2(Plateau& plateau);
bool verifpoussebas(int x,int y,Plateau plateau);
bool verifpoussehaut(int x,int y,Plateau plateau);
bool verifpoussedroite(int x,int y,Plateau plateau);
bool verifpoussegauche(int x,int y,Plateau plateau);
void Pousse1(Plateau& plateau);
void Regles();*/
void J1(Plateau& plateau,int cpt);
void J2(Plateau& plateau,int cpt);
bool verifpose2(int a,int b,Plateau plateau);
void ordi(Plateau& plateau,int cpt2);
void fin(Plateau& plateau);
void fin2(Plateau& plateau);
int test(Plateau plateau,int a,int b);
int renvoi2(Plateau plateau, int a ,int b);
int renvoi(Plateau plateau, int a ,int b);
bool coupjouable1(Plateau plateau,int a,int b);
bool coupjouable2(Plateau plateau,int a,int b);
//void bouger();
void Locate(int x,int y);
void Color(int flags);
int renvoisimu(Plateau plateau, int a ,int b);
 void simulation(Plateau plateau,int cpt);
void IA_jouer(Plateau& plateau,int profondeur);
int Max(Plateau plateau,int profondeur);
int Min(Plateau plateau,int profondeur);
int eval(Plateau plateau);
#endif // JEU_H_INCLUDED

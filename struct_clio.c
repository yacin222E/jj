#include <stdlib.h>
#include <string.h>

struct voiture {

char nom[10];
int km;
int annee;

};
//0000000000000000000000000000000000000000000
            
int main(void){

struct voiture v;
strcpy(v.nom, "        Clioaalpine");
v.km=90000;
v.annee=2017;
printf("      votre voiture est %s.elle a %d km ; elle est de l'annee %d",v.nom,v.km,v.annee);
///dzdsdssddsdsdsdsd
return 0;
}


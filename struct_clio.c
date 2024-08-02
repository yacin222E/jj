#include <stdlib.h>
#include <string.h>

struct voiture {

char nom[10];
int km;
int annee;

};

            
int main(void){

struct voiture v;
strcpy(v.nom, "Clio5");
v.km=90000;
v.annee=2017;
printf("votre voiture est %s.elle a %d km ; elle est de l'annee %d",v.nom,v.km,v.annee);
//BONJOUR
return 0;
}


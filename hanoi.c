#include<stdio.h>



void toursHanoi(int nDisques, char Source, char Destinataire , char Intermediaire ) {
    if (nDisques == 1)
      printf(" \n\n Il suffit de deplacer le disque  de %c vers  %c  directement \n" , Source , Destinataire );
    else if (nDisques>1){
      toursHanoi(nDisques - 1, Source, Intermediaire, Destinataire );
      printf("On deplace le disque %d de %c vers %c  \npuis \n", nDisques , Source ,Destinataire );
      toursHanoi(nDisques - 1, Intermediaire, Destinataire , Source);
    }
    printf(" \n********** Vos disques sont deplac�s avec succes !! **********");
}




void main() {
    int nDisques ;
    printf("donner le nombre de disques :\t");
    scanf("%d",&nDisques);
    toursHanoi(nDisques, 'A', 'B', 'C');
}

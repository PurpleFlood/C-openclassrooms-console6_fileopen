//
//  main.c
//  console6_fileopen
//
//  Created by asap on 10/04/2024.
//

#include <stdio.h>
#include <stdlib.h>

FILE* fopen(const char* nomDuFichier, const char* modeOuverture);
int fclose(FILE* file);
int main(int argc, const char * argv[]) {
    
    FILE* fichier=NULL;
    
    fichier=fopen("./test.txt", "r+");
    
    if(fichier != NULL)
    {
        printf("Fichier ouvert avec succès\n");
    }
    else
    {
        printf("Fichier non ouvert\n");
    }
    
    fclose(fichier);
    return 0;
}

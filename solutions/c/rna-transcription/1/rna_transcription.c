#include "rna_transcription.h"
#include <string.h>

char *to_rna(const char *dna){
    size_t length = strlen(dna);

    char *rna = malloc(length);
    for(size_t i = 0; i < length; i++){
        if(dna[i] == 'G'){
            rna[i] = 'C';
        }
        else if(dna[i] == 'C'){
            rna[i] = 'G';
        }
        else if(dna[i] == 'T'){
            rna[i] = 'A';
        }
        else if(dna[i] == 'A'){
            rna[i] = 'U';
        }
        else{
            continue;
        }
    }

    return rna;
}
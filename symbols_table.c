#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "symbols_table.h"


void MEM_PROBLEM() {
    printf("Memory allocation failure.\nEnd of run\n");
    exit(1);
}



int hash_func(char *ID) {
    
    int i=0;
    int hash_val=0;
    for(i=0; i<strlen(ID); i++) {
        
        hash_val += ID[i];

    }
    
    hash_val = (hash_val)%SIZE;
    
    
    
    
    
    return hash_val;
}

void insert(char *ID, int line, int hval) {
    
    Listnode *new_node = NULL;
    
    if (  (new_node = (Listnode*)malloc(1*sizeof(Listnode))) == NULL  ) {                         // allocate memory for a new node
        MEM_PROBLEM();
    }
    

    
    if(  (new_node->data = ( char* )malloc( ( strlen(ID)+1 )*sizeof(char))) == NULL  ) {           //allocate memory for ID
        MEM_PROBLEM();
    }
    
    strcpy(new_node->data, ID);      //import value of ID to list
    new_node->line = line;
    
    
    
    
    
    new_node->next = hashTable[hval].point;         // Link the list of IDs with Hashtable
    hashTable[hval].point = new_node;
    

}

void init_ht() {
    
    int i = 0;
    
    
    for (i=0; i<SIZE; i++) {
        hashTable[i].point = NULL;
    
    }
}

void print_ht() {
    
    int i=0;
    Listnode *curr;
    printf("HashTable:\n\n");
    
    curr = hashTable[i].point;
    
    
    for (i=0; i<SIZE; i++) {
        curr = hashTable[i].point;
        if(hashTable[i].point != NULL) {
            while (curr != NULL) {
                printf(" %s in Line: %d -->", curr->data, curr->line);
                curr = curr->next;
            }
            printf("\n\n");
        }
    
    }

}








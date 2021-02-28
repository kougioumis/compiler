#define SIZE 2001

typedef struct listnode {
    
    char *data;
    int line;
    struct listnode *next;
    
}Listnode;


typedef struct arraynode {
    
    Listnode *point;
    
}Arraynode;


Arraynode hashTable[2001];



void MEM_PROBLEM();
int  hash_func(char *ID);
void init_ht();
void insert(char *ID, int line, int hval);
void destroy(char *ID, int hval);
void print_ht();


typedef struct e{
  void *key;
  void *value;
}Element;

typedef struc v{
  contador count;
  unsigned size;
  void *data;
}Vector;

typedef struct h{
    unsigned size;
    Vector * data;
    unsigned(*hash)(void*, unsigned);//declaramos hash
} Hash;


void initHash(Hash *, unsigned, unsigned (* hash ) (void *, unsigned,
int));
void insertHash(Hash *, void *, void *, void *(*caster)(void *));
void * getHash(Hash *,void *,void *(*caster)(void *),int (*cmpKeys)(void *, void *));

typedef struct e{
  void *key;
  void *value;
}Element;

typedef struc v{
  contador count;
  unsigned size;
  Element *elements;
}Vector;

typedef struct h{
    unsigned size;
    Vector *data;
    unsigned(*hash)(void*, unsigned);//declaramos hash
    int (*cmpKeys)(void *, void *);
    void *(*copyKey)(void *);
    void *(*copyValue)(void *);
} Hash;


void initHash(Hash *, unsigned,unsigned (*hash)(void *, unsigned),int (*cmpKeys)(void *, void *),void *(*copyKey)(void *),
void *(*copyValue)(void *));
void insertHash(Hash *, void *, void *);
void *getHash(Hash *, void *);

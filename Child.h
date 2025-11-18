#ifndef CHILD_H_INCLUDED
#define CHILD_H_INCLUDED

typedef int infotype;
typedef struct kurir *address;

struct elmlist {
    infotype info;
    address next;
    address prev;
};

struct List {
    address first;
    address last;
};


#endif // CHILD_H_INCLUDED

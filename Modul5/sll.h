#ifndef SLL_H
#define SLL_H

typedef int infotype;
typedef struct ElmList *address;

struct ElmList {
    infotype info;
    address next;
};

struct List {
    address First;
};

void createList(List &L);
address alokasi(infotype x);
void dealokasi(address &P);
void insertFirst(List &L, address P);
void printInfo(List L);

// Fungsi tambahan soal nomor 3 dan 4
address findElm(List L, infotype x);
int totalInfo(List L);

#endif

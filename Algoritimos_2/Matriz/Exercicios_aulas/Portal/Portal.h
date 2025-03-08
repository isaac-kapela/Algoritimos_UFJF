#ifndef PORTAL_H_INCLUDED
#define PORTAL_H_INCLUDED

class Portal
{
private:
    int *vet;
    int n;
    int detInd(int i, int j);

public:
    Portal(int ordem);
    ~Portal();
    int get(int i, int j);
    void set(int i, int j, int val);
    void imprime();
    void preenche();
    bool nula();



};


#endif // PORTAL_H_INCLUDED

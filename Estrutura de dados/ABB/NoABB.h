class NoABB
{
    private:
        int valor;
        NoABB* esq;
        NoABB* dir;

    public:
        int altura;

        NoABB(int valor);
        ~NoABB();
        int getValor();
        NoABB* getEsq();
        NoABB* getDir();
        void setValor(int valor);
        void setEsq(NoABB* no);
        void setDir(NoABB* no);

        void insere(int valor);
        NoABB* busca(int valor);
        void imprimeOrdemCrescente();
        void imprimeVisualizacao(int n);
        NoABB* remove(NoABB* no, int valor);

        int soma();                         
        float media();                       
        bool ehCheia();                    
        bool ehCompleta(int indice, int n);  
        void imprimeIntervalo(int x, int y); 
        bool estritamenteBinaria();          
        
        int maioresQue(int valor);           
        float mediaNivel(int nivel);        
        void alturaNos();                  

        int contaNos();                     
        void somaContadorPorNivel(int nivelAlvo, int nivelAtual, float& soma, int& contador);
        void calculaAltura();           
};
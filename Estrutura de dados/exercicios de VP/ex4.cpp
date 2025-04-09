
bool NoABB::verificaAlturaNegraAux(int& alturaNegra, int alturaAtual) {
    if (this == NULL) {
        if (alturaNegra == -1) {
            alturaNegra = alturaAtual;
            return true;
        }
        return alturaAtual == alturaNegra;
    }

    bool esqOk = (this->getEsq() == NULL) ? 
                 verificaAlturaNegraAux(alturaNegra, alturaAtual + 1) : 
                 this->getEsq()->verificaAlturaNegraAux(alturaNegra, alturaAtual + 1);

    bool dirOk = (this->getDir() == NULL) ? 
                 verificaAlturaNegraAux(alturaNegra, alturaAtual + 1) : 
                 this->getDir()->verificaAlturaNegraAux(alturaNegra, alturaAtual + 1);

    return esqOk && dirOk;
}

int NoABB::verificaAlturaNegra() {
    int alturaNegra = -1;
    return (verificaAlturaNegraAux(alturaNegra, 0)) ? alturaNegra : -1;
}

int NoABB::insere(int valor) {
    this->insere(valor);
    int resultado = this->verificaAlturaNegra();
    return (resultado == -1) ? -1 : 0;
}

NoABB* NoABB::busca(int valor) {
    int resultado = this->verificaAlturaNegra();
    if (resultado == -1) return NULL;
    return this->busca(valor);
}


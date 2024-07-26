typedef struct CList {
    int info;
    struct CList *prox;
} CList;

CList *criarLista();
void destruirLista(CList *prim);
CList *inserirInicio(CList *prim, CList **ult, int valor);
CList *removerElemento(CList *prim, CList **ult, int valor);
CList *buscarElemento(CList *prim, int valor);
void imprimirLista(CList *prim);
#include "Vetor.h"
#include "QuickSort.h"

int main(){
    int v[tam];

    vAleatorio(v);

    cout<<"Vetor antes do algoritmo de ordenação: "<<endl;
    vMostrar(v);

    cout<<"\n\n"<<"Fim do preenchimento do vetor, aperte qualquer tecla para continuar...";
    getchar();

    clock_t t;
    t=clock();
    QuickSort(v, 0, tam-1);
    t=clock()-t;

    cout<<endl<<"Vetor ordenado por quick sort: "<<endl;
    vMostrar(v);

    cout<<"\n\n"<<((float)t)/CLOCKS_PER_SEC<<" segundos para ordenação por quick sort."<<endl<<endl;
    return 0;
}









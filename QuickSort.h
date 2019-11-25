/*Funções:*/
int Particionar(int *v, int i, int f){
    int esq, dir, pivo, temp;
    esq=i; //indice 0
    dir=f; //indice da ultima posição do vetor (neste caso tam-1)
    pivo=v[i]; //recebe o conteúdo da primeira posição do vetor.
    while(esq<dir){ //compara os indices
        while(v[esq] <= pivo) { //percorrendo o vetor pela esquerda até achar um conteúdo maior que o pivo, achando ele para e guarda o indice.
            esq++;
        }
        while(v[dir] > pivo) { //percorrendo o vetor pela direita até achar um conteúdo menor que o pivo, achando ele guarda esse indice.
            dir--;
        }
        if(esq < dir){ //compara os indices
            temp = v[esq]; //armazena o conteudo do vetor no indice que parou no primeiro while.
            v[esq]=v[dir]; //a ultima posição do indice achado no segundo while recebe o valor do ultimo indice achado no primeiro while pela esquerda.
            v[dir]=temp;//o conteudo armazenado anteriormente passa a ser o novo conteudo da ultima posição da direita
        }
    }
    v[i] = v[dir];
    v[dir] = pivo;
    return dir;
}

void QuickSort(int *v, int i, int f){ //fim e inicio sempre se referem ao indice da posição "X" do vetor
    int pivo;
    if(f > i){
        pivo = Particionar(v, i, f);
        QuickSort(v, i, pivo-1);
        QuickSort(v, pivo+1, f);
    }
}

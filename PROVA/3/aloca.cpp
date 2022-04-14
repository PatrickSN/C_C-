#include <iostream>
using namespace std;

void soma(int **mat1, int **mat2, int **soma, int l, int c){
    
    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
           soma[i][j]=mat1[i][j]+mat2[i][j];
        }
    }
    return;
}

void cria_matriz(int ** mat, int l, int c){

    mat = new int*[l];
    for(int i=0;i<l;i++){
        mat[i]=new int[c];
    }
    return;
}

void recebe_valor(int ** mat, int l, int c){
    
    for(int i=0; i<l;i++){
        for(int j=0;j<c;j++){
            cin >> mat[i][j];
        }
    }
    return;
}

void imprime(int ** mat, int l, int c){

    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
           cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return;
}

void limpa_memoria(int **mat,int l){
    for(int i=0;i<l;i++){
        delete [] mat[i];
    }
    delete [] mat;
    return;
}

int main(){
    return 0;
}
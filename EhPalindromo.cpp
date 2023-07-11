#include <iostream>
#include <cstring>

using namespace std;




void removerEspacos(char N[]){
    char W[200];
    int n=strlen(N);

    int espacos=0;
    for(int i=0; i<n;i++){
        if(N[i]==' '){
            espacos++;
        }
    }



    char aux;
    for(int i=0; i<n; i++){
        for(int j=1; j<n; j++){
            if(N[j]==' '){
                aux=N[j+1];
                N[j+1]=N[j];
                N[j]=aux;
            }
        }
    }

    int comecoEspacos= n-espacos;
    for(int i=comecoEspacos; i<n; i++){
        N[i]='\0';
    }
}



bool palindromo(char S[]){
    int i=0;
    int j=strlen(S);
    j--;

    int n=strlen(S);

    bool pal=true;
    for(;i<n;i++, j--){
        if(S[i]!=S[j]){
            pal=false;
        }
    }

    return pal;
}



int main()
{
    char S[200];
    cin.getline(S,200);
    removerEspacos(S);
    bool pal=palindromo(S);
    if(pal==true){
        cout << "Eh Palindromo";
    }
    else cout << "Nao Eh Palindromo";

}

#include <iostream>
#include <cstring>

using namespace std;

struct horario{
    int hora;
    int minuto;
    int segundo;
};


struct carro{
    char placa[100];
    horario entrada;
    horario saida;
    int permanencia;

};




int main()
{
    int n;
    cin >> n;

    carro BD[n];

    for(int i=0; i<n; i++){
        if(cin.peek()=='\n'){
            cin.ignore();
        }
        cin.getline(BD[i].placa,100);

        cin >> BD[i].entrada.hora;
        cin >> BD[i].entrada.minuto;
        cin >> BD[i].entrada.segundo;
        cin >> BD[i].saida.hora;
        cin >> BD[i].saida.minuto;
        cin >> BD[i].saida.segundo;

        int horaF= BD[i].saida.hora - BD[i].entrada.hora;
        int minF= BD[i].saida.minuto - BD[i].entrada.minuto;
        int secF= BD[i].saida.segundo - BD[i].entrada.segundo;

        horaF= horaF * 3600;
        minF= minF * 60;

        int TempoTotal = horaF + minF + secF;

        BD[i].permanencia = TempoTotal;
    }

    int maior=0;
    int indice;
    for(int i=0;i<n;i++){
        if(BD[i].permanencia > maior){
            maior= BD[i].permanencia;
            indice = i;
        }
    }

    cout << BD[indice].placa << endl;
    cout << BD[indice].saida.hora - BD[indice].entrada.hora << ":";
    cout << BD[indice].saida.minuto - BD[indice].entrada.minuto << ":";
    cout << BD[indice].saida.segundo - BD[indice].entrada.segundo;

}

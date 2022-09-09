#include<iostream>
using namespace std;

int main(){

    cout<<"***************************************"<<endl;
    cout<<"* Bem-vindos ao jogo da adivinhação!  *"<<endl;
    cout<<"***************************************"<<endl;
    const int NUMERO_SECRETO = 43;
    int chute;
    cout<<"Qual é seu chute? ";
    cin>>chute;
    cout<< "O valor do chute é: "<< chute <<endl;

    bool acertou = chute == NUMERO_SECRETO;
    bool maior = chute > NUMERO_SECRETO;

    if(acertou)
    {
        cout<< "Parabéns você acertou o número secreto!"<<endl;
    }
    else if(maior){
        cout <<"Seu chute foi maior que o número secreto!"<<endl;
    }
    else{
        cout <<"Seu chute foi maior que o número secreto!"<<endl;
    }

}
#include <iostream>

using namespace std;

int main()
{   int a, b, c = 0;
    double d,f;
    string e;
    cout << "SISTEMA DE PERFIL DE CLIENTES" << endl;
    cout << endl<<"-----------------------------" << endl;
    cout << endl<<"INFORME OS DADOS DO ULTIMO ANO" << endl;
    cout <<endl<<endl<<"Quantas compras o cliente fez no ultimo ano?" << endl;
    cin>>a;
    cout <<"Qual o ticket medio?" << endl;
    cin>>d;
    cout <<endl<<"Quantas vezes o cliente atrasou o pagamento?" << endl;
    cin>>b;
    cout<<"A maioria das compras foi em dinheiro, cartao ou boleto (D/C/B)" << endl;
    cin>>d;
//operações
   f = d *a ;
    if (a>0 && a < 3 && f <= 3000){
        c = 20;}
    if (a>=3 && f <= 3000){
        c = 40;}
    if (f >= 3000){
        c = 60;}
//declarações
    cout <<endl<<"Score de volume de compras = "<<c<<" pontos" << endl;
    return 0;

}

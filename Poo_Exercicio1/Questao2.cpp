#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"portuguese");

    float raio,diametro,area,circunferencia;

    cout<<"Digite o raio do c�rculo: "<<endl;
    cin>>raio;

    diametro= 2*raio;
    area=3.14*(raio*raio);
    circunferencia= 2*3.14*raio;

    cout<<"O di�metro do circulo �: "<<diametro<<endl;
    cout<<"O area do circulo �: "<<area<<endl;
    cout<<"O circunfer�ncia do circulo �: "<<circunferencia<<endl;

    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"portuguese");

    float raio,diametro,area,circunferencia;

    cout<<"Digite o raio do círculo: "<<endl;
    cin>>raio;

    diametro= 2*raio;
    area=3.14*(raio*raio);
    circunferencia= 2*3.14*raio;

    cout<<"O diâmetro do circulo é: "<<diametro<<endl;
    cout<<"O area do circulo é: "<<area<<endl;
    cout<<"O circunferência do circulo é: "<<circunferencia<<endl;

    return 0;
}

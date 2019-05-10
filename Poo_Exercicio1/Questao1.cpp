# include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"portuguese");
    int n1, n2, n3, soma, media, produto, maior, menor;

    cout<<"Digite o primeiro, segundo e terceiro numero: ";
    cin>>n1>>n2>>n3;

    soma=n1+n2+n3;
    media= (n1+n2+n3)/3;
    if(n1>n2>n3)
        {
        maior=n1;
        }
    else if(n2>n1>n3)
        {
        maior=n2;
        }
    else
        {
        maior=n3;
        }

    if(n1<n2<n3)
        {
        menor=n1;
        }
    else if(n2<n1<n3)
        {
        menor=n2;
        }
    else
        {
        menor=n3;
        }


    cout<<"A soma é: "<<soma<<endl;
    cout<<"A média é: "<<media<<endl;
    cout<<"O maior é: "<<maior<<endl;
    cout<<"O menor é: "<<menor<<endl;
    return 0;


}

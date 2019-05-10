#include <iostream>

using namespace std;

class Vendas
{
public:

    void setValor(float preco)
    {
        valor=preco;
    }

    void setPecas(int quantidade)
    {
        pecas=quantidade;
    }

    float getValor()
    {
        return valor;

    }
    int getPecas()
    {
        return pecas;
    }

    Vendas totaliza(Vendas v[], int n)
    {

        int i;
        Vendas temp=0;

        valor=0;
        pecas=0;

        for(i=0; i<n;i++)
        {
            temp.valor+=v[i].getValor();
            temp.pecas+=v[i].getPecas();
        }

        return temp;
    }

    private:
        float valor;
        int pecas;

};

int main()
{
    Vendas total, v[5];
    v[0].setPecas(1);
    v[1].setPecas(2);
    v[2].setPecas(3);
    v[3].setPecas(4);
    v[4].setPecas(5);
    v[0].setPecas(1);
    v[1].setPecas(2);
    v[2].setPecas(3);
    v[3].setPecas(4);
    v[4].setPecas(5);
    total= totaliza(v,5);
    cout<<total.getPecas()<<endl<<total.getValor();
}

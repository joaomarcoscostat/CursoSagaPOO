#ifndef LOCADORA_H_INCLUDED
#define LOCADORA_H_INCLUDED
#include <string>

using namespace std;

class Amigo{
public:
    void setId(int Id);
    int getId();
    void setNome(string Nome);
    string getNome();
    void setEndere�o(string Endere�o);
    string getEndere�o();
    void setTelefone(int Telefone);
    int getTelefone();
    void setContador(int Contador);
    int getContador();.


private:
    int Id, Telefone;
    string Nome, Endere�o;
    static int contador;

};

class Data{
public:
    void setData(int Dia, int Mes, int Ano);
    string getData();
    int diferen�aDias(Data final);

private:
    int Dia,Mes,Ano;
};

class Filme{
public:
    void setId(int Id);
    int getId();
    void setTitulo(string Titulo);
    string getTitulo();
    void setGenero(string Genero);
    string getGenero();
    void setSitua�ao(int Situa�ao);
    int getSitua�ao();
    void setAno(int Ano);
    int getAno(int Ano);

private:
    int Id, Situa�ao, Ano;
    string Titulo, Genero,
};

class Loca�ao{
public:
    void setLoca�ao(Data DataLoca�ao);
    Data getDataLoca�ao();
    void setDataDevolu�ao(Data DataDevolu�ao);
    Data getDataDevolu�ao();
    void setDiasLoca�ao(int DiasLoca�ao);
    int getDiasLoca�ao();
    bool locar(Amigo amigo, Filme filme);
    void devolver(int Id, Data dataDevolu�ao);
};


#endif // LOCADORA_H_INCLUDED

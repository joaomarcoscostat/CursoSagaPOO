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
    void setEndereço(string Endereço);
    string getEndereço();
    void setTelefone(int Telefone);
    int getTelefone();
    void setContador(int Contador);
    int getContador();.


private:
    int Id, Telefone;
    string Nome, Endereço;
    static int contador;

};

class Data{
public:
    void setData(int Dia, int Mes, int Ano);
    string getData();
    int diferençaDias(Data final);

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
    void setSituaçao(int Situaçao);
    int getSituaçao();
    void setAno(int Ano);
    int getAno(int Ano);

private:
    int Id, Situaçao, Ano;
    string Titulo, Genero,
};

class Locaçao{
public:
    void setLocaçao(Data DataLocaçao);
    Data getDataLocaçao();
    void setDataDevoluçao(Data DataDevoluçao);
    Data getDataDevoluçao();
    void setDiasLocaçao(int DiasLocaçao);
    int getDiasLocaçao();
    bool locar(Amigo amigo, Filme filme);
    void devolver(int Id, Data dataDevoluçao);
};


#endif // LOCADORA_H_INCLUDED

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
    void setEnderešo(string Enderešo);
    string getEnderešo();
    void setTelefone(int Telefone);
    int getTelefone();
    void setContador(int Contador);
    int getContador();.


private:
    int Id, Telefone;
    string Nome, Enderešo;
    static int contador;

};

class Data{
public:
    void setData(int Dia, int Mes, int Ano);
    string getData();
    int diferenšaDias(Data final);

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
    void setSituašao(int Situašao);
    int getSituašao();
    void setAno(int Ano);
    int getAno(int Ano);

private:
    int Id, Situašao, Ano;
    string Titulo, Genero,
};

class Locašao{
public:
    void setLocašao(Data DataLocašao);
    Data getDataLocašao();
    void setDataDevolušao(Data DataDevolušao);
    Data getDataDevolušao();
    void setDiasLocašao(int DiasLocašao);
    int getDiasLocašao();
    bool locar(Amigo amigo, Filme filme);
    void devolver(int Id, Data dataDevolušao);
};


#endif // LOCADORA_H_INCLUDED

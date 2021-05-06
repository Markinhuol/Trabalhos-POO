#ifndef Jogador_hpp
#define Jogador_hpp

#include<iostream>
using namespace std;

class Jogador
{
public:
  void cadastraJogador();
  float getSalario();
  Jogador(string nome);
  void imprime();
  string getNome();
  int getId();
  float recebeSalario();
  float setSalario();
  

private:
  string nome;
  int    numId;
  float  salario;
  int    geraId();
  int static ultimoId;
};

#endif
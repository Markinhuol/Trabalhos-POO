#include "Jogador.hpp"

int Jogador::ultimoId = 0;

Jogador::Jogador(string nome)
{
  this->nome = nome;
  this->numId = geraId();
}

void Jogador::imprime()
{
  cout << numId << " - " << nome << " - " << salario << endl;
}

int Jogador::geraId()
{
  ultimoId++;
  return ultimoId;
}

string Jogador::getNome()
{
  return nome;
}

int Jogador::getId()
{
  return numId;
}

float Jogador::getSalario()
{
  cout << "Qual o salario do Jogador: " << endl;
  cin >> salario;

return salario;
}

void Jogador::cadastraJogador()
{
  cout << "Nome do jogador: ";
  cin >> nome;
}

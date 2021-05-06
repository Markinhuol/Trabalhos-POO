#ifndef ListaDeJogador_hpp
#define ListaDeJogador_hpp

#include "Jogador.hpp"
#include <vector>

class ListaDeJogador
{
public:
  void adicionaJogador(string nome);
  void removeJogador(string nome);
  void removeJogador(int numId);
  void imprimeLista();
  int  getId(string nome);

private:
  vector<Jogador> jogadores;
};

#endif
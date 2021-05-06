#include "ListaDeJogador.hpp"

void ListaDeJogador::adicionaJogador(string nome)
{
  jogadores.push_back(Jogador(nome));
}

void ListaDeJogador::imprimeLista()
{
  for(int i=0; i < jogadores.size(); i++)
  {
    jogadores[i].imprime();
  }
}

int ListaDeJogador::getId(string nome)
{
  for (int i=0; i< jogadores.size(); i++)
  {
    if(jogadores[i].getNome()==nome)
        return jogadores[i].getId();
  }
  return NULL;

}
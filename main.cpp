#include "ListaDeJogador.hpp"
#include "Time.hpp"
#include "Jogador.hpp"

int main()
{

  
  ListaDeJogador lj;

  lj.adicionaJogador("Marcus");
  lj.adicionaJogador("Bruna");
  lj.adicionaJogador("Bruno");
  lj.adicionaJogador("Katiele");
  lj.adicionaJogador("Roberto");
  lj.adicionaJogador("Mario");
  lj.imprimeLista();

  Time xadrez("Chees");
  Time dama("Checkers");

  xadrez.adicionaJogador(lj.getId("Marcus"));
  xadrez.adicionaJogador(lj.getId("Bruna"));
  xadrez.adicionaJogador(lj.getId("Bruno"));
  xadrez.adicionaJogador(lj.getId("Katiele"));

  dama.adicionaJogador(lj.getId("Roberto"));
  dama.adicionaJogador(lj.getId("Mario"));

  dama.detalhes();
  xadrez.detalhes();
  

  return 0;
}
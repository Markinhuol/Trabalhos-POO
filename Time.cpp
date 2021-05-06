#include "ListaDeJogador.hpp"
#include "Time.hpp"
#include "Jogador.hpp"

Time::Time(string ntime)
{
    nomeTime = ntime;
}

void Time::adicionaJogador(int numId)
{
    contratados.push_back(numId);
}

void Time::detalhes()
{
    cout << "\n" << nomeTime << ": \n";
    
    cout << "Jogadores:\n";
    for(int i=0; i<contratados.size(); i++)
    {
      cout << contratados[i] << endl;
      
    }

}

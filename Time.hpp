#ifndef Time_hpp
#define Time_hpp
#include "Jogador.hpp"
#include <iostream>
#include <vector>

using namespace std;

class Time
{
    
public:
    //void imprimeLista();
    Time(string ntime);
    void adicionaJogador(int numId);
    void detalhes();
    void detalhesFinanceiros();
    vector <Jogador> jogadores;
    
private:
    string nomeTime;
    vector <int> contratados;
};

#endif
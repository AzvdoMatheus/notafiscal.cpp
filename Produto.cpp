#include "Produto.h"

Produto::Produto(){
  nome = "";
  preco = 0.00;
  qnt_estoque = 0;
}

void Produto::MostrarDetalhes(){
  cout << "Produto: "<< nome << " - Preço: R$" << preco << " - Quantidade em Estoque: " <<  qnt_estoque << endl;
}

string Produto::GetNome(){
  return nome;
}
float Produto::GetPreco(){
  return preco;
}
int Produto::GetQnt_Estoque(){
  return qnt_estoque;
}

void Produto::SetNome(string n){
  nome = n;
}
void Produto::SetPreco(float p){
  preco = p;
}
void Produto::SetQnt_Estoque(int q){
  qnt_estoque = q;
}
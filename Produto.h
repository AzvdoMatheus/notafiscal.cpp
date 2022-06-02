#include <iostream>
using namespace std;

class Produto {
  private:
    string nome;
    float preco;
    int qnt_estoque;

  public:
    Produto();
    void MostrarDetalhes();

    string GetNome();
    float GetPreco();
    int GetQnt_Estoque();

    void SetNome(string n);
    void SetPreco(float p);
    void SetQnt_Estoque(int q);
};
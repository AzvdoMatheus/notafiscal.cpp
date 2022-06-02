#include "Produto.h"
#include "Pedido.h"

class Supermercado{
  public:
  	Supermercado();
  	void RealizarVenda();
    void FecharCaixa();
  
  private:
  	Produto estoque[3];
  	Pedido vendas[10];
};
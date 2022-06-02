#include <iostream>
using namespace std;

struct ItemPedido{
	string nomeItem;
	double valorUnitario;
	int quantidade;
};

class Pedido {
  private:
  	string nome_cliente;
  	float valor_total;
  	string forma_pag;
  	bool pedido_pago;
  	ItemPedido itens[3];
  	int qtdItensNoPedido;
  
  public:
  	Pedido();
  	void setNome_Cliente(string nome);
  	void addItemNoPedido(string nome, double valor, int qtd);
  	void fecharPedido();
  	void gerarNotaFiscal();
};
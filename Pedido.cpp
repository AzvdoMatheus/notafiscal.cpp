#include "Pedido.h"
using namespace std;

Pedido::Pedido(){
	qtdItensNoPedido = 0;
	valor_total = 0;
	pedido_pago = false;
}

void Pedido::setNome_Cliente(string nome){
	nome_cliente = nome;
}

void Pedido::addItemNoPedido(string nome, double valor, int qtd){
	itens[qtdItensNoPedido].nomeItem = nome;
	itens[qtdItensNoPedido].valorUnitario = valor;
	itens[qtdItensNoPedido].quantidade = qtd;

	qtdItensNoPedido++;
}

void Pedido::fecharPedido(){
	char op;

	// Calcular o valor total, percorrendo os itens do pedido
	for (int i = 0; i < qtdItensNoPedido; i++){
		valor_total += itens[i].valorUnitario * itens[i].quantidade;
	}

	cout << "O valor do pedido foi " << valor_total << ". Vai pagar agora? (S/N) ";
	cin >> op;

	if (op == 'S'){
		cout << "Qual a forma de pagamento? ";
		cin >> forma_pag;

		cout << "\n Pagamento realizado. Obrigado!";
		pedido_pago = true;
    pedidos_feito++;
  }
  else{
		pedido_pago = false;
		cout << "Seu pagamento esta pendurado.";
    pedidos_aberto++;
	}
	gerarNotaFiscal();
}

void Pedido::gerarNotaFiscal(){
	cout << "\n\n\n=== NOTA FISCAL ===\n\n";
	cout << "Cliente: " << nome_cliente << endl;
	cout << "Status do pagamento: ";

	if (pedido_pago){
		cout << "PEDIDO PAGO. Forma de pagamento: " << forma_pag << endl;
	}
	else{
		cout << "PAGAMENTO PENDENTE\n";
	}

	cout << "\n\n Itens do Pedido: \n\n";
	cout << "Quantidade - Descricao - Valor Unitario - Total do Item\n";

	for(int i = 0; i < qtdItensNoPedido; i++){
		cout << itens[i].quantidade << " - " << itens[i].nomeItem << " - " << itens[i].valorUnitario << " - " << itens[i].valorUnitario * itens[i].quantidade << endl;
	}

	cout << "\nTOTAL DA NOTA FISCAL: " << valor_total << endl;
}
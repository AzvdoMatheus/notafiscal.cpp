#include "Supermercado.h"

int main(){
  
	Supermercado vendaDaEsquina;
  char fecharCaixa;

  while (fecharCaixa != 'X'){ 
	  vendaDaEsquina.RealizarVenda();
    cout << "Se deseja fechar o caixa digite X: ";
    cin >> fecharCaixa;
  }  

  vendaDaEsquina.FecharCaixa();
	// Pendencias:
	// Pagar pedidos em aberto
	// Listagem de pedidos em aberto que aguardam pagamento
  
	// Ao encerrar o sistema, fechar o caixa:
	// Mostrar quantos pedidos foram feitos, quanto dinheiro entrou, e quanto tem de pedidos em aberto para serem pagos

	return 0;
}
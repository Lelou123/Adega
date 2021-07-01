#include<iostream>
#include<string.h>
#include<conio.h>
#include<fstream>
#include<unistd.h>
#include<windows.h>
#include <iomanip>
#include<locale.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

    void cadastro();
    void logar();
    void italiano();
    void menu();



    struct Cliente
{
    char nome[30];
    int rg;
    int cpf;
    char endereco[50];
    char mais[50];
    int telefone;
    int numero;
    char login[20];
    char senha[20];
    int contar;
};

struct Cliente cliente[30];


int main()
{
    setlocale(LC_ALL, "Portuguese");

    int opcao, prato, restaurante;

    system("color 6");

    printf("\n\n\n\t\t\t\t\t\t\tSEJA BEM VINDO A ADEGA CASA DA SOGRA :)\n\n");
    printf("\n\n\n\t\t\t\t\t\tDigite (1) para fazer login ou (2) para se cadastrar: ");
    scanf("%d", &opcao);


    while(opcao < 1 || opcao > 2)
    {
        printf("\nOpcão inválida, digite novamente:");
        scanf("%d", &opcao);
    }

    if(opcao == 1)
    {
        logar();
    }
    else if(opcao == 2)
    {
        cadastro();
    }


    return 0;

}
void cadastro()
{
    int cont = 0;
    int maisClientes;
    int clientes;

    do
    {
        maisClientes = 0;


        printf("\nDigite seus dados para efetuar o cadastro:\n\n");
        printf("Nome completo: ");
        fflush(stdin);
        fgets(cliente[cont].nome,30,stdin);
        printf("RG: ");
        scanf("%d", &cliente[cont].rg);
        printf("CPF: ");
        scanf("%d", &cliente[cont].cpf);
        printf("Endereço de entrega: ");
        fflush(stdin);
        fgets(cliente[cont].endereco,50,stdin);
        printf("O local é uma casa ou um condominio? ");
        fflush(stdin);
        fgets(cliente[cont].mais,50,stdin);
        printf("numero do local: ");
        scanf("%d", &cliente[cont].numero);
        printf("Telefone: ");
        scanf("%d", &cliente[cont].telefone);
        printf("Login: ");
        fflush(stdin);
        scanf("%s", &cliente[cont].login);
        printf("Senha: ");
        fflush(stdin);
        scanf("%s", &cliente[cont].senha);
        printf("\n");

        fflush(stdin);



        printf("Deseja efetuar outro cadastro? (1)SIM (2)NÃO: ");
        scanf("%d", &clientes);
        printf("\n");

        if(clientes == 1)
        {
            cliente[0].contar++;
            maisClientes++;
            cont++;
            system("cls");
        }
        else
        {
            system("cls");
            printf("\n\n\n\n\n\n\t\t\t\t\t\t\tFAÇA O LOGIN!\n\n");
            logar();
        }

    }
    while(maisClientes == 1);
}

void logar()
{
    char login[20], senha[20];
    int contador;

    a:
    printf("\n\t\t\t\t\t\t\tNome de usuario: ");
    fflush(stdin);
    scanf("%s", &login);
    fflush(stdin);
    printf("\t\t\t\t\t\t\tSenha: ");
    fflush(stdin);
    scanf("%s", &senha);
    system("cls");

    system("color A");

    if(strcmp(login,"adm") == 0 && strcmp(senha,"adm") == 0)
    {
        printf("\n\n\t\t\t\t\t\t\t\tBem vindo administrador!\n\n");
        menu();


    }

    for(contador = 0; contador <= cliente[0].contar; contador++)
    {
        if(strcmp(login, cliente[contador].login) == 0 && strcmp(senha, cliente[contador].senha) == 0 )
        {
            printf("\t\t\t\t\t\tseja Bem vindo a ADEGA CASA DA SOGRA :) \n\n\t\t\t\t\t\tCliente:");
            printf("%s", cliente[contador].login);
            menu();


        }

        else if(strcmp(login, cliente[contador].login) != 0 || strcmp(senha, cliente[contador].senha) != 0)
        {

        system("color 4");
        printf("SENHA OU LOGIN INCORRETC, TENTE NOVAMENTE");
        goto a;
        exit(0);
        break;


        }
    }

}

void menu()
{
 int adega[10]={2,140,35,9,4,110,15,6,106,16} ;

 cout<<"\n\n\t\t\t\t\t\t\t\t ADEGA CASA DA SOGRA\n";

 int t_ventas,produto,i,arr,suma, quant;
 float precio_prod, fin, t_cliente;
 char cliente, t_produto;
 cout<<"\n\t\t\t\t\t\tResponda apenas com (s) para sim e (n) para nao\n\n" <<endl;
 cout<<"\n\t\t\t\t\t\tANTES DE CONTINUAR.....\n\n\t\t\t\t\t\tvoce tem 18 anos ou mais?" <<endl;
 cin>>cliente;
 while(cliente=='s')
 {
  system("cls");
  t_cliente=0;
  cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tDeseja ver o menu de bebidas que preparamos para os nossos clientes? :) \n " << endl;
  cin>>t_produto;
  while(t_produto=='s')
  {
      system("cls");
      printf("\n\n\n\n\n\n\n\n\n\n\n\n");
      system("color c");
    cout<<"\n\t====================================================================================================================================================="<<endl;
    cout << "\t\t\t\t\t\t\t\t ================================================"<<endl;
    cout << "\t\t\t\t\t\t\t\t|              ADEGA CASA DA SOGRA               |"<<endl;
    cout << "\t\t\t\t\t\t\t\t ================================================"<<endl;
    cout<<"\n\n\n\t===========================\t\t\t==========================\t\t\t\t==========================="<<endl;
    cout<<"\t[1]Chopp(355ml):R$2.00\t\t\t\t[2] Whisky(1L):R$140.00\t\t\t\t\t[3] Vodka(998ml):R$35.00\n\t[4] Energetico(250ml):R$9.00\t\t\t[5] Cerveja(350ml):R$4.20\t\t\t\t[6] GIN(750ml):R$110.00\n\t[7] Cachaca(910ml):R$15.00\t\t\t[8] Vinho(880ml):R$6.00\t\t\t\t\t[9] Tequila(750ml):R$106.00\n\t[10] Saque(600ml):R$16.00\t\t\t\n\t===========================\t\t\t==============================\t\t\t\t===========================\n\n\n\t\t\t\t\t\t\t\t"<<endl;
    cout<<"\n\t====================================================================================================================================================="<<endl;
    printf("\n\n\n\n");
    printf("\n\n\t\t\t\t\t\tDIGITE UM NUMERO DE 1 A 10 PARA SELECIONAR A BEBIDA! \n\n");
   scanf("%d",&produto);
   {
    arr=adega [produto-1];
   }
   t_cliente=t_cliente+arr;

   printf("\n\t\t\t\t\t\tDIGITE A QUANTIDADE QUE DESEJA:  ");
   scanf("%d",&quant);
   t_ventas=t_cliente+t_ventas;
   if(produto ==1,2,3,4,5,6,7,8,9,10)

   cout<<"\t\t\t\t\t\tDeseja adicionar mais bebidas(S/N)?  "<<endl;
   cin>>t_produto;
   }
   printf("\n\t\t\t\t\t\tTOTAL:R$ %.2f ", t_cliente * quant);

   t_ventas= quant * t_cliente;
   fin= t_ventas+ fin;

   cout<<"\t\t\t\t\t\tDeseja iniciar outra compra(S/N)? " <<endl;
      cin>>cliente;


}




 cout<<"\n\t\t\t\t\t\t\t SEU PEDIDO FOI ANOTADO :) \n\t\t\t\t\t\t\t GERANDO NOTINHA ";
        for(int a=1;a<5;a++)
        {
            Sleep(500);
            cout << "...";
        }


		cout<<"\n\t\t\t\t\t\t\t";
        system("PAUSE");

		system("cls");
		system("color F");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n");
						cout << "\t\t\t\t\t\t\t==================================================="<<endl;
						cout << "\t\t\t\t\t\t\t|              ADEGA CASA DA SOGRA                |"<<endl;
						cout << "\t\t\t\t\t\t\t==================================================="<<endl;
						cout << "\t\t\t\t\t\t\tRua Amador Bueno, 389/491 \n\t\t\t\t\t\t\tSanto Amaro, São Paulo-SP\n\t\t\t\t\t\t\tcep:04752-900"<<endl;
						cout << "\t\t\t\t\t\t\t__________________"<<endl;
						cout << "\t\t\t\t\t\t\t\n\t\t\t\t\t\t\t\t\t  CUPOM FISCAL               "<<endl;
						cout << endl;
				        cout << "\t\t\t\t\t\t\t__________________"<<endl;
						cout << endl;
                        cout << "\t\t\t\t\t\t\tTempo de entrega: 40-50min          Pedido : N1353"<<endl;
						cout << endl;
						cout << endl;
						cout << "\t\t\t\t\t\t\tATENDENTE: Murillo e Joana"<<endl;
					    cout << "\t\t\t\t\t\t\t__________________"<<endl;
						printf(" \t\t\t\t\t\t\t\t\t\n\t\t\t\t\t\t\tVALOR FINAL DA COMPRA: R$ %.2f", fin);
						printf("\t\t\t\t\t\t\t");
						cout << endl;
						cout << "\t\t\t\t\t\t\t==================================================="<<endl;


	int opcao;
    int dinheiro;
    int cartao;
    system("color D");
    inicio:
    printf("\n\n\n\t\t\t\t\t\t\t\t SELECIONE A FORMA DE PAGAMENTO:\n\n");
    printf("\n\t\t\t\t\t\t\t\t\t1-DINHEIRO  2-CARTAO \n");
    scanf("%d", &opcao);

     if(opcao == 1){
    printf("\t\t\t\t\t\t\t\t\tSELECIONADO: DINHEIRO\n\nO PAGAMENTO DEVE SER FEITO NA ENTREGA!\n\nO SEU PEDIDO JA ESTA SENDO PREPARADO E LOGO VAI SAIR PARA ENTREGA :) \n\nO seu pedido sera entregue no endereço do cadastro!\n  ");}



   else if(opcao == 2)
{
    printf("SELECIONADO: CARTÃO\n");
    printf("NOME DO TITULAR:");
        scanf("%s", &cartao);
    printf("TIPO DE CARTÃO(credito ou debito):");
        scanf("%s", &cartao);
    printf("\nDATA DO CARTÃO: ");
        scanf("%s", &cartao);
    printf("NUMERO DO CARTÃO: ");
        scanf("%s", &cartao);
    printf("CVV: ");
        scanf("%s", &cartao);

         cout<<"\n\t\t\t\t\t\t\t\t\tVALIDANDO PAGAMENTO";
        for(int a=1;a<5;a++)
        {
            Sleep(500);
            cout << "...";
        }

    printf("\n\n\t\t\t\t\t\tO SEU PEDIDO JA ESTA SENDO PREPARADO E LOGO VAI SAIR PARA ENTREGA :)\n\n\t\t\t\t\t\t\t Seu pedido sera entregue no endereço do cadastro!\n");

}


        exit(0);

    }

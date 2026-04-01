#include <cctype>
#include <string>
# include <iostream>
using namespace std;

int main() {
    // Criação das variaveis
    int vida, escolha;
    string resposta = "tempo";
    bool temTocha,temChave, temAmuleto, temEspada;
    
    //Inicialização das variaveis
    vida = 0;
    escolha = 0;
    temTocha = false;
    temChave = false;
    temAmuleto = false;
    temEspada = false;

    // Criação do personagem
    cout << "=====================================" << endl;
    cout << "        Bem-Vindo Jogador!" << endl;
    cout << "Voce esta em uma aventura em busca" << endl;
    cout << "de um tesouro perdido, mas cuidado," << endl;
    cout << "o caminho esta cheio de perigos!" << endl;
    cout << "=====================================" << endl;
    cout << "Para dar inicio a sua jornada" << endl;
    cout << "escolha seu personagem" << endl;
    cout << "[0] Guerreiro (Vida = 120 e espada)" << endl;
    cout << "[1] Aventureiro (vida = 100 e Tocha)" << endl;
    cin >> escolha;
    switch (escolha)
    {
        case 0:
            vida = 120;
            temEspada = true;
            break;
        case 1:
            vida = 100;
            temTocha = true;
            break;
        default:
            cout << "Escolha Invalida, tente novamente!" << endl;
            break;

    }

    // fase 1
    cout << "===============================================" << endl;
    cout << "                    A CAVERNA" << endl;
    cout <<"===============================================" << endl;
    cout << "Ao se aproximar da caverna, voce percebe que" << endl;
    cout << "existem 2 caminhos, um completamente escuro e" << endl;
    cout << "outro iluminado por cristais incandescentes" << endl;
    cout << "Qual caminho voce escolhe?" << endl;
    cout << "[0] Caminho Escuro" << endl;
    cout << "[1] Caminho Iluminado" << endl;
    cin >> escolha;
    if (escolha == 0) {
        if (temTocha) {
            cout << "Voce ergue sua tocha para iluminar o caminho e, como se fosse obra do destino, encontra um amuleto!" << endl;
            temAmuleto = true;
        } else {
            cout << "Sem qualquer fonte de luz para guia-lo, voce acaba caindo em um buraco!" << endl;
            cout << "Com o impacto da queda, perde 20 pontos de vida." << endl;
            vida -= 20;
        }
    } else if (escolha == 1) {
        cout << "Voce segue pelo caminho iluminado pelos cristais incandescentes e, durante a jornada, encontra uma chave!" << endl;
        temChave = true;
    } else {
        cout << "Escolha Invalida, tente novamente!" << endl;
    }
     cout << "Vida Atual: " << vida << endl;

    //Fase 2
    cout << "=======================================================" << endl;
    cout << "                   O GRANDE KALESSIN" << endl;
    cout <<"=======================================================" << endl;
    cout << "Ao seguir seu caminho, apenas o som de seus passos" << endl;
    cout << "rompe o silencio que o cerca. Um silencio que parece" << endl;
    cout << "prenunciar o caos. De repente, a caverna treme, nao " << endl;
    cout << "so o chao, mas toda a estrutura vibra. A sua" << endl; 
    cout << "frente, uma figura alta e robusta bloqueia a passagem." << endl;
    cout <<"=======================================================" << endl;
    cout << "Com voz firme e imponente, recita seu enigma em forma" << endl;
    cout << "de poesia, deixando claro que nao ha margem para erros." << endl;
    cout << "Devoro todas as coisas: aves, feras, plantas e flores. " << endl;
    cout << "Roio o aco, mordo o ferro, e das pedras sou senhores." << endl;
    cout << "Mato o rei, arruino a cidade, e derrubo a montanha com " << endl;
    cout << "minha brevidade." << endl;
    cout << "=======================================================" << endl;
    cout << "                    QUEM SOU EU?" << endl;
    cout << "=======================================================" << endl;
    cout << "O que voce quer fazer?" << endl;
    cout << "[0] Responder o enigma" << endl;
    cout << "[1] Atacar o Kalessin" << endl;
    cin >> escolha;
    
    // Escolha do jogador
    if (escolha == 0) 
    {
        cout << "Voce decide responder o enigma, e com confianca, responde: "  << endl;
        cin >> resposta;
        if (normalizar(resposta) == normalizar("tempo"))
        {
            cout << "O Grande Kalessin fixa seu olhar em voce por alguns segundos." << endl;
            cout << "Em seguida, com um sorriso enigmatico, diz: 'Correto. O tempo e a resposta.'" << endl;
            cout << "Entao, lentamente, ele abre passagem para o proximo desafio." << endl;
        }
        else
        {
            if (temAmuleto)
            {
                cout << "O Grande Kalessin fixa seu olhar em voce por alguns segundos." << endl;
                cout << "Em seguida, com um sorriso enigmatico, diz: 'Errado. O tempo e a resposta.'" << endl;
                cout << "Entao Kalessin, enfurecido, ataca você, mas graças ao amuleto que voce " << endl;
                cout << "encontrou, consegue se proteger do ataque e escapar do confronto, sem perder muito!" << endl;
                cout << "voce perde 50 pontos de vida." << endl;
                vida -= 50;
                cout << "Vida Atual: " << vida << endl;
                }
            else
            {
                cout << "O Grande Kalessin fixa seu olhar em voce por alguns segundos." << endl;
                cout << "Em seguida, com um sorriso enigmatico, diz: 'Errado. O tempo e a resposta.'" << endl;
                cout << "Entao Kalessin, enfurecido, ataca voce" << endl;
                cout << "voce perde 90 pontos de vida." << endl;
                vida -= 90;
                cout << "Vida Atual: " << vida << endl;

            }
            
        }
    }
    else if (escolha == 1)
    {
        if (temEspada)
        {
            cout << "Com sua coragem e determinação, voce decide atacar o Kalessin com sua espada." << endl;
            cout << "Apesar de sua bravura, o ataque e ineficaz contra a força do Kalessin." << endl;
            cout << "Mas voce consegue o ferir o bastante para voce possa escapar do confronto, sem perder muito!" << endl;
            cout << "voce perde 50 pontos de vida." << endl;
            vida -= 50;
            cout << "Vida Atual: " << vida << endl;

        }
        else
        {
            cout << "Voce decide atacar o Kalessin, mas sem uma arma adequada, seu ataque e fraco e ineficaz." << endl;
            cout << "Kalessin, enfurecido, ataca voce" << endl;
            cout << "voce perde 90 pontos de vida." << endl;
            vida -= 90;
            cout << "Vida Atual: " << vida << endl;

        }
    }
    else
    {
        cout << "Escolha Invalida, tente novamente!" << endl;
    }

    if (vida <= 0)
    {
        cout << "O Grande Kalessin vence o confronto e voce cai derrotado." << endl;
        cout << "Game Over!" << endl;
        return 0;
    }

    //Fase 3
    cout << "=======================================================" << endl;
    cout << "                    O TESOURO PERDIDO" << endl;
    cout << "=======================================================" << endl;
    cout << "Depois de passar pelo Kalessin e adentrar mais a fundo" << endl;
    cout << "na caverna, voce finalmente encontra o tesouro perdido." << endl;
    cout << "O bau do tesouro se encontra no meio da sala, protegido" << endl;
    cout << "por um mecanismo complexo, que parece ser ativado por" << endl;
    cout << "uma chave. O que voce faz?" << endl;
    cout << "[0] Tentar pegar o bau sem a chave" << endl;
    cout << "[1] Usar a chave para desativar o mecanismo" << endl;
    cin >> escolha;
    switch (escolha)
    {
        case 0:
            cout << "Voce tenta pegar o bau sem a chave, " << endl;
            cout << "mas o mecanismo e ativado, e uma armadilha e acionada!" << endl;
            cout << "Voce perde 50 pontos de vida." << endl;
            vida -= 50;
            break;
        case 1:
            if (temChave)
            {
                cout << "Voce usa a chave para desativar o mecanismo e consegue abrir o bau do tesouro!" << endl;
                 cout << "Parabens, voce encontrou o tesouro perdido e venceu o jogo!" << endl;

            }
            else
            {
                cout << "Voce tenta usar a chave para desativar o mecanismo, mas percebe que nao tem a chave!" << endl;
                cout << "O mecanismo e ativado, e uma armadilha e acionada!" << endl;
                cout << "Voce perde 50 pontos de vida." << endl;
                vida -= 50;
            }
            break;
        default:
            cout << "Escolha Invalida, tente novamente!" << endl;
            break;
    
    }
    cout << "Vida Atual: " << vida << endl;
    if (vida <= 0)
    {
        cout << "Voce nao conseguiu sobreviver as armadilhas do tesouro e cai derrotado." << endl;
        cout << "Game Over!" << endl;
        return 0;
    }
    else
    {
        cout << "Voce consegue escapar com vida, mas sem o tesouro." << endl;
        cout << "Parabens por sobreviver a aventura, mas o tesouro perdido continua perdido!" << endl;
    }
     return 0;
}
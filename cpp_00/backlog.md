# CPP00 / Ex01 - Backlog Final

## 🔴 OBRIGATÓRIO

### Comportamento

- [ ] Corrigir `stringstream` para rejeitar entradas como `2a` e `123abc`
- [ ] Testar `Ctrl+D` nos 5 campos do `ADD`
- [ ] Testar rotação completa com 16 contatos
- [ ] Conferir comportamento de entradas diferentes de `ADD`, `SEARCH` e `EXIT`
  - O PDF diz que qualquer outra entrada deve ser ignorada.

### Regras gerais do módulo

- [ ] Conferir nomes dos arquivos, classes, funções e atributos conforme as convenções do PDF
- [ ] Conferir que os headers possuem include guards
- [ ] Conferir que os headers possuem suas próprias dependências
- [ ] Conferir que não existem implementações de funções dentro dos headers
- [ ] Compilar com `-Wall -Wextra -Werror -std=c++98`
- [ ] Conferir ausência de:
  - `using namespace`
  - `friend`
  - `printf`
  - `malloc`
  - `free`
  - bibliotecas externas
  - recursos de C++11+

## 🟡 RECOMENDADO

### Conceitos do Module 00

- [ ] Alterar o construtor de `PhoneBook` para usar lista de inicialização:
  `PhoneBook::PhoneBook() : contacts_quant(0), index_add(0)`

- [ ] Avaliar/alterar `isEmpty` para `static`
- [ ] Avaliar/alterar `formatField` para `static`

> Esses conceitos fazem parte do foco do Module 00, mas não são requisitos específicos declarados para o Ex01.

## ⚪ OPCIONAL / NÃO URGENTE

- [ ] Avaliar setters usando `const std::string&` em vez de `std::string` por valor

> Isso é uma melhoria de eficiência, não uma exigência do Ex01.

## 🟢 JÁ TESTADO

- [x] ADD normal
- [x] SEARCH sem contatos
- [x] Campos vazios
- [x] Campos contendo apenas espaços
- [x] Índice `0`
- [x] Índices negativos
- [x] Índice maior que a quantidade de contatos
- [x] Índice válido
- [x] Entrada não numérica (`abc123`)
- [x] Enter vazio no índice
- [x] Campos com exatamente 10 caracteres
- [x] Campos com mais de 10 caracteres
- [x] Truncamento com `.`
- [x] Espaços dentro dos campos
- [x] Vários contatos
- [x] 8 contatos
- [x] Substituição de contatos após atingir 8
- [x] Comandos inválidos
- [x] Ctrl+D no SEARCH
- [x] Continuação do SEARCH após índice inválido
- [x] Exibição completa dos dados do contato

## 📌 Depois do backlog

Quando todos os itens 🔴 estiverem resolvidos:

1. Fazer uma revisão final de `main.cpp`
2. Fazer uma revisão final de `PhoneBook.hpp/.cpp`
3. Fazer uma revisão final de `Contact.hpp/.cpp`
4. Fazer uma revisão final do `Makefile`
5. Compilar do zero
6. Fazer uma última bateria de testes
7. Só então considerar o Ex01 pronto para avaliação
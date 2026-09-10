# Backlog - CPP00 / Ex01

## Validação e comportamento

- [ ] Corrigir `stringstream` para rejeitar entradas como `2a` e `123abc`
- [ ] Testar `Ctrl+D` nos 5 campos do `ADD`
- [ ] Testar rotação completa com 16 contatos

## C++ / Conceitos do módulo

- [ ] Alterar construtor de `PhoneBook` para usar lista de inicialização:
  `PhoneBook::PhoneBook() : contacts_quant(0), index_add(0)`

- [ ] Avaliar/alterar `isEmpty` para `static`
- [ ] Avaliar/alterar `formatField` para `static`

## Opcional / Não urgente

- [ ] Avaliar setters usando `const std::string&` em vez de `std::string` por valor
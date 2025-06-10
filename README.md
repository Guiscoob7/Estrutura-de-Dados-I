# 📚 Estrutura de Dados I

Este repositório contém implementações e exercícios desenvolvidos durante a disciplina de **Estrutura de Dados I**, abordando os conceitos fundamentais de estruturas de dados e algoritmos.

## 🎯 Sobre o Repositório

Este projeto acadêmico apresenta implementações práticas dos principais conceitos de estruturas de dados, incluindo código fonte, exemplos de uso e análises de complexidade. O material foi desenvolvido como parte do aprendizado em Ciência da Computação/Engenharia de Software.

## 📋 Conteúdo Programático

### Estruturas de Dados Lineares
- **Arrays e Listas**
  - Implementação de listas estáticas
  - Listas dinâmicas (linked lists)
  - Listas duplamente ligadas
  - Listas circulares

- **Pilhas (Stacks)**
  - Implementação com arrays
  - Implementação com listas ligadas
  - Aplicações práticas

- **Filas (Queues)**
  - Fila simples
  - Fila circular
  - Fila de prioridades
  - Deque (Double-ended queue)

### Estruturas de Dados Não-Lineares
- **Árvores**
  - Árvores binárias
  - Árvores de busca binária (BST)
  - Travessias (pré-ordem, em-ordem, pós-ordem)
  - Árvores balanceadas (conceitos básicos)

### Algoritmos de Ordenação
- **Algoritmos Básicos**
  - Bubble Sort
  - Selection Sort
  - Insertion Sort

- **Algoritmos Avançados**
  - Merge Sort
  - Quick Sort
  - Heap Sort

### Algoritmos de Busca
- Busca Linear
- Busca Binária
- Busca em estruturas não-lineares

## 🛠️ Tecnologias Utilizadas

- **Linguagem Principal**: C/C++ (ou especifique a linguagem usada)
- **Compilador**: GCC
- **Ambiente de Desenvolvimento**: Visual Studio Code / Code::Blocks
- **Sistema Operacional**: Windows/Linux/macOS

## 📁 Estrutura do Projeto

```
estrutura-dados-i/
├── src/
│   ├── listas/
│   │   ├── lista_estatica.c
│   │   ├── lista_dinamica.c
│   │   └── lista_dupla.c
│   ├── pilhas/
│   │   ├── pilha_array.c
│   │   └── pilha_lista.c
│   ├── filas/
│   │   ├── fila_simples.c
│   │   └── fila_circular.c
│   ├── arvores/
│   │   ├── arvore_binaria.c
│   │   └── bst.c
│   ├── ordenacao/
│   │   ├── bubble_sort.c
│   │   ├── quick_sort.c
│   │   └── merge_sort.c
│   └── busca/
│       ├── busca_linear.c
│       └── busca_binaria.c
├── include/
│   └── estruturas.h
├── examples/
│   └── exemplos_uso.c
├── tests/
│   └── testes_unitarios.c
└── docs/
    └── complexidade_algoritmos.md
```

## 🚀 Como Executar

### Pré-requisitos
- Compilador C/C++ (GCC recomendado)
- Make (opcional)

### Compilação e Execução

```bash
# Clone o repositório
git clone https://github.com/seu-usuario/estrutura-dados-i.git

# Entre no diretório
cd estrutura-dados-i

# Compile um exemplo específico
gcc -o programa src/listas/lista_dinamica.c -I include

# Execute o programa
./programa
```

### Usando Makefile (se disponível)
```bash
make all
make run
```

## 📊 Análise de Complexidade

| Estrutura/Algoritmo | Inserção | Remoção | Busca | Espaço |
|-------------------|----------|---------|--------|---------|
| Array | O(n) | O(n) | O(n) | O(n) |
| Lista Ligada | O(1) | O(n) | O(n) | O(n) |
| Pilha | O(1) | O(1) | - | O(n) |
| Fila | O(1) | O(1) | - | O(n) |
| BST (balanceada) | O(log n) | O(log n) | O(log n) | O(n) |
| Quick Sort | - | - | - | O(n log n) |
| Merge Sort | - | - | - | O(n log n) |

## 🧪 Testes

O repositório inclui testes unitários para validar as implementações:

```bash
# Compilar e executar testes
gcc -o testes tests/testes_unitarios.c src/*.c -I include
./testes
```

## 📚 Referências e Material de Estudo

- **Livros**:
  - "Estruturas de Dados e Algoritmos" - Goodrich, Tamassia e Goldwasser
  - "Algoritmos: Teoria e Prática" - Cormen, Leiserson, Rivest e Stein
  - "Estruturas de Dados usando C" - Aaron M. Tenenbaum

- **Recursos Online**:
  - [GeeksforGeeks - Data Structures](https://www.geeksforgeeks.org/data-structures/)
  - [Visualgo - Visualização de Algoritmos](https://visualgo.net/)

## 🤝 Contribuições

Este é um projeto acadêmico, mas sugestões e melhorias são bem-vindas:

1. Faça um fork do projeto
2. Crie uma branch para sua feature (`git checkout -b feature/nova-estrutura`)
3. Commit suas mudanças (`git commit -am 'Adiciona nova estrutura de dados'`)
4. Push para a branch (`git push origin feature/nova-estrutura`)
5. Abra um Pull Request

## 📄 Licença

Este projeto está sob a licença MIT. Veja o arquivo [LICENSE](LICENSE) para mais detalhes.

## 👨‍💻 Autor

**Seu Nome**
- GitHub: [@seu-usuario](https://github.com/seu-usuario)
- LinkedIn: [Seu Perfil](https://linkedin.com/in/seu-perfil)
- Email: seu.email@exemplo.com

## 🏆 Reconhecimentos

- Professor(a) da disciplina: **Nome do Professor**
- Universidade: **Nome da Universidade**
- Período: **Semestre/Ano**

---

⭐ Se este repositório foi útil para você, considere dar uma estrela!

## 📈 Status do Projeto

![Status](https://img.shields.io/badge/Status-Concluído-brightgreen)
![Linguagem](https://img.shields.io/badge/Linguagem-C-blue)
![Licença](https://img.shields.io/badge/Licença-MIT-yellow)

**Última atualização**: Junho 2025

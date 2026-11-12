# Lista Sequencial Estática (ArrayList) em C++

Implementação de uma lista sequencial estática em C++20, desenvolvida na disciplina de **Estrutura de Dados I**. O projeto explora o conceito de **Tipo Abstrato de Dados (TAD)**, separando a interface da implementação e dos testes.

## Conceitos e funcionalidades

- Interface abstrata `List<T>`.
- Implementação genérica `ArrayList<T>`, baseada em array com capacidade fixa.
- Inserção no início, no fim, em posição específica e em ordem.
- Remoção por posição, início, fim ou valor.
- Busca, consulta, atualização, limpeza e verificação de tamanho.
- Testes e exercícios complementares sobre manipulação de vetores.

> **Contexto acadêmico:** ADS — Instituto Federal do Triângulo Mineiro (IFTM), Campus Patrocínio.  
> Disciplina: Estrutura de Dados I.

## Organização

```text
.
├── include/
│   ├── ArrayList.h
│   └── List.h
├── src/
│   ├── ArrayListTest.cpp
│   ├── Q1_SelecaoVetorI.cpp
│   ├── Q2_SubstituicaoVetorI.cpp
│   ├── Q3_ConcatenationOfArray.cpp
│   ├── Q4_ContainsDuplicate.cpp
│   └── Q5_MaxConsecutiveOnes.cpp
├── CMakeLists.txt
├── .gitignore
├── main.cpp
└── README.md
```

## Tecnologias

- C++20
- CMake
- CLion

## Compilação

É necessário ter um compilador C++ compatível com C++20 e CMake instalado.

```bash
cmake -S . -B build
cmake --build build
```

Os executáveis são definidos individualmente no `CMakeLists.txt`. Para executar um deles, utilize o alvo correspondente gerado pelo CMake ou a configuração de execução da IDE.

## Observação sobre a implementação

A estrutura possui capacidade fixa: ao atingir o limite, novas inserções não são realizadas. Essa característica faz parte da proposta de uma lista sequencial estática e permite estudar o gerenciamento de posições em um array.

## Objetivo de aprendizagem

Compreender a abstração de uma estrutura de dados, sua implementação com armazenamento contíguo e os custos das operações de inserção, remoção e busca.

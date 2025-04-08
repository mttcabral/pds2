#include <iostream>

void pointerFunction(int &x, int *ptr, int n)
{
    x += 1;
    *ptr += 1;
    n += 1;
}

// 0) Crie uma função que receba três variveis inteiras como parâmetro, da seguinte forma:
//    - A primeira deve ser passada por referência
//    - A segunda deve ser passada "por referência" usando apontadores (passgem "por referência" disponível em C)
//    - A terceira deve ser passada por valor
//   A função deverá incrementar em 1 o valor das 3 variáveis e retornar.

int main()
{

    // 1) Declare uma variável do tipo inteiro e preencha com o valor informado na entrada
    int n;
    std::cin >> n;

    // 2) Declare um ponteiro para inteiros e inicialize com valor nulo
    int *p = nullptr;

    // 3) Declare um vetor de inteiros com tamanho informado na entrada e preencha com dados lidos da entrada
    int vectorSize;

    std::cin >> vectorSize;

    int vector[vectorSize];

    for (int i = 0; i < vectorSize; i++)
    {
        std::cin >> vector[i];
    }

    // 4) Imprima o ENDEREÇO da variável declarada em (1)
    // std::cout << "04) ";
    std::cout << &n << std::endl;

    // 5) Imprima o VALOR da variável declarada em (1)
    // std::cout << "05) ";
    std::cout << n << std::endl;

    // 6) Imprima o ENDEREÇO da variável declarada em (2)
    // std::cout << "06) ";
    std::cout << &p << std::endl;

    // 7) Imprima o VALOR da variável declarada em (2)
    // std::cout << "07) ";
    std::cout << p << std::endl;

    // 8) Imprima o ENDEREÇO da variável declarada em (3)
    // std::cout << "08) ";
    std::cout << &vector << std::endl;

    // 9) Imprima o ENDEREÇO da primeira posição da variável declarada em (3)
    // std::cout << "09) ";
    std::cout << &vector[0] << std::endl;

    // 10) Imprima o VALOR da primeira posição da variável declarada em (3)
    // std::cout << "10) ";
    std::cout << vector[0] << std::endl;

    // 11) Atribua o ENDEREÇO da variável declarada em (1) à variável declarada em (2)
    p = &n;

    // 12) Imprima o VALOR da variável declarada em (2)
    // std::cout << "12) ";
    std::cout << p << std::endl;

    // 13) Imprima o VALOR guardado no ENDEREÇO apontado por (2)
    // std::cout << "13) ";
    std::cout << *p << std::endl;

    // 14) Coloque o VALOR '5' no ENDEREÇO apontado por (2)
    *p = 5;

    // 15) Imprima o VALOR da variável declarada em (1)
    // std::cout << "15) ";
    std::cout << n << std::endl;

    // 16) Atribua o VALOR da variável (3) à variável declarada em (2)
    p = vector;

    // 17) Imprima o VALOR da variável declarada em (2)
    // std::cout << "17) ";
    std::cout << p << std::endl;

    // 18) Imprima o VALOR guardado no ENDEREÇO apontado por (2)
    // std::cout << "18) ";
    std::cout << *p << std::endl;

    // 19) Atribua o ENDEREÇO da primeira posição de (3) à variável declarada em (2)
    p = &vector[0];

    // 20) Compare o valor variáveis (2) e (3), imprimindo 'S' se forem iguais e 'N' se forem diferentes
    if (p == vector)
    {
        // std::cout << "20) ";
        std::cout << "S" << std::endl;
    }
    else
    {
        // std::cout << "20) ";
        std::cout << "N" << std::endl;
    }

    // 21) Imprima o VALOR da variável declarada em (2)
    // std::cout << "21) ";
    std::cout << p << std::endl;

    // 22) Imprima o VALOR guardado no ENDEREÇO apontado por (2)
    // std::cout << "22) ";
    std::cout << *p << std::endl;

    // 23) Multiplique todos os valores do vetor declarado em (3) por '10', porém manipulando apenas a variável (2)
    for (int i = 0; i < vectorSize; i++)
    {
        p = &vector[i];
        *p = *p * 10;
    }

    // 24) Imprima os elementos de (3) a partir variável do vetor utilizando a notação [] (colchetes)
    // std::cout << "24) ";
    for (int i = 0; i < vectorSize; i++)
    {
        if (i > 0 && i <= (vectorSize - 1))
            std::cout << " ";

        std::cout << vector[i];
    }
    std::cout << std::endl;

    // 25) Imprima os elementos de (3) a partir variável do vetor utilizando a notação ponteiro/deslocamento
    // Ou seja, você NÃO deve efetivamente alterar o valor do ponteiro inicial de (3)
    // std::cout << "25) ";
    for (int i = 0; i < vectorSize; i++)
    {
        if (i > 0 && i <= (vectorSize - 1))
            std::cout << " ";

        std::cout << *(vector + i);
    }
    std::cout << std::endl;

    // 26) Imprima os elementos de (3) utilizando a variável (2) e a notação ponteiro/deslocamento
    // Ou seja, você NÃO deve efetivamente alterar o valor do ponteiro inicial de (2)
    // std::cout << "26) ";
    p = vector;
    for (int i = 0; i < vectorSize; i++)
    {
        if (i > 0 && i <= (vectorSize - 1))
            std::cout << " ";

        std::cout << *(p + i);
    }
    std::cout << std::endl;

    // 27) Atribua o ENDEREÇO da última posição de (3) à variável declarada em (2)
    p = &vector[vectorSize - 1];

    // 28) Imprima o VALOR da variável declarada em (2)
    // std::cout << "28) ";
    std::cout << p << std::endl;

    // 29) Imprima o VALOR guardado no ENDEREÇO apontado por (2)
    // std::cout << "29) ";
    std::cout << *p << std::endl;

    // 30) Declare um ponteiro para ponteiro e o inicialize com o ENDEREÇO da variável (2)
    int **pp = &p;

    // 31) Imprima o VALOR da variável declarada em (30)
    // std::cout << "31) ";
    std::cout << pp << std::endl;

    // 32) Imprima o ENDEREÇO da variável declarada em (30)
    // std::cout << "32) ";
    std::cout << &pp << std::endl;

    // 33) Imprima o VALOR guardado no ENDEREÇO apontado por (30)
    std::cout << *pp << std::endl;

    // 34) Imprima o VALOR guardado no ENDEREÇO do ponteiro apontado por (30)
    // std::cout << "34) ";
    std::cout << **pp << std::endl;

    // 35) Crie 3 variáveis interiras e leia o valor delas da entrada
    int a, b, c;
    std::cin >> a >> b >> c;

    // 36) Chame a função criada em (0) passando as 3 variáveis criadas em (35) como parâmetro.
    pointerFunction(a, &b, c);

    // 37) Imprima o valor das 3 variáveis criadas em 35, uma por linha
    // std::cout << "37) " << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;

    return 0;
}

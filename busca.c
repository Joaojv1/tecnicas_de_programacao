#include<stdio.h>


int busca_unaria(int *vetor, int n)
{
    for(int i = 0; i < 20; i++)
    {
        if(vetor[i] == n)
            return 1;
    }
    return 0;
}



int main()
{
    int vetor[20];
    int i, n;
    for(i=0;i<20;i++)
    {
        vetor[i] = i;
    }
    printf("Digite o numero a ser buscado\n");
    scanf("%d", &n);
    
    int x = busca_unaria(vetor, n);
    printf("Achou = %d", x);
    return 0;
}

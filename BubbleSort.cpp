void BubbleSort(int vetor[],int n){
    int temp;
    for (int i = n - 1; i >= 1; --i)
    {
        //BinarySearch falha se isso estiver ordenado do maior para o menor
        for (int j = 0; j < i; j++)
        {
            if(vetor[j] > vetor[j + 1]){
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }        
    }    
}
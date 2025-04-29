int main(){
    // Movimentação da Torre
    // A torre pode se mover em linha reta, para cima,para baixo,direita ou esquerda
    // A torre vai se mover 5 casas a direita
    printf("Movimentação da Torre\n");
    for(int i = 0; i < 5; i++){
        printf("Direita\n");
    }

    //Movimentação do bispo
    // O bispo pode se mover em diagonal
    // O bispo vai se mover 5 casas para cima e para a direita
    printf("Movimentação do Bispo\n");
    int bispoMovimento = 0;
    while(bispoMovimento < 5){ 
        printf("Cima e Direita\n");
        bispoMovimento++;
    }


    // Movimentação da Rainha
    // A Rainha pode se mover para qualquer 
    // A Rainha vai se mover 8 casas para a esquerda
    printf("Movimentação da Rainha\n");
    int rainhaMovimento = 0;
    do{
        printf("Esquerda\n");
        rainhaMovimento++;
    } while(rainhaMovimento < 8);
    
    return 0;
}


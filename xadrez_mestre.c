#include <stdio.h>

void moverTorre(int torre){

    if (torre > 0)
    {
        printf("Direita\n");
        moverTorre(torre - 1);
    }
}

    void moverBispo(int bispo){

        if (bispo > 0)
        {
            printf("Cima, Direita\n");
            moverBispo(bispo - 1);
        }
        
    }

        void moverRainha(int rainha){

            if (rainha > 0)
            {
                printf("Esquerda\n");
                moverRainha(rainha - 1);
            }
            
        }
           

int main (){

    int movTorre = 5;
    int movBispo = 5;
    int movRainha = 8;
        
        
    printf("Movimento Torre:\n");
    moverTorre(movTorre);

    printf("\n");

        printf("Movimento Bispo:\n");
        moverBispo(movBispo);

        printf("\n");

            printf("Movimento Rainha:\n");
            moverRainha(movRainha);

            printf("\n");

                    printf("Movimento do Cavalo:\n");
    
                         const int cima = 2;
                         const int direita = 1;
                     
                        for (int i = 0; i < cima; i++) {
                             printf("Cima\n");
                         }
                     
                            int j = 0;
                            while (j < direita) {
                            printf("Direita\n");
                            j++;
                         }
    

    return 0;
}
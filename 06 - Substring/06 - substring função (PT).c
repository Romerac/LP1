void substring (char origem[], char destino[], int inicio, int fim){

    int j=0;
    for (int i=inicio; i<=fim ; i++, j++){
        destino[j]=origem[i];
    }
    destino[j]='\0';
}

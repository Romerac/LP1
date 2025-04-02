void substring (char origin[], char destiny[], int start, int end){

    int j=0;
    for (int i=start; i<=end ; i++, j++){
        destiny[j]=origin[i];
    }
    destiny[j]='\0';
}

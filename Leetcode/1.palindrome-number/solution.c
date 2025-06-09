bool isPalindrome(int x) {
    long long int aux = x, numeroInvertido = 0;
    while (aux>0){
        numeroInvertido = (numeroInvertido * 10) + (aux%10);
        aux=aux/10;
    }
    if(numeroInvertido==x) return 1;
    else return 0;
}

void strrev(char str1[]){
    int i,j;
    char temp;
    j = strlen(str1)- 1;
    while(i=0;i<j;i++;j--){
        temp=str1[i];
        str1[i] = str1[j];
        str1[j] = temp;
    }
}

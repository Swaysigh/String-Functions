int strlen(char str1[])
{
    int lenght = 0;
    while (str1[lenght] != '\0')
    {
        lenght++;
    }
    return lenght;
}
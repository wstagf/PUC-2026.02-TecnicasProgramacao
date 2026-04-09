// EX03 – Inverter string

int contarCaracteres(char str[]) {
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

void inverter(char str[]){
    int i=0;
    int j=contarCaracteres(str)-1;
    char temp;
    while(i<j){
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++; j--;
    }
}

int main() {
    char str[] = "PUC Universidade"; 
    inverter(str);
    printf("%s\n", str);

    return 0;

}
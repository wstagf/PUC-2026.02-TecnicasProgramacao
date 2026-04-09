
// EX04 – Comparar string

int comparar(char a[], char b[]){
    int i=0;
    while(a[i] != '\0' && b[i] != '\0'){
        if(a[i] != b[i])
            return 0;
        i++;
    }
    return a[i] == b[i];
}

int main() {
    char str[] = "PUC Universidade"; 
    char str2[] = "PUC Universidade"; 
    int igual = comparar(str, str2);
    printf("%d\n", igual);

    return 0;

}

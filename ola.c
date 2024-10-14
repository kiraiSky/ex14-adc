 # include < stdio .h >

int main () {
    char nome [100];
    FILE * f ;
    f = fopen (" DadosPessoais .txt ","r") ;
    fscanf (f , " %[^\ n]", nome ) ;
    printf (" ola %s\n", nome ) ;
    return 1;
}
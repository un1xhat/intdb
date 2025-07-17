#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
    int main(int argc, char **argv)
    {
        int i, o;
        i = atoi(argv[1]);
        o = atoi(argv[2]);
        FILE *f;
        f = fopen("pass.txt", "w");
        if(f == NULL){
            perror("open error");
            return 1;
        }
        printf("Criando wordlist...\n");

        if(i < o){
            while(i <= o){
                fprintf(f, "%d\n", i);
                i++;
            }
        }
        else if(o < i){
            while(i >= o){
                fprintf(f, "%d\n", i);
                i--;
            }
        }

        else{
            printf("???\n");
        }
        fclose(f);
        printf("word pronta, boa sorte =D\n");
        return 0;
    }

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,na,ne,ni,no,nu;
    int contP;

 char cadena[40];
    printf("ingresa una frase:  ");
    gets(cadena);
     for(i=0;i<strlen(cadena);i++){
                if(cadena[i]==' ')
                    printf("\n");
                else
                    printf("%c",cadena[i]);
			}
    for(i=0;cadena[i]!='\0';i++){
        if(cadena[i+1] == ' ' || cadena[i+1] == '\0'){
			contP++;

        }
    }
    i=0;
    na=0;
    ne=0;
    ni=0;
    no=0;
    nu=0;
     while(cadena[i]!='\0'){
            switch(cadena[i]){
            case 'a':
                na++;
                break;
            case 'e':
                ne++;
                break;
            case 'i':
                ni++;
                break;
            case 'o':
                no++;
                break;
            case 'u':
                nu++;
            }

         i++;
    }
    FILE*ap;
 ap=fopen("palabras.txt","a");
 if(ap!=NULL){
        printf("\n\nEl numero de palabras es: %d\n\n ",contP);
 fprintf(ap,"\n\nEl numero de palabras es: %d\n\n ",contP);
    printf("\n\nla palabra: %s \n\n a= %d \n e= %d \n i= %d \n o= %d \n u= %d ",cadena,na,ne,ni,no,nu);
      fprintf(ap,"\n\nla palabra: %s \n\n a= %d \n e= %d \n i= %d \n o= %d \n u= %d ",cadena,na,ne,ni,no,nu);
  }
     else
    printf("error en la apertura del archivo");
 fclose(ap);



    return 0;
}

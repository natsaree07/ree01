#include <stdio.h>
int main(){
    char str[10] = {'m','y','s','t','r'};
    char strNoSize[] = "myStr";
    printf(" sizeof str = %d\n", sizeof(str));
    printf(" sizeof strNoSize = %d\n", sizeof(strNoSize));
    int i ;
    for (i=0; i < 10; i++){
        printf("str[%d] %c\n",i , str[i]);
    }
    printf("\n");
    for (i=0; i < 10; i++){
        printf("strNoSize[%d] %c\n",i , strNoSize[i]);
    }
    str[2] = '\0';
    strNoSize[3] = '\0';
    printf("str=%s\n",str); 
    printf("strNoSize=%s\n",strNoSize); 

    return 0 ;
}
#include <stdio.h>
void printSize(char currsize[]);
int main(){
    char product[3][40]={"Shirt","Skirt","Shorts"};
    char size[3]={'S','M','L'};

    printSize(size);

    return 0;
}
    void printSize(char currsize[]){
      int i=0;
    while(i<3){
            if(currsize[i] =='S'){
                printf("%c = Small\n",currsize[i] );
            }
            else if(currsize[i] == 'M'){
                printf("%c = Medium\n", currsize[i]);
            }
            else if(currsize[i] == 'L'){
                printf("%c = Large\n", currsize[i]);
            }
            else{
                printf("incorrect size");
            }
        i++;
    }
}
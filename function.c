#include<stdio.h>
void namaste();
void bonjour();
int main() {
printf("enter i for indian & f for french : ");
char ch;
scanf("%c", &ch);

namaste();

return 0;

}
void namaste(){
    printf("namaste \n");
    bonjour();
    }
    void bonjour(){
        printf("bonjour\n");
    }



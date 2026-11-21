#include <stdio.h>

int main(){
    
    char ch;
    printf("Enter character :\n");
    scanf("%c" , &ch);
    printf("the value of character is %d\n", ch);

    if(ch>=97 && ch<=122){
        printf("this is a lowercase letter\n");
    }
    else{
        printf("this is not a lowercase letter\n");
    }
    return 0;
}

/*
finding lowercase is from ASCII value 
*/
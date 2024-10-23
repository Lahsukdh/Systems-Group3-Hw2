#include "lexer.h"
#include <stdio.h>

int main(int agrc,char * agrv[]){
    
char * fileLEX;
fileLEX = agrv[1];
lexer_init(fileLEX);
lexer_output(fileLEX);
}
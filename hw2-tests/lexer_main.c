#include "lexer.h"
#include <stdio.h>

int main(int agrc,char * agrv[]){
FILE * fileLEX;
fileLEX = fopen(agrv[1],"r");
lexer_init(fileLEX);
lexer_output(fileLEX);
}
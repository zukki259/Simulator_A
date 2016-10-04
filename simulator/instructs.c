#include <stdio.h>
#include <string.h>
#include "instructs.h"



int get_instr(char *name){
  if(!strcmp(name,"nop")){
    return NOP;
  }else if(!strcmp(name,"add")){
    return ADD;
  }else if(!strcmp(name,"addi")){
    return ADDI;
  }else if(!strcmp(name,"sub")){
    return SUB;
  }else if(!strcmp(name,"mul")){
    return MUL;
  }else if(!strcmp(name,"muli")){
    return MULI;
  }else if(!strcmp(name,"div")){
    return DIV;
  }else if(!strcmp(name,"load")){
    return LOAD;
  }else if(!strcmp(name,"loadi")){
    return LOADI;
  }else if(!strcmp(name,"str")){
    return STR;
  }else if(!strcmp(name,"stri")){
    return STRI;
  }else{
    printf("Warning: unknown instruction '%s'\n",name);
    return UNKNOWN;
  }
  return UNKNOWN;
}



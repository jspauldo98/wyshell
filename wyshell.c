/*
 * wyshell.c
 * Author: Jared Spaulding
 * Date: May 4, 2020
 *
 * COSC 3750, Homework 10
 *
 * Limited shell program
 * 
 * Examples:
 *  command arg arg
 *  command arg arg; command
 *  command arg | command arg | command arg
 *  command arg | command arg; command arg | command arg
 *  command arg > out
 *  command arg < in
 *  command arg >> appendOut
 *  command arg 2> outErr
 *  command arg 2>> appendOutErr
 *  command arg 2>&1 outRedirErr
 *  command arg | command arg > out; command arg | command arg >> append
 *  command arg < in > out
 */

#include "wyutilities.h"
#include "mem.h"
#include <stdio.h>

int main()
{
  char *rpt;
  char buf[1024];

  // Loop to parse line after line until error or EOF
  while(1) {
    printf("%s", "$> ");
    rpt=fgets(buf,256,stdin);
    if(rpt == NULL) {
      if(feof(stdin)) {
       return 0;
      }
      else {
       perror("wyshell:");
       return 1;
      }
    }

    struct mem *m = parse(buf);
    if (m != NULL){
      exec(m);
    }
  }
}
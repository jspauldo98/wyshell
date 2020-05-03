/*
 * mem.h
 * Author: Jared Spaulding
 * Date: May 4, 2020
 *
 * COSC 3750, Homework 10
 *
 * Header for mem.c
 * Contains data structure to hold command line information
 *
 */

#ifndef MEM_H
#define MEM_H

#define MAX_SIZE 256

struct mem {
  int semicolon;
  int pipe;
  int amp;
  char redirOut[MAX_SIZE];
  char redirIn[MAX_SIZE];
  char appendOut[MAX_SIZE];
  char redirErr[MAX_SIZE];
  char appendErr[MAX_SIZE];
  char redirErrOut[MAX_SIZE];
  char *argv[MAX_SIZE];
};

extern struct mem *createMem();
/*
 * Returns memory allocated mem structure
 */

#endif
/*
 * mem.c
 * Author: Jared Spaulding
 * Date: May 4, 2020
 *
 * COSC 3750, Homework 10
 *
 * Contains data structure to hold command line info
 *
 */

#include "mem.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

struct mem *createMem() {
  struct mem *m = (struct mem*) malloc(sizeof(struct mem));
  return m;
}
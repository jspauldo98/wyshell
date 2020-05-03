/*
 * wyutilities.h
 * Author: Jared Spaulding
 * Date: May 4, 2020
 *
 * COSC 3750, Homework 10
 *
 * Header for wyutilities.c
 * Utility functions implemented in wyutilities.c
 *
 */

#ifndef _WYUTILITIES_H
#define _WYUTILITIES_H

#include "mem.h"

extern struct mem *parse(const char*);
/*
 * Will parse char * and spearate into commands 
 * and crucial arguments that are stored in mem struct.
 * 
 * Returns array of mem objects
 */

extern void exec(struct mem*);
/*
 * Will execute each command specified within each mem 
 * in mem array
 */

extern int execArg(struct mem);
/*
 * Will filter redirection options
 * and execute command specified in mem
 * 
 * Returns 1 on success, 0 on failure
 */

extern int execPipe(struct mem*, const int);
/*
 * Will pipe n commands together specified by 
 * given array of mem
 *
 * Returns 1 on success, 0 on failure
 */

extern int handleRedir(struct mem, int);
/*
 * Determines what redirection will take place
 * 1. replace standard output with file output
 * 2. replace standard input with file input
 * 3. replace standard error output with file output
 *
 * Returns 1 on sucess, 0 on failure
 */

#endif
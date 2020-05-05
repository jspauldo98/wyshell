###############################################################################
# Makefile 
# Jared Spaulding
# COSC 3750, SP 2020
# Homework 10
# May 4th, 2020
# 
# Makefile to complile wyshell
###############################################################################

CC=gcc
CFLAGS=-ggdb -Wall
RM=/bin/rm -f

.PHONY: tidy clean

wyshell: wyshell.c wyscanner.c wyutilities.c mem.c
	$(CC) $(CFLAGS) wyshell.c wyscanner.c wyutilities.c mem.c -o wyshell -Wno-unused-function

tidy:
	$(RM) *.o

clean: tidy
	$(RM) wyshell
	$(RM) core.*
##
## Makefile for KOOC in /u/epitech_2010s/armand_m/cu/rendu/kooc/KOOC/tests
## 
## Made by morgan armand
## Login   <armand_m@epitech.net>
## 
## Started on  Thu Jun 26 16:39:06 2008 morgan armand
## Last update Fri Jul  4 14:14:40 2008 morgan armand
##

SRC	= $(wildcard tests/*.kc)
TESTED	= ${SRC:.kc=.i}

.SUFFIXES : .kc .i

.kc.i:
	@../bin/kooc $< > $<.log && echo -e $< "\t[\033[32mSUCCESS\033[0m]" || echo -e $< "\t[\033[31mFAILED\033[0m]"

all:	clean ${TESTED}

clean:
	@rm -f *~ tests/*.c tests/*.h tests/*.ktree tests/*~ tests/*.kc.log tests/*.kout

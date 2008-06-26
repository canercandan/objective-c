##
## Makefile for KOOC in /u/epitech_2010s/armand_m/cu/rendu/kooc/KOOC/tests
## 
## Made by morgan armand
## Login   <armand_m@epitech.net>
## 
## Started on  Thu Jun 26 16:39:06 2008 morgan armand
## Last update Thu Jun 26 16:56:21 2008 morgan armand
##

SRC	= $(wildcard tests/*.kc)
TESTED	= ${SRC:.kc=.i}

.SUFFIXES : .kc .i

.kc.i:
	@../bin/kooc $< > $<.log && echo $< "[\033[33mSUCCESS\033[0m]" || echo $< "[FAILED]"

all:	${TESTED}
	@echo "Ok!"
clean:
#@rm -f *~ tests/*.i tests/*.ktree tests/*~ tests/*.c.log tests/*.kout

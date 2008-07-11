##
## Makefile for KOOC in /u/epitech_2010s/armand_m/cu/rendu/kooc/KOOC/tests
## 
## Made by morgan armand
## Login   <armand_m@epitech.net>
## 
## Started on  Thu Jun 26 16:39:06 2008 morgan armand
## Last update Fri Jul 11 09:46:38 2008 morgan armand
##

#$(wildcard tests/*.kc)

SRC	=	tests/test_import.kc			\
		tests/test_module.kc			\
		tests/test_mod.kc			\
		tests/test_implementation.kc		\
		tests/test_package.kc			\
		tests/test_class.kc

TESTED	=	${SRC:.kc=.i}

.SUFFIXES : .kc .i

# > $<.log

.kc.i:
	@../bin/kooc $< && echo -e $< "\t[\033[32mSUCCESS\033[0m]" || echo -e $< "\t[\033[31mFAILED\033[0m]"

all:	clean ${TESTED}

clean:
	@rm -f *~ tests/*.c tests/*.h tests/*.ktree tests/*~ tests/*.kc.log tests/*.kout

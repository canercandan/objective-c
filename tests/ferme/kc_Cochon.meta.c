/*
** KOOC - Kind of Objective C for ****
** { dream team 42. } -> Tek3s Strasbourg
*/

#include <stdlib.h>
#include <stdio.h>
#include "kc_Cochon.h"
#include "kc_Cochon.meta.h"

static Cochon	*alloc()
{
	Cochon	*new;

	if (!(new = (Cochon*)calloc(1, sizeof(*new))))
	{
		fprintf(stderr, "not enough memory\n");
		exit(-1);
	}
	return (new);
}


Cochon	*_ZN6Cochon3newEv()
{
	Cochon	*self;

	self = alloc();
	_ZN6Cochon4initEv6Cochon(self);
	return (self);
}


void	_ZN6Cochon6deleteEv6Cochon(   Cochon * self)
{
	_ZN6Cochon5cleanEv6Cochon(self);
	free(self);
}

/*
** KOOC - Kind of Objective C for ****
** { dream team 42. } -> Tek3s Strasbourg
*/

#include <stdlib.h>
#include <stdio.h>
#include "kc_Singe.h"
#include "kc_Singe.meta.h"

static Singe	*alloc()
{
	Singe	*new;

	if (!(new = (Singe*)calloc(1, sizeof(*new))))
	{
		fprintf(stderr, "not enough memory\n");
		exit(-1);
	}
	return (new);
}


Singe	*_ZN5Singe3newEviii( signed  int  age,  signed  int  poid,  signed  int  faim)
{
	Singe	*self;

	self = alloc();
	_ZN5Singe4initEv5Singeiii(self, age, poid, faim);
	return (self);
}


void	_ZN5Singe6deleteEv5Singe(   Singe * self)
{
	_ZN5Singe5cleanEv5Singe(self);
	free(self);
}

/*
** KOOC - Kind of Objective C for ****
** { dream team 42. } -> Tek3s Strasbourg
*/

#include <stdlib.h>
#include <stdio.h>
#include "kc_Animal.h"
#include "kc_Animal.meta.h"

static Animal	*alloc()
{
	Animal	*new;

	if (!(new = (Animal*)calloc(1, sizeof(*new))))
	{
		fprintf(stderr, "not enough memory\n");
		exit(-1);
	}
	return (new);
}


Animal	*_ZN6Animal3newEviii( signed  int  age,  signed  int  poid,  signed  int  faim)
{
	Animal	*self;

	self = alloc();
	_ZN6Animal4initEv6Animaliii(self, age, poid, faim);
	return (self);
}

Animal	*_ZN6Animal3newEv()
{
	Animal	*self;

	self = alloc();
	_ZN6Animal4initEv6Animal(self);
	return (self);
}


void	_ZN6Animal6deleteEv6Animal(   Animal * self)
{
	_ZN6Animal5cleanEv6Animal(self);
	free(self);
}

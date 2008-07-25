#include "kc_Animal.h"

  struct _kc_implementation_Animal  _kc_vtable_Animal = 
{
_ZN6Animal5crierEv6Animal
};
   void  _ZN6Animal4initEv6Animaliii(   Animal * self,  signed  int  age,  signed  int  poid,  signed  int  faim) 
{
self->_ZN6Animal3ageEi = age;
self->_ZN6Animal4poidEi = poid;
self->_ZN6Animal4faimEi = faim;
self->vt = (   void *) &_kc_vtable_Animal;

};
   void  _ZN6Animal4initEv6Animal(   Animal * self) 
{
self->_ZN6Animal3ageEi = 1;
self->_ZN6Animal4poidEi = 5;
self->_ZN6Animal4faimEi = 1;
self->vt = (   void *) &_kc_vtable_Animal;

};
   void  _ZN6Animal5crierEv6Animal(   Animal * self) 
{
printf("Je suis fouu..!");

};

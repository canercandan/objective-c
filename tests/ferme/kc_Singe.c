#include "kc_Singe.h"

  struct _kc_implementation_Singe  _kc_vtable_Singe = 
{
_ZN5Singe5crierEv5Singe
};
   void  _ZN5Singe4initEv5Singeiii(   Singe * self,  signed  int  age,  signed  int  poid,  signed  int  faim) 
{
_ZN6Animal4initEv6Animal(self);
self->vt = (   void *) &_kc_vtable_Singe;

};
   void  _ZN5Singe5crierEv5Singe(   Singe * self) 
{
printf("Je suis un singe hihihihanhi !");

};

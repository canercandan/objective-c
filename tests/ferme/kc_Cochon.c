#include "kc_Cochon.h"

  struct _kc_implementation_Cochon  _kc_vtable_Cochon = 
{
_ZN6Cochon5crierEv6Cochon
};
   void  _ZN6Cochon5crierEv6Cochon(   Cochon * self) 
{
printf("Je suis un cochon rRonRonRron !");

};
   void  _ZN6Cochon4initEv6Cochon(   Cochon * self) 
{
self->vt = (   void *) &_kc_vtable_Cochon;

};
   void  _ZN6Cochon5cleanEv6Cochon(   Cochon * self) 
{

};

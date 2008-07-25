#ifndef __kc_Cochon_h__
# define __kc_Cochon_h__

#include "kc_Animal.h"


typedef  struct _kc_interface_Cochon 
{
   void * vt;
} Cochon;
  struct _kc_implementation_Cochon 
{
   void (*_ZN6Animal5crierEv6Animal) (   Animal * self) ;
} ;
   void  _ZN6Cochon5crierEv6Cochon(   Cochon * self) ;
   void  _ZN6Cochon4initEv6Cochon(   Cochon * self) ;
   void  _ZN6Cochon5cleanEv6Cochon(   Cochon * self) ;
#endif /* !__kc_Cochon_h__ */

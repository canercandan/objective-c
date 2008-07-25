#ifndef __kc_Singe_h__
# define __kc_Singe_h__

#include "kc_Animal.h"


typedef  struct _kc_interface_Singe 
{
   void * vt;
} Singe;
  struct _kc_implementation_Singe 
{
   void (*_ZN6Animal5crierEv6Animal) (   Animal * self) ;
} ;
   void  _ZN5Singe4initEv5Singeiii(   Singe * self,  signed  int  age,  signed  int  poid,  signed  int  faim) ;
   void  _ZN5Singe5crierEv5Singe(   Singe * self) ;
#endif /* !__kc_Singe_h__ */

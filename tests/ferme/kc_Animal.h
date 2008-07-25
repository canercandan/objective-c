#ifndef __kc_Animal_h__
# define __kc_Animal_h__


extern signed int _ZN6Animal3ageEi;
extern signed int _ZN6Animal4poidEi;
extern signed int _ZN6Animal4faimEi;

typedef  struct _kc_interface_Animal 
{
   void * vt;
} Animal;
  struct _kc_implementation_Animal 
{
   void (*_ZN6Animal5crierEv6Animal) (   Animal * self) ;
} ;
   void  _ZN6Animal4initEv6Animal(   Animal * self) ;
   void  _ZN6Animal5crierEv6Animal(   Animal * self) ;
#endif /* !__kc_Animal_h__ */

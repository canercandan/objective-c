#ifndef __kc_Nourriture_h__
# define __kc_Nourriture_h__


extern signed int _ZN10Nourriture3qteEi;

typedef  struct _kc_interface_Nourriture 
{
   void * vt;
} Nourriture;
  struct _kc_implementation_Nourriture 
{
} ;
   void  _ZN10Nourriture4initEv10Nourriturei(   Nourriture * self,  signed  int  qte) ;
   void  _ZN10Nourriture14approvisionnerEv10Nourriturei(   Nourriture * self,  signed  int  ) ;
   void  _ZN10Nourriture16servirNourritureEv10Nourriturei(   Nourriture * self,  signed  int  ) ;
#endif /* !__kc_Nourriture_h__ */

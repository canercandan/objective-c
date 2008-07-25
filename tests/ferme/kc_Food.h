#ifndef __kc_Food_h__
# define __kc_Food_h__


extern signed int _ZN4Food3qteEi;

typedef  struct _kc_interface_Food 
{
   void * vt;
} Food;
  struct _kc_implementation_Food 
{
} ;
   void  _ZN4Food4initEv4Foodi(   Food * self,  signed  int  qte) ;
   void  _ZN4Food14approvisionnerEv4Foodi(   Food * self,  signed  int  ) ;
   void  _ZN4Food16servirNourritureEv4Foodi(   Food * self,  signed  int  ) ;
#endif /* !__kc_Food_h__ */

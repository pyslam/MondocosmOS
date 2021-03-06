// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _WOKMake_IndexedMapOfDepItem_HeaderFile
#define _WOKMake_IndexedMapOfDepItem_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _WOKTools_BasicMap_HeaderFile
#include <WOKTools_BasicMap.hxx>
#endif
#ifndef _Handle_WOKMake_DepItem_HeaderFile
#include <Handle_WOKMake_DepItem.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
class Standard_DomainError;
class Standard_OutOfRange;
class WOKMake_DepItem;
class WOKMake_DepItemHasher;



class WOKMake_IndexedMapOfDepItem  : public WOKTools_BasicMap {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  
  Standard_EXPORT   WOKMake_IndexedMapOfDepItem(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT     WOKMake_IndexedMapOfDepItem& Assign(const WOKMake_IndexedMapOfDepItem& Other) ;
    WOKMake_IndexedMapOfDepItem& operator =(const WOKMake_IndexedMapOfDepItem& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void ReSize(const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT     void Clear() ;
~WOKMake_IndexedMapOfDepItem()
{
  Clear();
}
  
  Standard_EXPORT     Standard_Integer Add(const Handle(WOKMake_DepItem)& K) ;
  
  Standard_EXPORT     void Substitute(const Standard_Integer I,const Handle(WOKMake_DepItem)& K) ;
  
  Standard_EXPORT     void RemoveLast() ;
  
  Standard_EXPORT     Standard_Boolean Contains(const Handle(WOKMake_DepItem)& K) const;
  
  Standard_EXPORT    const Handle_WOKMake_DepItem& FindKey(const Standard_Integer I) const;
   const Handle_WOKMake_DepItem& operator ()(const Standard_Integer I) const
{
  return FindKey(I);
}
  
  Standard_EXPORT     Standard_Integer FindIndex(const Handle(WOKMake_DepItem)& K) const;





protected:





private:

  
  Standard_EXPORT   WOKMake_IndexedMapOfDepItem(const WOKMake_IndexedMapOfDepItem& Other);
  
  Standard_EXPORT     Standard_Address FindNodeFromIndex(const Standard_Integer I) const;
  
  Standard_EXPORT     Standard_Address FindNodeFromKey(const Handle(WOKMake_DepItem)& K) const;




};





// other Inline functions and methods (like "C++: function call" methods)


#endif

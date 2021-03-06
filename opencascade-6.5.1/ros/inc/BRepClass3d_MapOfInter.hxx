// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepClass3d_MapOfInter_HeaderFile
#define _BRepClass3d_MapOfInter_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMap_HeaderFile
#include <TCollection_BasicMap.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Handle_BRepClass3d_DataMapNodeOfMapOfInter_HeaderFile
#include <Handle_BRepClass3d_DataMapNodeOfMapOfInter.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_DomainError;
class Standard_NoSuchObject;
class TopoDS_Shape;
class TopTools_ShapeMapHasher;
class BRepClass3d_DataMapNodeOfMapOfInter;
class BRepClass3d_DataMapIteratorOfMapOfInter;



class BRepClass3d_MapOfInter  : public TCollection_BasicMap {
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

  
  Standard_EXPORT   BRepClass3d_MapOfInter(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT     BRepClass3d_MapOfInter& Assign(const BRepClass3d_MapOfInter& Other) ;
    BRepClass3d_MapOfInter& operator =(const BRepClass3d_MapOfInter& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void ReSize(const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT     void Clear() ;
~BRepClass3d_MapOfInter()
{
  Clear();
}
  
  Standard_EXPORT     Standard_Boolean Bind(const TopoDS_Shape& K,const Standard_Address& I) ;
  
  Standard_EXPORT     Standard_Boolean IsBound(const TopoDS_Shape& K) const;
  
  Standard_EXPORT     Standard_Boolean UnBind(const TopoDS_Shape& K) ;
  
  Standard_EXPORT    const Standard_Address& Find(const TopoDS_Shape& K) const;
   const Standard_Address& operator()(const TopoDS_Shape& K) const
{
  return Find(K);
}
  
  Standard_EXPORT     Standard_Address& ChangeFind(const TopoDS_Shape& K) ;
    Standard_Address& operator()(const TopoDS_Shape& K) 
{
  return ChangeFind(K);
}





protected:





private:

  
  Standard_EXPORT   BRepClass3d_MapOfInter(const BRepClass3d_MapOfInter& Other);




};





// other Inline functions and methods (like "C++: function call" methods)


#endif

// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MS_HSequenceOfInstClass_HeaderFile
#define _MS_HSequenceOfInstClass_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_MS_HSequenceOfInstClass_HeaderFile
#include <Handle_MS_HSequenceOfInstClass.hxx>
#endif

#ifndef _MS_SequenceOfInstClass_HeaderFile
#include <MS_SequenceOfInstClass.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Handle_MS_InstClass_HeaderFile
#include <Handle_MS_InstClass.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class MS_InstClass;
class MS_SequenceOfInstClass;



class MS_HSequenceOfInstClass : public MMgt_TShared {

public:

  
      MS_HSequenceOfInstClass();
  
        Standard_Boolean IsEmpty() const;
  
        Standard_Integer Length() const;
  
  Standard_EXPORT     void Clear() ;
  
  Standard_EXPORT     void Append(const Handle(MS_InstClass)& anItem) ;
  
  Standard_EXPORT     void Append(const Handle(MS_HSequenceOfInstClass)& aSequence) ;
  
  Standard_EXPORT     void Prepend(const Handle(MS_InstClass)& anItem) ;
  
  Standard_EXPORT     void Prepend(const Handle(MS_HSequenceOfInstClass)& aSequence) ;
  
  Standard_EXPORT     void Reverse() ;
  
  Standard_EXPORT     void InsertBefore(const Standard_Integer anIndex,const Handle(MS_InstClass)& anItem) ;
  
  Standard_EXPORT     void InsertBefore(const Standard_Integer anIndex,const Handle(MS_HSequenceOfInstClass)& aSequence) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer anIndex,const Handle(MS_InstClass)& anItem) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer anIndex,const Handle(MS_HSequenceOfInstClass)& aSequence) ;
  
  Standard_EXPORT     void Exchange(const Standard_Integer anIndex,const Standard_Integer anOtherIndex) ;
  
  Standard_EXPORT     Handle_MS_HSequenceOfInstClass Split(const Standard_Integer anIndex) ;
  
  Standard_EXPORT     void SetValue(const Standard_Integer anIndex,const Handle(MS_InstClass)& anItem) ;
  
  Standard_EXPORT    const Handle_MS_InstClass& Value(const Standard_Integer anIndex) const;
  
  Standard_EXPORT     Handle_MS_InstClass& ChangeValue(const Standard_Integer anIndex) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer anIndex) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer fromIndex,const Standard_Integer toIndex) ;
  
       const MS_SequenceOfInstClass& Sequence() const;
  
        MS_SequenceOfInstClass& ChangeSequence() ;
  
  Standard_EXPORT     Handle_MS_HSequenceOfInstClass ShallowCopy() const;




  DEFINE_STANDARD_RTTI(MS_HSequenceOfInstClass)

protected:




private: 


MS_SequenceOfInstClass mySequence;


};

#define Item Handle_MS_InstClass
#define Item_hxx <MS_InstClass.hxx>
#define TheSequence MS_SequenceOfInstClass
#define TheSequence_hxx <MS_SequenceOfInstClass.hxx>
#define TCollection_HSequence MS_HSequenceOfInstClass
#define TCollection_HSequence_hxx <MS_HSequenceOfInstClass.hxx>
#define Handle_TCollection_HSequence Handle_MS_HSequenceOfInstClass
#define TCollection_HSequence_Type_() MS_HSequenceOfInstClass_Type_()

#include <TCollection_HSequence.lxx>

#undef Item
#undef Item_hxx
#undef TheSequence
#undef TheSequence_hxx
#undef TCollection_HSequence
#undef TCollection_HSequence_hxx
#undef Handle_TCollection_HSequence
#undef TCollection_HSequence_Type_


// other Inline functions and methods (like "C++: function call" methods)
inline Handle_MS_HSequenceOfInstClass ShallowCopy(const Handle_MS_HSequenceOfInstClass& me) {
 return me->ShallowCopy();
}



#endif
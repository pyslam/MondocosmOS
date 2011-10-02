// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MS_HSequenceOfClass_HeaderFile
#define _MS_HSequenceOfClass_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_MS_HSequenceOfClass_HeaderFile
#include <Handle_MS_HSequenceOfClass.hxx>
#endif

#ifndef _MS_SequenceOfClass_HeaderFile
#include <MS_SequenceOfClass.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Handle_MS_Class_HeaderFile
#include <Handle_MS_Class.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class MS_Class;
class MS_SequenceOfClass;



class MS_HSequenceOfClass : public MMgt_TShared {

public:

  
      MS_HSequenceOfClass();
  
        Standard_Boolean IsEmpty() const;
  
        Standard_Integer Length() const;
  
  Standard_EXPORT     void Clear() ;
  
  Standard_EXPORT     void Append(const Handle(MS_Class)& anItem) ;
  
  Standard_EXPORT     void Append(const Handle(MS_HSequenceOfClass)& aSequence) ;
  
  Standard_EXPORT     void Prepend(const Handle(MS_Class)& anItem) ;
  
  Standard_EXPORT     void Prepend(const Handle(MS_HSequenceOfClass)& aSequence) ;
  
  Standard_EXPORT     void Reverse() ;
  
  Standard_EXPORT     void InsertBefore(const Standard_Integer anIndex,const Handle(MS_Class)& anItem) ;
  
  Standard_EXPORT     void InsertBefore(const Standard_Integer anIndex,const Handle(MS_HSequenceOfClass)& aSequence) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer anIndex,const Handle(MS_Class)& anItem) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer anIndex,const Handle(MS_HSequenceOfClass)& aSequence) ;
  
  Standard_EXPORT     void Exchange(const Standard_Integer anIndex,const Standard_Integer anOtherIndex) ;
  
  Standard_EXPORT     Handle_MS_HSequenceOfClass Split(const Standard_Integer anIndex) ;
  
  Standard_EXPORT     void SetValue(const Standard_Integer anIndex,const Handle(MS_Class)& anItem) ;
  
  Standard_EXPORT    const Handle_MS_Class& Value(const Standard_Integer anIndex) const;
  
  Standard_EXPORT     Handle_MS_Class& ChangeValue(const Standard_Integer anIndex) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer anIndex) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer fromIndex,const Standard_Integer toIndex) ;
  
       const MS_SequenceOfClass& Sequence() const;
  
        MS_SequenceOfClass& ChangeSequence() ;
  
  Standard_EXPORT     Handle_MS_HSequenceOfClass ShallowCopy() const;




  DEFINE_STANDARD_RTTI(MS_HSequenceOfClass)

protected:




private: 


MS_SequenceOfClass mySequence;


};

#define Item Handle_MS_Class
#define Item_hxx <MS_Class.hxx>
#define TheSequence MS_SequenceOfClass
#define TheSequence_hxx <MS_SequenceOfClass.hxx>
#define TCollection_HSequence MS_HSequenceOfClass
#define TCollection_HSequence_hxx <MS_HSequenceOfClass.hxx>
#define Handle_TCollection_HSequence Handle_MS_HSequenceOfClass
#define TCollection_HSequence_Type_() MS_HSequenceOfClass_Type_()

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
inline Handle_MS_HSequenceOfClass ShallowCopy(const Handle_MS_HSequenceOfClass& me) {
 return me->ShallowCopy();
}



#endif
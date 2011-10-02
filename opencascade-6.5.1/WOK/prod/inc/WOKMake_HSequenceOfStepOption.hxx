// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _WOKMake_HSequenceOfStepOption_HeaderFile
#define _WOKMake_HSequenceOfStepOption_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_WOKMake_HSequenceOfStepOption_HeaderFile
#include <Handle_WOKMake_HSequenceOfStepOption.hxx>
#endif

#ifndef _WOKMake_SequenceOfStepOption_HeaderFile
#include <WOKMake_SequenceOfStepOption.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _WOKMake_StepOption_HeaderFile
#include <WOKMake_StepOption.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class WOKMake_SequenceOfStepOption;



class WOKMake_HSequenceOfStepOption : public MMgt_TShared {

public:

  
      WOKMake_HSequenceOfStepOption();
  
        Standard_Boolean IsEmpty() const;
  
        Standard_Integer Length() const;
  
  Standard_EXPORT     void Clear() ;
  
  Standard_EXPORT     void Append(const WOKMake_StepOption& anItem) ;
  
  Standard_EXPORT     void Append(const Handle(WOKMake_HSequenceOfStepOption)& aSequence) ;
  
  Standard_EXPORT     void Prepend(const WOKMake_StepOption& anItem) ;
  
  Standard_EXPORT     void Prepend(const Handle(WOKMake_HSequenceOfStepOption)& aSequence) ;
  
  Standard_EXPORT     void Reverse() ;
  
  Standard_EXPORT     void InsertBefore(const Standard_Integer anIndex,const WOKMake_StepOption& anItem) ;
  
  Standard_EXPORT     void InsertBefore(const Standard_Integer anIndex,const Handle(WOKMake_HSequenceOfStepOption)& aSequence) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer anIndex,const WOKMake_StepOption& anItem) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer anIndex,const Handle(WOKMake_HSequenceOfStepOption)& aSequence) ;
  
  Standard_EXPORT     void Exchange(const Standard_Integer anIndex,const Standard_Integer anOtherIndex) ;
  
  Standard_EXPORT     Handle_WOKMake_HSequenceOfStepOption Split(const Standard_Integer anIndex) ;
  
  Standard_EXPORT     void SetValue(const Standard_Integer anIndex,const WOKMake_StepOption& anItem) ;
  
  Standard_EXPORT    const WOKMake_StepOption& Value(const Standard_Integer anIndex) const;
  
  Standard_EXPORT     WOKMake_StepOption& ChangeValue(const Standard_Integer anIndex) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer anIndex) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer fromIndex,const Standard_Integer toIndex) ;
  
       const WOKMake_SequenceOfStepOption& Sequence() const;
  
        WOKMake_SequenceOfStepOption& ChangeSequence() ;
  
  Standard_EXPORT     Handle_WOKMake_HSequenceOfStepOption ShallowCopy() const;




  DEFINE_STANDARD_RTTI(WOKMake_HSequenceOfStepOption)

protected:




private: 


WOKMake_SequenceOfStepOption mySequence;


};

#define Item WOKMake_StepOption
#define Item_hxx <WOKMake_StepOption.hxx>
#define TheSequence WOKMake_SequenceOfStepOption
#define TheSequence_hxx <WOKMake_SequenceOfStepOption.hxx>
#define TCollection_HSequence WOKMake_HSequenceOfStepOption
#define TCollection_HSequence_hxx <WOKMake_HSequenceOfStepOption.hxx>
#define Handle_TCollection_HSequence Handle_WOKMake_HSequenceOfStepOption
#define TCollection_HSequence_Type_() WOKMake_HSequenceOfStepOption_Type_()

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
inline Handle_WOKMake_HSequenceOfStepOption ShallowCopy(const Handle_WOKMake_HSequenceOfStepOption& me) {
 return me->ShallowCopy();
}



#endif
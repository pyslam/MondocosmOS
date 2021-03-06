// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MS_SequenceNodeOfSequenceOfMethod_HeaderFile
#define _MS_SequenceNodeOfSequenceOfMethod_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_MS_SequenceNodeOfSequenceOfMethod_HeaderFile
#include <Handle_MS_SequenceNodeOfSequenceOfMethod.hxx>
#endif

#ifndef _Handle_MS_Method_HeaderFile
#include <Handle_MS_Method.hxx>
#endif
#ifndef _TCollection_SeqNode_HeaderFile
#include <TCollection_SeqNode.hxx>
#endif
#ifndef _TCollection_SeqNodePtr_HeaderFile
#include <TCollection_SeqNodePtr.hxx>
#endif
class MS_Method;
class MS_SequenceOfMethod;



class MS_SequenceNodeOfSequenceOfMethod : public TCollection_SeqNode {

public:

  
      MS_SequenceNodeOfSequenceOfMethod(const Handle(MS_Method)& I,const TCollection_SeqNodePtr& n,const TCollection_SeqNodePtr& p);
  
        Handle_MS_Method& Value() const;




  DEFINE_STANDARD_RTTI(MS_SequenceNodeOfSequenceOfMethod)

protected:




private: 


Handle_MS_Method myValue;


};

#define SeqItem Handle_MS_Method
#define SeqItem_hxx <MS_Method.hxx>
#define TCollection_SequenceNode MS_SequenceNodeOfSequenceOfMethod
#define TCollection_SequenceNode_hxx <MS_SequenceNodeOfSequenceOfMethod.hxx>
#define Handle_TCollection_SequenceNode Handle_MS_SequenceNodeOfSequenceOfMethod
#define TCollection_SequenceNode_Type_() MS_SequenceNodeOfSequenceOfMethod_Type_()
#define TCollection_Sequence MS_SequenceOfMethod
#define TCollection_Sequence_hxx <MS_SequenceOfMethod.hxx>

#include <TCollection_SequenceNode.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif

// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _WOKBuilder_MSTranslatorIterator_HeaderFile
#define _WOKBuilder_MSTranslatorIterator_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_WOKBuilder_MSchema_HeaderFile
#include <Handle_WOKBuilder_MSchema.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _WOKBuilder_QueueOfMSAction_HeaderFile
#include <WOKBuilder_QueueOfMSAction.hxx>
#endif
#ifndef _Handle_WOKBuilder_MSAction_HeaderFile
#include <Handle_WOKBuilder_MSAction.hxx>
#endif
#ifndef _WOKBuilder_DataMapOfMSActionIDOfMSAction_HeaderFile
#include <WOKBuilder_DataMapOfMSActionIDOfMSAction.hxx>
#endif
#ifndef _WOKBuilder_MSActionType_HeaderFile
#include <WOKBuilder_MSActionType.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _WOKBuilder_BuildStatus_HeaderFile
#include <WOKBuilder_BuildStatus.hxx>
#endif
#ifndef _Handle_WOKBuilder_MSTranslator_HeaderFile
#include <Handle_WOKBuilder_MSTranslator.hxx>
#endif
#ifndef _Handle_WOKBuilder_Specification_HeaderFile
#include <Handle_WOKBuilder_Specification.hxx>
#endif
class WOKBuilder_MSchema;
class TCollection_HAsciiString;
class WOKBuilder_MSAction;
class WOKBuilder_MSActionID;
class WOKBuilder_MSTranslator;
class WOKBuilder_Specification;


//! Iterates on CDL files To Complete definition of a specification <br>
class WOKBuilder_MSTranslatorIterator  {
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

  //! instantiates Iterator <br>
  Standard_EXPORT   WOKBuilder_MSTranslatorIterator(const Handle(WOKBuilder_MSchema)& ams,const WOKBuilder_MSActionID& anaction);
  //! instantiates Iterator <br>
  Standard_EXPORT   WOKBuilder_MSTranslatorIterator(const Handle(WOKBuilder_MSchema)& ams);
  
  Standard_EXPORT     void Reset() ;
  //! returns the current MSEntity to complete <br>
//!          even if it is already in MS (to check its validity <br>
//!          outside of Iterator <br>
  Standard_EXPORT    const Handle_WOKBuilder_MSAction& Value() ;
  
  Standard_EXPORT    const Handle_WOKBuilder_MSAction& GetMSAction(const Handle(TCollection_HAsciiString)& aname,const WOKBuilder_MSActionType action) ;
  
  Standard_EXPORT     void EquivActionStacked(const Handle(TCollection_HAsciiString)& aname,const WOKBuilder_MSActionType action) ;
  
  Standard_EXPORT     void AddInStack(const Handle(TCollection_HAsciiString)& aname,const WOKBuilder_MSActionType action) ;
  
  Standard_EXPORT     Standard_Boolean IsInStack(const Handle(TCollection_HAsciiString)& aname,const WOKBuilder_MSActionType action) const;
  
  Standard_EXPORT     WOKBuilder_BuildStatus Execute(const Handle(WOKBuilder_MSTranslator)& atranslator,const Handle(WOKBuilder_MSAction)& anaction,const Handle(WOKBuilder_Specification)& afile) ;
  
  Standard_EXPORT     void Next() ;
  
  Standard_EXPORT     Standard_Boolean More() const;





protected:





private:



Handle_WOKBuilder_MSchema myms;
Handle_TCollection_HAsciiString mytarget;
WOKBuilder_QueueOfMSAction myglobal;
WOKBuilder_QueueOfMSAction myinsttypes;
WOKBuilder_QueueOfMSAction mygentypes;
WOKBuilder_QueueOfMSAction mygetypes;
WOKBuilder_QueueOfMSAction mytypes;
Handle_WOKBuilder_MSAction mycurrent;
WOKBuilder_DataMapOfMSActionIDOfMSAction mystack;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
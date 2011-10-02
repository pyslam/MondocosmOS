// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _WOKBuilder_MSExtractorIterator_HeaderFile
#define _WOKBuilder_MSExtractorIterator_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_WOKBuilder_MSchema_HeaderFile
#include <Handle_WOKBuilder_MSchema.hxx>
#endif
#ifndef _Handle_WOKBuilder_MSExtractor_HeaderFile
#include <Handle_WOKBuilder_MSExtractor.hxx>
#endif
#ifndef _Handle_WOKBuilder_HSequenceOfEntity_HeaderFile
#include <Handle_WOKBuilder_HSequenceOfEntity.hxx>
#endif
#ifndef _WOKBuilder_BuildStatus_HeaderFile
#include <WOKBuilder_BuildStatus.hxx>
#endif
#ifndef _Handle_WOKBuilder_MSEntity_HeaderFile
#include <Handle_WOKBuilder_MSEntity.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
class WOKBuilder_MSchema;
class WOKBuilder_MSExtractor;
class WOKBuilder_HSequenceOfEntity;
class WOKBuilder_MSEntity;


//! Manages Extraction of a MSEntity <br>
class WOKBuilder_MSExtractorIterator  {
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

  
  Standard_EXPORT   WOKBuilder_MSExtractorIterator(const Handle(WOKBuilder_MSchema)& ams,const Handle(WOKBuilder_MSExtractor)& anext);
  
  Standard_EXPORT     WOKBuilder_BuildStatus Execute(const Handle(WOKBuilder_MSEntity)& anentity) ;
  
  Standard_EXPORT     WOKBuilder_BuildStatus Execute(const Handle(WOKBuilder_MSEntity)& anentity,const Standard_CString amode) ;
  
  Standard_EXPORT     Handle_WOKBuilder_HSequenceOfEntity Produces() const;





protected:





private:



Handle_WOKBuilder_MSchema mymeta;
Handle_WOKBuilder_MSExtractor myextractor;
Handle_WOKBuilder_HSequenceOfEntity myproduction;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
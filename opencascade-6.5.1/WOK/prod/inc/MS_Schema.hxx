// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MS_Schema_HeaderFile
#define _MS_Schema_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_MS_Schema_HeaderFile
#include <Handle_MS_Schema.hxx>
#endif

#ifndef _Handle_TColStd_HSequenceOfHAsciiString_HeaderFile
#include <Handle_TColStd_HSequenceOfHAsciiString.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _MS_GlobalEntity_HeaderFile
#include <MS_GlobalEntity.hxx>
#endif
class TColStd_HSequenceOfHAsciiString;
class TCollection_HAsciiString;



class MS_Schema : public MS_GlobalEntity {

public:

  
  Standard_EXPORT   MS_Schema(const Handle(TCollection_HAsciiString)& aSchema);
  
  Standard_EXPORT     void Package(const Handle(TCollection_HAsciiString)& aPackage) ;
  
  Standard_EXPORT     Handle_TColStd_HSequenceOfHAsciiString GetPackages() const;
  
  Standard_EXPORT     void Class(const Handle(TCollection_HAsciiString)& aClass) ;
  
  Standard_EXPORT     Handle_TColStd_HSequenceOfHAsciiString GetClasses() const;
  
  Standard_EXPORT     Handle_TCollection_HAsciiString Comment() const;
  
  Standard_EXPORT     void SetComment(const Handle(TCollection_HAsciiString)& aComment) ;




  DEFINE_STANDARD_RTTI(MS_Schema)

protected:




private: 


Handle_TColStd_HSequenceOfHAsciiString myPackages;
Handle_TColStd_HSequenceOfHAsciiString myClasses;
Handle_TCollection_HAsciiString mySchemaComment;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _WOKOrbix_IDLCompiler_HeaderFile
#define _WOKOrbix_IDLCompiler_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_WOKOrbix_IDLCompiler_HeaderFile
#include <Handle_WOKOrbix_IDLCompiler.hxx>
#endif

#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _Handle_WOKOrbix_IDLFile_HeaderFile
#include <Handle_WOKOrbix_IDLFile.hxx>
#endif
#ifndef _Handle_WOKUtils_HSequenceOfPath_HeaderFile
#include <Handle_WOKUtils_HSequenceOfPath.hxx>
#endif
#ifndef _WOKBuilder_ToolInShell_HeaderFile
#include <WOKBuilder_ToolInShell.hxx>
#endif
#ifndef _WOKBuilder_BuildStatus_HeaderFile
#include <WOKBuilder_BuildStatus.hxx>
#endif
class TCollection_HAsciiString;
class WOKOrbix_IDLFile;
class WOKUtils_HSequenceOfPath;
class Standard_ProgramError;
class WOKUtils_Param;


//! Compilers Management <br>
class WOKOrbix_IDLCompiler : public WOKBuilder_ToolInShell {

public:

  
  Standard_EXPORT   WOKOrbix_IDLCompiler(const Handle(TCollection_HAsciiString)& aname,const WOKUtils_Param& params);
  
  Standard_EXPORT     Handle_WOKUtils_HSequenceOfPath IncludeDirectories() const;
  
  Standard_EXPORT     void SetIncludeDirectories(const Handle(WOKUtils_HSequenceOfPath)& incdirs) ;
  
  Standard_EXPORT     Handle_WOKOrbix_IDLFile IDLFile() const;
  
  Standard_EXPORT     void SetIDLFile(const Handle(WOKOrbix_IDLFile)& afile) ;
  
  Standard_EXPORT     WOKBuilder_BuildStatus Execute() ;




  DEFINE_STANDARD_RTTI(WOKOrbix_IDLCompiler)

protected:




private: 


Handle_TCollection_HAsciiString myname;
Handle_WOKOrbix_IDLFile mysource;
Handle_WOKUtils_HSequenceOfPath myincdirs;
Handle_TCollection_HAsciiString myoptions;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
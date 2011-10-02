// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _WOKUnix_ProcessOutput_HeaderFile
#define _WOKUnix_ProcessOutput_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_WOKUnix_ProcessOutput_HeaderFile
#include <Handle_WOKUnix_ProcessOutput.hxx>
#endif

#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Handle_TColStd_HSequenceOfHAsciiString_HeaderFile
#include <Handle_TColStd_HSequenceOfHAsciiString.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _WOKUnix_Timeval_HeaderFile
#include <WOKUnix_Timeval.hxx>
#endif
#ifndef _WOKUnix_FDSet_HeaderFile
#include <WOKUnix_FDSet.hxx>
#endif
class TColStd_HSequenceOfHAsciiString;



class WOKUnix_ProcessOutput : public MMgt_TShared {

public:

  
  Standard_EXPORT   virtual  void Clear() const = 0;
  
  Standard_EXPORT   virtual  Handle_TColStd_HSequenceOfHAsciiString Echo() const = 0;
  
  Standard_EXPORT   virtual  Handle_TColStd_HSequenceOfHAsciiString Errors() const = 0;
  
  Standard_EXPORT   virtual  void Select(Standard_Integer& afdmax,WOKUnix_Timeval& atimeout,WOKUnix_FDSet& aset) const = 0;
  
  Standard_EXPORT   virtual  void Acquit(const Standard_Integer selectstatus,const WOKUnix_FDSet& aset) const = 0;
  
  Standard_EXPORT   virtual  void Close()  = 0;




  DEFINE_STANDARD_RTTI(WOKUnix_ProcessOutput)

protected:

  
  Standard_EXPORT   WOKUnix_ProcessOutput();



private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
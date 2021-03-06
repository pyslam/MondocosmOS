// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _WOKNT_OutErrOutput_HeaderFile
#define _WOKNT_OutErrOutput_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_TColStd_HSequenceOfHAsciiString_HeaderFile
#include <Handle_TColStd_HSequenceOfHAsciiString.hxx>
#endif
#ifndef _WOKNT_MixedOutput_HeaderFile
#include <WOKNT_MixedOutput.hxx>
#endif
class TColStd_HSequenceOfHAsciiString;


//! manages output of sub-process ( creates a pipe ). <br>
//!          Standard output stream and standard error stream are MIXED. <br>
class WOKNT_OutErrOutput  : public WOKNT_MixedOutput {
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

  //! creates a class instance <br>
  Standard_EXPORT   WOKNT_OutErrOutput();
  //! closes read end of the 'STDERR' handle <br>
  Standard_EXPORT     void Cleanup() ;
~WOKNT_OutErrOutput()
{
  Cleanup();
}
  //! creates a pipe for reading a standard error output of sub-process <br>
//!          and returns a pipe handle <br>
//!  Warning: returns INVALID_HANDLE_VALUE in case of failure <br>
  Standard_EXPORT     Standard_Integer OpenStdErr() ;
  //! closes write end of the 'STDERR' pipe <br>
  Standard_EXPORT     void CloseStdErr() ;
  //! clears output buffer of sub-process <br>
  Standard_EXPORT     void Clear() ;
  //! returns standard error output of sub-process <br>
//!  Warning: returns NULL object if there is nothing to read <br>
  Standard_EXPORT     Handle_TColStd_HSequenceOfHAsciiString Errors() ;
  //! waits for sub-process termination ( until the write end of pipe <br>
//!          will be closed ). <br>
//!  Warning: write end of pipe MUST BE CLOSED by parent process immediately <br>
//!          after creation of the child process else this method will <br>
//!          NEVER return. Use ONLY 'CloseStdErr' method for this purpose. <br>
  Standard_EXPORT     Handle_TColStd_HSequenceOfHAsciiString SyncStdErr() ;





protected:





private:



Standard_Integer myErrHandleR;
Standard_Integer myErrHandleW;
Handle_TColStd_HSequenceOfHAsciiString myStdErr;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif

// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _WOKUtils_MapIteratorOfMapOfPath_HeaderFile
#define _WOKUtils_MapIteratorOfMapOfPath_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _WOKTools_BasicMapIterator_HeaderFile
#include <WOKTools_BasicMapIterator.hxx>
#endif
#ifndef _Handle_WOKUtils_Path_HeaderFile
#include <Handle_WOKUtils_Path.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class WOKUtils_Path;
class WOKUtils_PathHasher;
class WOKUtils_MapOfPath;



class WOKUtils_MapIteratorOfMapOfPath  : public WOKTools_BasicMapIterator {
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

  
  Standard_EXPORT   WOKUtils_MapIteratorOfMapOfPath();
  
  Standard_EXPORT   WOKUtils_MapIteratorOfMapOfPath(const WOKUtils_MapOfPath& aMap);
  
  Standard_EXPORT     void Initialize(const WOKUtils_MapOfPath& aMap) ;
  
  Standard_EXPORT    const Handle_WOKUtils_Path& Key() const;
  
  Standard_EXPORT     Standard_Integer Hashcode() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
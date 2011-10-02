// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _EDL_DataMapIteratorOfMapOfVariable_HeaderFile
#define _EDL_DataMapIteratorOfMapOfVariable_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMapIterator_HeaderFile
#include <TCollection_BasicMapIterator.hxx>
#endif
#ifndef _Handle_EDL_DataMapNodeOfMapOfVariable_HeaderFile
#include <Handle_EDL_DataMapNodeOfMapOfVariable.hxx>
#endif
class Standard_NoSuchObject;
class TCollection_AsciiString;
class EDL_Variable;
class EDL_MapOfVariable;
class EDL_DataMapNodeOfMapOfVariable;



class EDL_DataMapIteratorOfMapOfVariable  : public TCollection_BasicMapIterator {
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

  
  Standard_EXPORT   EDL_DataMapIteratorOfMapOfVariable();
  
  Standard_EXPORT   EDL_DataMapIteratorOfMapOfVariable(const EDL_MapOfVariable& aMap);
  
  Standard_EXPORT     void Initialize(const EDL_MapOfVariable& aMap) ;
  
  Standard_EXPORT    const TCollection_AsciiString& Key() const;
  
  Standard_EXPORT    const EDL_Variable& Value() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
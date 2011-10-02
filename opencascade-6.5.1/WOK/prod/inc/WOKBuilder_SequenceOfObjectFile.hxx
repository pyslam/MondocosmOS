// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _WOKBuilder_SequenceOfObjectFile_HeaderFile
#define _WOKBuilder_SequenceOfObjectFile_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BaseSequence_HeaderFile
#include <TCollection_BaseSequence.hxx>
#endif
#ifndef _Handle_WOKBuilder_ObjectFile_HeaderFile
#include <Handle_WOKBuilder_ObjectFile.hxx>
#endif
#ifndef _Handle_WOKBuilder_SequenceNodeOfSequenceOfObjectFile_HeaderFile
#include <Handle_WOKBuilder_SequenceNodeOfSequenceOfObjectFile.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class WOKBuilder_ObjectFile;
class WOKBuilder_SequenceNodeOfSequenceOfObjectFile;



class WOKBuilder_SequenceOfObjectFile  : public TCollection_BaseSequence {
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

  
      WOKBuilder_SequenceOfObjectFile();
  
  Standard_EXPORT     void Clear() ;
~WOKBuilder_SequenceOfObjectFile()
{
  Clear();
}
  
  Standard_EXPORT    const WOKBuilder_SequenceOfObjectFile& Assign(const WOKBuilder_SequenceOfObjectFile& Other) ;
   const WOKBuilder_SequenceOfObjectFile& operator =(const WOKBuilder_SequenceOfObjectFile& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void Append(const Handle(WOKBuilder_ObjectFile)& T) ;
  
        void Append(WOKBuilder_SequenceOfObjectFile& S) ;
  
  Standard_EXPORT     void Prepend(const Handle(WOKBuilder_ObjectFile)& T) ;
  
        void Prepend(WOKBuilder_SequenceOfObjectFile& S) ;
  
        void InsertBefore(const Standard_Integer Index,const Handle(WOKBuilder_ObjectFile)& T) ;
  
        void InsertBefore(const Standard_Integer Index,WOKBuilder_SequenceOfObjectFile& S) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer Index,const Handle(WOKBuilder_ObjectFile)& T) ;
  
        void InsertAfter(const Standard_Integer Index,WOKBuilder_SequenceOfObjectFile& S) ;
  
  Standard_EXPORT    const Handle_WOKBuilder_ObjectFile& First() const;
  
  Standard_EXPORT    const Handle_WOKBuilder_ObjectFile& Last() const;
  
        void Split(const Standard_Integer Index,WOKBuilder_SequenceOfObjectFile& Sub) ;
  
  Standard_EXPORT    const Handle_WOKBuilder_ObjectFile& Value(const Standard_Integer Index) const;
   const Handle_WOKBuilder_ObjectFile& operator()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const Handle(WOKBuilder_ObjectFile)& I) ;
  
  Standard_EXPORT     Handle_WOKBuilder_ObjectFile& ChangeValue(const Standard_Integer Index) ;
    Handle_WOKBuilder_ObjectFile& operator()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT     void Remove(const Standard_Integer Index) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;





protected:





private:

  
  Standard_EXPORT   WOKBuilder_SequenceOfObjectFile(const WOKBuilder_SequenceOfObjectFile& Other);




};

#define SeqItem Handle_WOKBuilder_ObjectFile
#define SeqItem_hxx <WOKBuilder_ObjectFile.hxx>
#define TCollection_SequenceNode WOKBuilder_SequenceNodeOfSequenceOfObjectFile
#define TCollection_SequenceNode_hxx <WOKBuilder_SequenceNodeOfSequenceOfObjectFile.hxx>
#define Handle_TCollection_SequenceNode Handle_WOKBuilder_SequenceNodeOfSequenceOfObjectFile
#define TCollection_SequenceNode_Type_() WOKBuilder_SequenceNodeOfSequenceOfObjectFile_Type_()
#define TCollection_Sequence WOKBuilder_SequenceOfObjectFile
#define TCollection_Sequence_hxx <WOKBuilder_SequenceOfObjectFile.hxx>

#include <TCollection_Sequence.lxx>

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
// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColStd_Array1OfAsciiString_HeaderFile
#define _TColStd_Array1OfAsciiString_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Integer.hxx>
#include <Standard_Address.hxx>
#include <Standard_Boolean.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class TCollection_AsciiString;



class TColStd_Array1OfAsciiString 
{
public:

  DEFINE_STANDARD_ALLOC

  
    TColStd_Array1OfAsciiString(const Standard_Integer Low, const Standard_Integer Up);
  
    TColStd_Array1OfAsciiString(const TCollection_AsciiString& Item, const Standard_Integer Low, const Standard_Integer Up);
  
  Standard_EXPORT   void Init (const TCollection_AsciiString& V) ;
  
      void Destroy() ;
~TColStd_Array1OfAsciiString()
{
  Destroy();
}
  
      Standard_Boolean IsAllocated()  const;
  
  Standard_EXPORT  const  TColStd_Array1OfAsciiString& Assign (const TColStd_Array1OfAsciiString& Other) ;
 const  TColStd_Array1OfAsciiString& operator = (const TColStd_Array1OfAsciiString& Other) 
{
  return Assign(Other);
}
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const TCollection_AsciiString& Value) ;
  
     const  TCollection_AsciiString& Value (const Standard_Integer Index)  const;
   const  TCollection_AsciiString& operator () (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
      TCollection_AsciiString& ChangeValue (const Standard_Integer Index) ;
    TCollection_AsciiString& operator () (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}




protected:





private:

  
  Standard_EXPORT TColStd_Array1OfAsciiString(const TColStd_Array1OfAsciiString& AnArray);


  Standard_Integer myLowerBound;
  Standard_Integer myUpperBound;
  Standard_Address myStart;
  Standard_Boolean isAllocated;


};

#define Array1Item TCollection_AsciiString
#define Array1Item_hxx <TCollection_AsciiString.hxx>
#define TCollection_Array1 TColStd_Array1OfAsciiString
#define TCollection_Array1_hxx <TColStd_Array1OfAsciiString.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx




#endif // _TColStd_Array1OfAsciiString_HeaderFile

// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopTools_DataMapOfShapeInteger_HeaderFile
#define _TopTools_DataMapOfShapeInteger_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TCollection_BasicMap.hxx>
#include <Standard_Integer.hxx>
#include <Handle_TopTools_DataMapNodeOfDataMapOfShapeInteger.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Address.hxx>
class Standard_DomainError;
class Standard_NoSuchObject;
class TopoDS_Shape;
class TopTools_ShapeMapHasher;
class TopTools_DataMapNodeOfDataMapOfShapeInteger;
class TopTools_DataMapIteratorOfDataMapOfShapeInteger;



class TopTools_DataMapOfShapeInteger  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TopTools_DataMapOfShapeInteger(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT   TopTools_DataMapOfShapeInteger& Assign (const TopTools_DataMapOfShapeInteger& Other) ;
  TopTools_DataMapOfShapeInteger& operator = (const TopTools_DataMapOfShapeInteger& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~TopTools_DataMapOfShapeInteger()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Boolean Bind (const TopoDS_Shape& K, const Standard_Integer& I) ;
  
  Standard_EXPORT   Standard_Boolean IsBound (const TopoDS_Shape& K)  const;
  
  Standard_EXPORT   Standard_Boolean UnBind (const TopoDS_Shape& K) ;
  
  Standard_EXPORT  const  Standard_Integer& Find (const TopoDS_Shape& K)  const;
 const  Standard_Integer& operator() (const TopoDS_Shape& K)  const
{
  return Find(K);
}
  
  Standard_EXPORT   Standard_Integer& ChangeFind (const TopoDS_Shape& K) ;
  Standard_Integer& operator() (const TopoDS_Shape& K) 
{
  return ChangeFind(K);
}
  
  Standard_EXPORT   Standard_Address Find1 (const TopoDS_Shape& K)  const;
  
  Standard_EXPORT   Standard_Address ChangeFind1 (const TopoDS_Shape& K) ;




protected:





private:

  
  Standard_EXPORT TopTools_DataMapOfShapeInteger(const TopTools_DataMapOfShapeInteger& Other);




};







#endif // _TopTools_DataMapOfShapeInteger_HeaderFile

// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _DNaming_DataMapOfShapeOfName_HeaderFile
#define _DNaming_DataMapOfShapeOfName_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TCollection_BasicMap.hxx>
#include <Handle_DNaming_DataMapNodeOfDataMapOfShapeOfName.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Address.hxx>
class Standard_DomainError;
class Standard_NoSuchObject;
class TopoDS_Shape;
class TCollection_AsciiString;
class TopTools_ShapeMapHasher;
class DNaming_DataMapNodeOfDataMapOfShapeOfName;
class DNaming_DataMapIteratorOfDataMapOfShapeOfName;



class DNaming_DataMapOfShapeOfName  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT DNaming_DataMapOfShapeOfName(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT   DNaming_DataMapOfShapeOfName& Assign (const DNaming_DataMapOfShapeOfName& Other) ;
  DNaming_DataMapOfShapeOfName& operator = (const DNaming_DataMapOfShapeOfName& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~DNaming_DataMapOfShapeOfName()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Boolean Bind (const TopoDS_Shape& K, const TCollection_AsciiString& I) ;
  
  Standard_EXPORT   Standard_Boolean IsBound (const TopoDS_Shape& K)  const;
  
  Standard_EXPORT   Standard_Boolean UnBind (const TopoDS_Shape& K) ;
  
  Standard_EXPORT  const  TCollection_AsciiString& Find (const TopoDS_Shape& K)  const;
 const  TCollection_AsciiString& operator() (const TopoDS_Shape& K)  const
{
  return Find(K);
}
  
  Standard_EXPORT   TCollection_AsciiString& ChangeFind (const TopoDS_Shape& K) ;
  TCollection_AsciiString& operator() (const TopoDS_Shape& K) 
{
  return ChangeFind(K);
}
  
  Standard_EXPORT   Standard_Address Find1 (const TopoDS_Shape& K)  const;
  
  Standard_EXPORT   Standard_Address ChangeFind1 (const TopoDS_Shape& K) ;




protected:





private:

  
  Standard_EXPORT DNaming_DataMapOfShapeOfName(const DNaming_DataMapOfShapeOfName& Other);




};







#endif // _DNaming_DataMapOfShapeOfName_HeaderFile

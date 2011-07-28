// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Vrml_WWWAnchor_HeaderFile
#define _Vrml_WWWAnchor_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_AsciiString_HeaderFile
#include <TCollection_AsciiString.hxx>
#endif
#ifndef _Vrml_WWWAnchorMap_HeaderFile
#include <Vrml_WWWAnchorMap.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
class TCollection_AsciiString;


//! defines a WWWAnchor node of VRML specifying group properties. <br>
//!  The  WWWAnchor  group  node  loads  a  new  scene  into  a  VRML  browser <br>
//!  when  one  of  its  children  is  closen.  Exactly  how  a  user  "chooses" <br>
//!  a  child  of  the  WWWAnchor  is  up  to  the  VRML browser. <br>
//!  WWWAnchor  with  an  empty  ("")  name  does  nothing  when  its <br>
//!  children  are  chosen. <br>
//!  WWWAnchor  behaves  like  a  Separator,  pushing  the  traversal  state <br>
//!  before  traversing  its  children  and  popping  it  afterwards. <br>
class Vrml_WWWAnchor  {
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

  
  Standard_EXPORT   Vrml_WWWAnchor(const TCollection_AsciiString& aName = "",const TCollection_AsciiString& aDescription = "",const Vrml_WWWAnchorMap aMap = Vrml_MAP_NONE);
  
  Standard_EXPORT     void SetName(const TCollection_AsciiString& aName) ;
  
  Standard_EXPORT     TCollection_AsciiString Name() const;
  
  Standard_EXPORT     void SetDescription(const TCollection_AsciiString& aDescription) ;
  
  Standard_EXPORT     TCollection_AsciiString Description() const;
  
  Standard_EXPORT     void SetMap(const Vrml_WWWAnchorMap aMap) ;
  
  Standard_EXPORT     Vrml_WWWAnchorMap Map() const;
  
  Standard_EXPORT     Standard_OStream& Print(Standard_OStream& anOStream) const;





protected:





private:



TCollection_AsciiString myName;
TCollection_AsciiString myDescription;
Vrml_WWWAnchorMap myMap;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
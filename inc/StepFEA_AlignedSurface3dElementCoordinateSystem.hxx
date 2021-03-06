// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepFEA_AlignedSurface3dElementCoordinateSystem_HeaderFile
#define _StepFEA_AlignedSurface3dElementCoordinateSystem_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepFEA_AlignedSurface3dElementCoordinateSystem.hxx>

#include <Handle_StepFEA_FeaAxis2Placement3d.hxx>
#include <StepFEA_FeaRepresentationItem.hxx>
#include <Handle_TCollection_HAsciiString.hxx>
class StepFEA_FeaAxis2Placement3d;
class TCollection_HAsciiString;


//! Representation of STEP entity AlignedSurface3dElementCoordinateSystem
class StepFEA_AlignedSurface3dElementCoordinateSystem : public StepFEA_FeaRepresentationItem
{

public:

  
  //! Empty constructor
  Standard_EXPORT StepFEA_AlignedSurface3dElementCoordinateSystem();
  
  //! Initialize all fields (own and inherited)
  Standard_EXPORT   void Init (const Handle(TCollection_HAsciiString)& aRepresentationItem_Name, const Handle(StepFEA_FeaAxis2Placement3d)& aCoordinateSystem) ;
  
  //! Returns field CoordinateSystem
  Standard_EXPORT   Handle(StepFEA_FeaAxis2Placement3d) CoordinateSystem()  const;
  
  //! Set field CoordinateSystem
  Standard_EXPORT   void SetCoordinateSystem (const Handle(StepFEA_FeaAxis2Placement3d)& CoordinateSystem) ;




  DEFINE_STANDARD_RTTI(StepFEA_AlignedSurface3dElementCoordinateSystem)

protected:




private: 


  Handle(StepFEA_FeaAxis2Placement3d) theCoordinateSystem;


};







#endif // _StepFEA_AlignedSurface3dElementCoordinateSystem_HeaderFile

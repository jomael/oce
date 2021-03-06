// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopAbs_Orientation_HeaderFile
#define _TopAbs_Orientation_HeaderFile

#include <Standard_PrimitiveTypes.hxx>

//! Identifies the orientation of a topological shape.
//! Orientation can represent a relation between two
//! entities, or it can apply to a shape in its own right.
//! When used to describe a relation between two
//! shapes, orientation allows you to use the underlying
//! entity in either direction. For example on a curve
//! which is oriented FORWARD (say from left to right)
//! you can have both a FORWARD and a REVERSED
//! edge. The FORWARD edge will be oriented from
//! left to right, and the REVERSED edge from right to
//! left. In this way, you share the underlying entity. In
//! other words, two faces of a cube can share an
//! edge, and can also be used to build compound shapes.
//! For each case in which an element is used as the
//! boundary of a geometric domain of a higher
//! dimension, this element defines two local regions of
//! which one is arbitrarily considered as the default
//! region. A change in orientation implies a switch of
//! default region. This allows you to apply changes of
//! orientation to the shape as a whole.
enum TopAbs_Orientation
{
TopAbs_FORWARD,
TopAbs_REVERSED,
TopAbs_INTERNAL,
TopAbs_EXTERNAL
};

#endif // _TopAbs_Orientation_HeaderFile

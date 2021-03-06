/***********************************************************
*									     GLE32 Extrusion Library							*
*							Copyrightę 2000 - 2017 by Dave Richards	 			*
*										  All Rights Reserved.							*
*												Ver 6.0									*
*																				       		*
*											HISTORY:										*
*									Linas Vepstas 1990 - 1997							*
*									Dave Richards  2000 - 2017						*
*																							*
************************************************************/


#pragma once


//----------------------------------------------------------------------------
class   CgleTwistedIBeam : protected CgleTwistExtrusion
{

public:

	CgleTwistedIBeam(int Points, double Radius);
	~CgleTwistedIBeam();



	using CgleTwistExtrusion::UseLitMaterial;
	using CgleTwistExtrusion::IsUsingLitMaterial;

	using CgleTwistExtrusion::LoadUpVector;



	void  Draw(double Point_Array[][3], float Color_Array[][3],
		double Twist_Array[], bool bTextured = false);


	void  WireDraw(double Point_Array[][3], float Color_Array[][3],
		double Twist_Array[], bool bTextured = false);
};
//----------------------------------------------------------------------------

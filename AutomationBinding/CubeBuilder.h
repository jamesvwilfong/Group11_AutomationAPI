#pragma once
#include "AutomationBindingExports.h"
#include "IBuilder.h"

namespace AutomationAPI
{
	class CADObject;


	/// <summary>
	/// CubeBuilder comment
	/// </summary>
	class AUTOMATIONBINDING_API CubeBuilder : public IBuilder
	{
	public:
		enum CubeBuilderTypes
		{
			TypesOriginAndEdgeLengths, /**Represents the cube created by providing Originand Edge Lengths. */
			TypesTwoPointsAndHeight, /**Represents the cube created by providing Two Pointsand Height.*/
			TypesDiagonalPoints /**Represents the cube created by providing Diagonal Points. */
		};

		void SetType(CubeBuilderTypes type);
		CubeBuilderTypes GetType();

		void SetHeight(int h);
		int GetHeight();
		void SetWidth(int w);
		int GetWidth();
		void SetDepth(int d);
		int GetDepth();
		void SetOrigin(int x, int y, int z);
		void GetOrigin(int& x, int& y, int& z);


		CADObject* Commit() override;
	private:


	};
}

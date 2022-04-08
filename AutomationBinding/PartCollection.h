#pragma once
#include "AutomationBindingExports.h"
namespace AutomationAPI
{
	class CubeBuilder;
	class Cube;
	/// <summary>
	/// The PartCollection class is a set of methods for initializing builders for parts, such as CubeBuilder.
	/// </summary>
	class AUTOMATIONBINDING_API PartCollection
	{
	public:
		PartCollection(int guid);

		virtual ~PartCollection();

		CubeBuilder* CreateCubeBuilder(Cube* cube);


	private:
		int m_guid;
	};
}

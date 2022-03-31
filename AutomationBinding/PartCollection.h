#pragma once
#include "AutomationBindingExports.h"
namespace AutomationAPI
{
	class CubeBuilder;
	class Cube;
	/// <summary>
	/// PartCollection comment
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

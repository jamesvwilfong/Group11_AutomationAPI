#include "PartCollection.h"
#include "Cube.h"
#include "CubeBuilder.h"
#include "..\AppLibrary\Journaling_PartCollection.h"
#include <iostream>

AutomationAPI::PartCollection::PartCollection(int guid) : m_guid(guid)
{

}

AutomationAPI::PartCollection::~PartCollection()
{

}

AutomationAPI::CubeBuilder* AutomationAPI::PartCollection::CreateCubeBuilder(AutomationAPI::Cube* cube)
{
	
	AutomationAPI::Cube* appCube = nullptr;
	

	if (cube == nullptr)
	{
		std::cout << "Cube is creation mode" << std::endl;
	}
	else
	{
		std::cout << "Cube is edit/query mode" << std::endl;
	}

	
	//AutomationAPI::CubeBuilder* cubeBuilder =
	//	Journaling_PartCollection_CreateCubeBuilder(cube, appCube);
	


	return nullptr;

}

#include "PartCollection.h"
#include "Cube.h"
#include "CubeBuilder.h"
#include <iostream>

AutomationAPI::PartCollection::PartCollection(int guid) : m_guid(guid)
{

}

AutomationAPI::PartCollection::~PartCollection()
{

}

AutomationAPI::CubeBuilder* AutomationAPI::PartCollection::CreateCubeBuilder(AutomationAPI::Cube* cube)
{
	if (cube == nullptr)
	{
		std::cout << "Cube is creation mode" << std::endl;
	}
	else
	{
		std::cout << "Cube is edit/query mode" << std::endl;
	}


	return nullptr;

}

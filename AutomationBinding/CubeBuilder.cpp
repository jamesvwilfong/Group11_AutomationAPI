#include "CubeBuilder.h"
#include "CADObject.h"



AutomationAPI::CADObject* AutomationAPI::CubeBuilder::Commit()
{
	return nullptr;
}

void AutomationAPI::CubeBuilder::SetType(CubeBuilderTypes type)
{
}

AutomationAPI::CubeBuilder::CubeBuilderTypes AutomationAPI::CubeBuilder::GetType()
{
	return AutomationAPI::CubeBuilder::TypesOriginAndEdgeLengths;
}

void AutomationAPI::CubeBuilder::SetHeight(int h)
{
}

int AutomationAPI::CubeBuilder::GetHeight()
{
	return 0;
}

void AutomationAPI::CubeBuilder::SetWidth(int w)
{
}

int AutomationAPI::CubeBuilder::GetWidth()
{
	return 0;
}

void AutomationAPI::CubeBuilder::SetDepth(int d)
{
}

int AutomationAPI::CubeBuilder::GetDepth()
{
	return 0;
}

void AutomationAPI::CubeBuilder::SetOrigin(int x, int y, int z)
{
}

void AutomationAPI::CubeBuilder::GetOrigin(int& x, int& y, int& z)
{
}

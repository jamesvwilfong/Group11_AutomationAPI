#include "JournalCallParamDataString.h"
#include "JournalingInternal.h"
#include "JournalFile.h"

using namespace Journal;

JournalCallParamDataString::JournalCallParamDataString(std::string paramName,
    ParameterMetaType paramType, std::string value) :
    JournalCallParamData(paramName, paramType,
        JournalCallParamData::ParameterBasicType::STRING), m_value(value)
{

}

void JournalCallParamDataString::Journal()
{
    if (this->m_paramType == JournalCallParamData::ParameterMetaType::INPUT)
    {
        //There is a bug here, all \ in the string need to be replaced with \\
        // i.e. if d:\dir\some.prt  we need to actualy change this to 
        //         d:\\dir\\some.prt
        
        std::string res = "";
        for (int i = 0; i < m_value.length() - 1; i++) {
            if (m_value.at(i) == '\\') {
                res = res + "\\\\";
            }
            else {
                res = res + m_value.at(i);
            }
        }
        std::string jnlString = "\"" + res + "\"";
        GetActiveJournalFile()->WriteToFile(jnlString);
    }
    else if (this->m_paramType == JournalCallParamData::ParameterMetaType::OUTPUT)
    {
        throw std::exception("NIY ");
    }
    else // RETURN
    {
        throw std::exception("NIY");
    }


}
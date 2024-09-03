#include "CppVersion.h"


string CppVersion::GetVersionDescription(int mscver) {
    switch(mscver) {
    case 1941: return "Visual Studio 2022 version 17.10.1"; break;
    case 1940: return "Visual Studio 2022 version 17.10"; break;
    case 1939: return "Visual Studio 2022 version 17.9"; break;
    case 1938: return "Visual Studio 2022 version 17.8"; break;
    case 1937: return "Visual Studio 2022 version 17.7"; break;
    case 1936: return "Visual Studio 2022 version 17.6"; break;
    case 1935: return "Visual Studio 2022 version 17.5"; break;
    case 1934: return "Visual Studio 2022 version 17.4"; break;
    case 1933: return "Visual Studio 2022 version 17.3"; break;
    case 1932: return "Visual Studio 2022 version 17.2"; break;
    case 1931: return "Visual Studio 2022 version 17.1"; break;
    case 1930: return "Visual Studio 2022 RTW 17.0"; break;
    default: return "Unknown"; break;
    }
}
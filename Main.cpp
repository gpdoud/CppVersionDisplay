#include "CppVersion.h";
#include <iostream>

using namespace std;

int getCppVersion() {
    return 0;
}
int main(int argc, char *args[])
{
    if(argc == 1) {
        cout << "Needs a single int argument.\n";
        exit;
    }
    auto mscver = stoi(args[1]);
    auto verStr = CppVersion::GetVersionDescription(mscver);
    cout << verStr << "\n";
}

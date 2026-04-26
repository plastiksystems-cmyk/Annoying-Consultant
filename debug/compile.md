## WINDOWS:
DLL >> *g++ -o consultant32.dll -shared core/cscharacter.cpp core/csmath.cpp -Iheaders*
EXE >> *g++ debug/main.cpp -Iheaders -Icharacters -L. -lconsultant32 -o consultant.exe*
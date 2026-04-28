## WINDOWS:
DLL >> *g++ -o consultant32.dll -shared core/cscharacter.cpp core/csmath.cpp -Iheaders*
EXE >> *g++ debug/main.cpp -Iheaders -Icharacters -L. -lconsultant32 -o consultant.exe* (no icon)

## WINDOWS COMPLETE

- .O FILES: *g++ -c core/cscharacter.cpp core/csmath.cpp -Iheaders
- .A LIBRARY *ar rcs consultant32.a cscharacter.o csmath.o*
- .EXE AND LINK .A *g++ debug/main.cpp -Iheaders -Icharacters -L. -lconsultant -o consultant.exe*
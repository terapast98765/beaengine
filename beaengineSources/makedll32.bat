@echo off

set INCLUDE=C:\PellesC\Include\;C:\PellesC\Include\Win\;
set LIB=C:\PellesC\Lib\;C:\PellesC\Lib\Win\;
set name=BeaEngine

echo ____________________________________
echo *
echo *  COMPILATION with POCC.EXE (Pelles C)
echo *
echo ____________________________________
\PellesC\bin\Pocc /Ze /W2 %name%.c


echo ____________________________________
echo *
echo *   CREATE DLL with POLINK.EXE (Pelles C)
echo *
echo ____________________________________
\PellesC\bin\PoLink /DLL /EXPORT:Disasm %name%.obj kernel32.lib 
pause






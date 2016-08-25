@echo OFF
main.exe %1 %2
if exist LZSCDec.exe ( LZSCDec.exe temp\output.lz.raw C output.lz.raw.LZS) else	echo "Could not find LZSCDec.exe in this directory"
if exist lzfix.exe (lzfix.exe) else echo "Could not find lzfix.exe in this directory"
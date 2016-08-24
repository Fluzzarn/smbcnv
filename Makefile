smbcnv: objparse/objparse.c config/config.c frmt/lz.c frmt/extmath.c main.c
	gcc -g -o main main.c frmt/extmath.c frmt/lz.c config/config.c objparse/objparse.c -std=c99 -lm

win: objparse/objparse.c config/config.c frmt/lz.c frmt/extmath.c main.c
	cl -g -o main.exe main.c frmt/extmath.c frmt/lz.c config/config.c objparse/objparse.c -std=c99 -lm
	cl -g -o win/main.exe main.c frmt/extmath.c frmt/lz.c config/config.c objparse/objparse.c -std=c99 -lm
#include "objparse/objparse.h"
#include "config/config.h"
#include "frmt/lz.h"

int main(int argc, char ** argv)
{
	if(argc < 3) printf("Usage:\nsmbcnv [obj file] [config file]\n");
	else
	{
		printf("Parsing OBJ file...\n");
		if (parseObj(argv[1]))
		{
			printf("Parsing config file...\n");
			parseConfig(argv[2]);
			printf("Writing LZ file...\n");
			writeLz();
			printf("Done!\n");
		}

	}
}

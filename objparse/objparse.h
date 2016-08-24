#ifndef OBJPARSE_H
#define OBJPARSE_H

/* Includes */

#include <stdio.h>
#include <string.h>
#ifdef WIN32
#include <Windows.h>
#include <Shlwapi.h>
#endif

/* Some structures */

typedef struct
{
	float x;
	float y;
} vec2f;
typedef struct
{
	float x;
	float y;
	float z;
} vec3f;
typedef struct
{
	int va;
	int vb;
	int vc;
	int vta;
	int vtb;
	int vtc;
	int vna;
	int vnb;
	int vnc;
} triangle;
typedef struct
{
	vec3f vs[65536];
} verts;
typedef struct
{
	vec2f vts[65536];
} texcoords;
typedef struct
{
	vec3f vns[65536];
} norms;
typedef struct
{
	char mat[80];
	triangle tris[65536];
} obj;
typedef struct
{
	char name[80];
} objname;
typedef struct
{
	char mtlname[80];
	char texname[80];
} mtl;

/* Global variables */

verts cmnVertices;
texcoords cmnTexCoords;
norms cmnNormals;
obj cmnObjs[256];
objname cmnObjNames[256];
mtl cmnMtls[256];
int tallyTris[256];

extern int tallyVertices;
extern int tallyTexCoords;
extern int tallyNormals;
extern int tallyObjs;
extern int tallyObjNames;
extern int tallyMtls;
extern int errCount;

/* Functions */

//returns true or false if reading succeeded
int parseObj(char * objpath);

#endif

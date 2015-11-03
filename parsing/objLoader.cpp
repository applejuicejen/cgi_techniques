#include "objLoader.h"
#include <vector>
#include <stdio.h>
#include <string>
#include <cstring>


struct vec2
{
  float u, v;
};

struct vec3
{
  float x, y, z;
};

bool objLoader(const char * path, std::vector<vec3> & out_vertices, std::vector<vec2> & out_uvs, std::vector<vec3> & out_normals)
{
  std::vector<unsigned int> vertexIndices, uvIndices, normalIndices;
  std::vector<vec3> temp_verts;
  std::vector<vec2> temp_uvs;
  std::vector<vec3> temp_normals;

  FILE *file = fopen(path, "r");
  if(file == NULL)
  {
    printf("File cannot be opened.\n");
    return false;
  }

  while(1)
  {
    char lineHeader[128];
    int res = fscanf(file, "%s", lineHeader);
    if(res == EOF)
    {
      break;
    }

    if(strcmp(lineHeader, "v")==0)
    {
      vec3 vertex;
      fscanf(file, "%f %f %f\n", &vertex.x, &vertex.y, &vertex.z);
      temp_verts.push_back(vertex);
    }
    else if(strcmp(lineHeader, ""))
  }
}


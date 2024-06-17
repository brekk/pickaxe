#include <cstdio>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <sys/socket.h>
#include <sys/stat.h>
#include <sys/un.h>
#include <unistd.h>
 
#ifdef __cplusplus
extern "C"
{
#endif

// https://stackoverflow.com/questions/146924/how-can-i-tell-if-a-given-path-is-a-directory-or-a-file-c-c

namespace fs = std::filesystem;
 
bool pickaxe__is__directory(std::string pathString) {
  const fs::path path(pathString);
  std::error_code ec;
  return fs::is_directory(path, ec);
}
 


#ifdef __cplusplus
}
#endif

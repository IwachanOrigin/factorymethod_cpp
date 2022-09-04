
# set the project name
project(pattern1 CXX)

set(main_src
  main.cpp
  filedataobject.h
  filedataobject.cpp
  dbdataobject.h
  dbdataobject.cpp
  dataobject.h
  dataobject.cpp
)

add_executable(
  ${PROJECT_NAME}
  ${main_src}
)


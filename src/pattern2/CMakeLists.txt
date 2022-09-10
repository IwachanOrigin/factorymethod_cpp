
# set the project name
project(pattern2 CXX)

set(main_src
  main.cpp
  filedataobject.h
  filedataobject.cpp
  dbdataobject.h
  dbdataobject.cpp
  dataobject.h
  dataobject.cpp
  dataobjectfactory.h
  dataobjectfactory.cpp
)

add_executable(
  ${PROJECT_NAME}
  ${main_src}
)


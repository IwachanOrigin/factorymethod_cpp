
# set the project name
project(pattern3 CXX)

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
  filedataobjectfactory.h
  filedataobjectfactory.cpp
  dbdataobjectfactory.h
  dbdataobjectfactory.cpp
)

add_executable(
  ${PROJECT_NAME}
  ${main_src}
)


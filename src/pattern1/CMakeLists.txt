
set(main_src
  main.cpp
  filedataobject.h
  filedataobject.cpp
  dataobject.h
  dataobject.cpp
)

add_executable(
  ${PROJECT_NAME}
  ${main_src}
)


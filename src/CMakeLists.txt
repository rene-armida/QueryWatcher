project(QueryWatcher)
set(project_binary_dir bin)
set(cmake_build_type Debug)

add_executable(QueryWatcher App.cpp main.cpp)
target_link_libraries(QueryWatcher be tracker)

add_executable(TestQueryWatcher Test.cpp TestSettings.cpp Settings.cpp)
target_link_libraries(TestQueryWatcher be tracker cppunit)

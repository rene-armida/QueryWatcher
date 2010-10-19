add_executable(QueryWatcher App.cpp main.cpp)
target_link_libraries(QueryWatcher be tracker)

add_executable(TestQueryWatcher Test.cpp App.cpp)
target_link_libraries(TestQueryWatcher be tracker cppunit)

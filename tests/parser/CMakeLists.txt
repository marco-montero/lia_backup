message(${Boost_INCLUDE_DIRS})

add_executable (test_analyzer test_analyzer.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/analyzer.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/translation_unit.cpp
  )
target_include_directories (test_analyzer PRIVATE ${Boost_INCLUDE_DIRS})

message(${Boost_LIBRARIES})

target_link_libraries(test_analyzer
                      ${Boost_LIBRARIES}
                     )

add_test (NAME test1 COMMAND test_analyzer)

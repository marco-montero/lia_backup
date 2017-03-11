add_executable (test_analyzer test_analyzer.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/analyzer.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/block_declaration.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/declaration.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/function_definition.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/translation_unit.cpp
  )

target_include_directories (test_analyzer PRIVATE ${Boost_INCLUDE_DIRS})

target_link_libraries(test_analyzer
                      ${Boost_LIBRARIES}
                     )

add_executable (stand_alone stand_alone.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/analyzer.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/block_declaration.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/declaration.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/function_definition.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/translation_unit.cpp
  )

target_include_directories (stand_alone PRIVATE ${Boost_INCLUDE_DIRS})

target_link_libraries(stand_alone
  ${Boost_LIBRARIES}
  )

add_test (NAME test1 COMMAND test_analyzer)

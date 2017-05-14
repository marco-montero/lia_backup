add_executable (test_analyzer test_analyzer.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/alias_declaration.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/analyzer.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/asm_definition.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/attribute_declaration.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/attribute_specifier_seq.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/block_declaration.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/constant_expression.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/declaration.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/decl_specifier_seq.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/enum_key.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/explicit_instantiation.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/explicit_specialization.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/function_definition.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/identifier.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/init_declarator_list.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/linkage_specification.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/namespace_alias_definition.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/namespace_definition.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/namespace_name.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/nested_name_specifier.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/opaque_enum_declaration.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/qualified_namespace_specifier.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/simple_declaration.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/static_assert_declaration.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/static__assert.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/string_literal.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/template_declaration.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/translation_unit.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/type_id.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/type_specifier_seq.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/unqualified_id.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/using_declaration.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/using_directive.cpp
  )

target_include_directories (test_analyzer PRIVATE ${Boost_INCLUDE_DIRS})

target_link_libraries(test_analyzer
                      ${Boost_LIBRARIES}
                     )

add_executable (stand_alone stand_alone.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/alias_declaration.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/analyzer.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/asm_definition.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/attribute_declaration.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/attribute_specifier_seq.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/block_declaration.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/constant_expression.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/declaration.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/decl_specifier_seq.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/enum_key.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/explicit_instantiation.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/explicit_specialization.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/function_definition.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/identifier.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/init_declarator_list.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/linkage_specification.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/namespace_alias_definition.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/namespace_definition.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/namespace_name.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/nested_name_specifier.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/opaque_enum_declaration.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/qualified_namespace_specifier.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/simple_declaration.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/static_assert_declaration.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/static__assert.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/string_literal.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/template_declaration.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/translation_unit.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/type_id.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/type_specifier_seq.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/unqualified_id.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/using_declaration.cpp
  ${CMAKE_SOURCE_DIR}/src/parser/using_directive.cpp
  )

target_include_directories (stand_alone PRIVATE ${Boost_INCLUDE_DIRS})

target_link_libraries(stand_alone
  ${Boost_LIBRARIES}
  )

add_test (NAME test1 COMMAND test_analyzer)

# QT 

find_package (Qt5Widgets REQUIRED) 

set (CMAKE_AUTOMOC OFF)
set (CMAKE_INCLUDE_CURRENT_DIR ON)

include_directories (${CMAKE_CURRENT_SOURCE_DIR})

include_directories (${Qt5Widgets_INCLUDE_DIRS})

#set (UIs
#    ${PROJECT_SOURCE_DIR}/resources/gui/DrawWidget.ui
#    ${PROJECT_SOURCE_DIR}/resources/gui/EditWidget.ui
#    )

#qt5_wrap_ui(UI_Srcs ${UIs})

#qt5_wrap_cpp(MOC_Srcs
#             ${PROJECT_SOURCE_DIR}/include/hivemind/gui/DrawWidget.hpp
#             ${PROJECT_SOURCE_DIR}/include/hivemind/gui/EditWidget.hpp
#             ${PROJECT_SOURCE_DIR}/include/hivemind/gui/MainWindow.hpp
#            )

#qt5_add_resources (HIVEMIND_RCC ${PROJECT_SOURCE_DIR}/resources/hivemind.qrc)

add_executable (${PROJECT_NAME}
                MainWindow.cpp
#                ${MOC_Srcs}
#                ${UI_Srcs}
#                ${HIVEMIND_RCC}
               )

set_target_properties (${PROJECT_NAME} PROPERTIES POSITION_INDEPENDENT_CODE ON
                       RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

target_link_libraries (${PROJECT_NAME}
                       Qt5::Widgets
                      )

add_library( mtvobj OBJECT
  # Append each .cc file
  Mtv.cc
)

target_include_directories( mtvobj PUBLIC
  $<BUILD_INTERFACE:${MTV_INCLUDE_DIR}>
  $<INSTALL_INTERFACE:include>)

file(COPY include/ DESTINATION ${MTV_INCLUDE_DIR})

add_executable(mtv mtv.cpp)
target_link_libraries(mtv PUBLIC 
  mtvobj ${ROOT_LIBRARIES} ${Geant4_LIBRARIES} ${Ratpac_LIBRARIES})

set_target_properties(mtvobj mtv
    PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY ${MTV_LIBRARY_DIR}
    LIBRARY_OUTPUT_DIRECTORY ${MTV_LIBRARY_DIR})

install(TARGETS mtvobj mtv
    LIBRARY DESTINATION lib
    ARCHIVE DESTINATION lib
    RUNTIME DESTINATION bin)

install(DIRECTORY ${MTV_INCLUDE_DIR}
    DESTINATION ${CMAKE_INSTALL_PREFIX})

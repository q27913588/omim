project(drape_frontend_tests)

set(
  SRC
  navigator_test.cpp
  object_pool_tests.cpp
  user_event_stream_tests.cpp
)

omim_add_test(${PROJECT_NAME} ${SRC})

if (PLATFORM_MAC)
  omim_link_libraries(
    ${PROJECT_NAME}
    ${Qt5Widgets_LIBRARIES}
  )
endif()

omim_link_libraries(
  ${PROJECT_NAME}
  drape_frontend
  drape
  platform
  indexer
  geometry
  coding
  base
  expat
  stats_client
  stb_image
  sdf_image
  ${LIBZ}
)

link_opengl(${PROJECT_NAME})
link_qt5_core(${PROJECT_NAME})

#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "panda_interface::panda_interface__rosidl_generator_py" for configuration ""
set_property(TARGET panda_interface::panda_interface__rosidl_generator_py APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(panda_interface::panda_interface__rosidl_generator_py PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_NOCONFIG "panda_interface::panda_interface__rosidl_generator_c;panda_interface::panda_interface__rosidl_typesupport_c;geometry_msgs::geometry_msgs__rosidl_generator_py;std_msgs::std_msgs__rosidl_generator_py"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libpanda_interface__rosidl_generator_py.so"
  IMPORTED_SONAME_NOCONFIG "libpanda_interface__rosidl_generator_py.so"
  )

list(APPEND _cmake_import_check_targets panda_interface::panda_interface__rosidl_generator_py )
list(APPEND _cmake_import_check_files_for_panda_interface::panda_interface__rosidl_generator_py "${_IMPORT_PREFIX}/lib/libpanda_interface__rosidl_generator_py.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)

# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_xpkg_urdf_mark2_mcnm_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED xpkg_urdf_mark2_mcnm_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(xpkg_urdf_mark2_mcnm_FOUND FALSE)
  elseif(NOT xpkg_urdf_mark2_mcnm_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(xpkg_urdf_mark2_mcnm_FOUND FALSE)
  endif()
  return()
endif()
set(_xpkg_urdf_mark2_mcnm_CONFIG_INCLUDED TRUE)

# output package information
if(NOT xpkg_urdf_mark2_mcnm_FIND_QUIETLY)
  message(STATUS "Found xpkg_urdf_mark2_mcnm: 0.1.0 (${xpkg_urdf_mark2_mcnm_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'xpkg_urdf_mark2_mcnm' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${xpkg_urdf_mark2_mcnm_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(xpkg_urdf_mark2_mcnm_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${xpkg_urdf_mark2_mcnm_DIR}/${_extra}")
endforeach()

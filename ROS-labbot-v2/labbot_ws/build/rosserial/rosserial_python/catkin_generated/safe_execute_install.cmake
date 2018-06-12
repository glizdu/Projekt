execute_process(COMMAND "/home/labbot/ROS-labbot-kalkowski-staszak/labbot_ws/build/rosserial/rosserial_python/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/labbot/ROS-labbot-kalkowski-staszak/labbot_ws/build/rosserial/rosserial_python/catkin_generated/python_distutils_install.sh) returned error code ")
endif()

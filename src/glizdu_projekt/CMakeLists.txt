cmake_minimum_required(VERSION 2.8.3)
project(glizdu_projekt)

find_package(catkin REQUIRED COMPONENTS 
roscpp 
move_base 
openni2_launch 
turtlebot_bringup
)

###########
## Build ##
###########
catkin_package(CATKIN_DEPENDS
move_base 
openni2_launch 
turtlebot_bringup
)
include_directories(include ${catkin_INCLUDE_DIRS})

add_executable(glizdu_projekt projekt.cpp)
target_link_libraries(glizdu_projekt ${catkin_LIBRARIES})

## Declare a C++ library
# add_library(${PROJECT_NAME}
#   src/${PROJECT_NAME}/glizdu.cpp
# )


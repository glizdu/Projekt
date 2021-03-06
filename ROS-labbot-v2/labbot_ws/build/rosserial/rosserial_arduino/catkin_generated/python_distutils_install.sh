#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
    DESTDIR_ARG="--root=$DESTDIR"
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/labbot/ROS-labbot-kalkowski-staszak/labbot_ws/src/rosserial/rosserial_arduino"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/labbot/ROS-labbot-kalkowski-staszak/labbot_ws/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/labbot/ROS-labbot-kalkowski-staszak/labbot_ws/install/lib/python2.7/dist-packages:/home/labbot/ROS-labbot-kalkowski-staszak/labbot_ws/build/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/labbot/ROS-labbot-kalkowski-staszak/labbot_ws/build" \
    "/usr/bin/python" \
    "/home/labbot/ROS-labbot-kalkowski-staszak/labbot_ws/src/rosserial/rosserial_arduino/setup.py" \
    build --build-base "/home/labbot/ROS-labbot-kalkowski-staszak/labbot_ws/build/rosserial/rosserial_arduino" \
    install \
    $DESTDIR_ARG \
    --install-layout=deb --prefix="/home/labbot/ROS-labbot-kalkowski-staszak/labbot_ws/install" --install-scripts="/home/labbot/ROS-labbot-kalkowski-staszak/labbot_ws/install/bin"

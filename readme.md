# RoboJackets IGVC [![Build Status](https://circleci.com/gh/RoboJackets/igvc-software/tree/master.svg?&style=shield)](https://circleci.com/gh/RoboJackets/igvc-software/tree/master)

Welcome to the RoboJackets IGVC software repo!
This document will give you a brief description of the repo's layout and some simple instructions for building the documentation and project. For more detailed information, please visit wiki.robojackets.org

For online API documentation generated by Doxygen, go to robojackets.github.io/igvc-software/

## Folder Structure
The repo is comprised of two ROS packages and one sandbox folder for miscelaneous resources.
FOLDERS
 * **igvc**
    *This is the primary ROS package that houses all of our source code.*
    * **launch**
        *This folder holds all of our ros launch files that start one or more ros nodes*
    * **src**
        *This folder contains ros nodes which does all the computation and is modular*
 * **igvc_msgs**
    *This package defines custom message types for our code.*
 * **sandbox**
    *This folder contains miscelaneous resources. This includes source code for our robot's Arduinos and Ardupilot IMU, udev rules for our robot's hardware, and other files.*
 * **gazebo**
    *This folder contains two packages that are used to run gazebo*
    * **igvc_description**
        *This package contains the URDF and the models that are spawned into gazebo*
    * **igvc_control**
        *This package contains the code necessary to control our robot in simulation*


## Building Documentation
Documentation for our code can be generated via the rosdoc_lite tool.


## Building Code
This repository should be cloned into the src directory of a catkin workspace. Use `catkin_make` in the workspace directory to build the code. Dependencies can be installed by `rosdep install packageName` on packages igvc, igvc_control, and igvc_description . (NOTE: Be sure to `source devel/setup.sh` before referencing the igvc or igvc_msgs packages.)

For a guide on installing our code please go to [our guide](https://wiki.robojackets.org/IGVC_Software_Installation_Instructions)

Join the chat at https://robojackets.slack.com/

## Running Gazebo
You can get started with the IGVC code base right away by launching our simulator!

The following command will load our platform into a simulated IGVC course:
```
roslaunch igvc_control gazebo.launch
```
Then, the following command will start our mapper
```
roslaunch igvc mapper.launch
```
Next, run the following command to start our pathing node and navigate around the course autonomously
```
roslaunch igvc pather.launch
```
Alternatively, you can control the car manually with a USB gamepad with this command:
```
roslaunch igvc joystick_driver.launch
```

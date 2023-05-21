#!/bin/bash

#prints the maximum value a process ID can be

max_pid=$(cat /proc/sys/kernel/pid_max)
echo $max_pid

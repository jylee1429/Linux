#!/bin/bash

echo 0 > /sys/kernel/debug/tracing/tracing_on
echo "ftrace off"
sleep 3
cp /sys/kernel/debug/tracing/trace .
# Rename the file named "trace" to "ftrace_log.c"
# mv trace ftrace_log.ci

# $1 represents the first argument passed when executing the script
mv trace ./ftrace_logs/$1.c


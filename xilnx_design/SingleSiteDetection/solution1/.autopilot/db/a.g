#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/greg/multisite_test_detection_algorithms/xilnx_design/SingleSiteDetection/solution1/.autopilot/db/a.g.bc ${1+"$@"}
To generate final runtime file, just compile and run main.cpp
runtime.txt lists the runtimes in microseconds of each sorting algorithm respective to the original writeup

Plots were generated with individual output files for ease of graphing(files used for graph included in the cmake-build-debug folder as well as with the python files and plots

Bucket sort only runs to size 100000 arrays because of space issues

Not quite sure why but the high_resolution_clock doesn't seem to grab accurate enough time for the smaller arrays
even though it seems to work for everyone else I spoke to about it
Because of this, the runtimes for smaller arrays all show as 0 even though they should be taking more than 0 microseconds
on my machine

if whoever grades this can explain to me why I would love to know because all the info I found online shows that this should work

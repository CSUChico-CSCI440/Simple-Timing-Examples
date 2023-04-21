import time

time.sleep(10)
start = time.time_ns()
time.sleep(10) #threaded work
end = time.time_ns()
time_diff = end-start
time_diff_s = time_diff / (10 ** 9) # convert to floating-point seconds
print("Time taken {0:.6f} seconds".format(time_diff_s))
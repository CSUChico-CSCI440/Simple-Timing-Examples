import time 

t0 = time.time_ns()
time.sleep(10)
t1 = time.time_ns()
time_diff = t1-t0
time_diff_s = time_diff / (10 ** 9) # convert to floating-point seconds
print("Time taken {0:.6f} seconds".format(time_diff_s))
# appZ_threads
Simple exercise to practice thread library with Zephyr

## New APIs that we came across in this tutorial

### k_yield
   Yield the CPU to allow other threads to run, but keeps current thread ready to run state.

### k_msleep
   Puts the thread to sleep and allowing other threads to run. After executing this API the thread goes in wait state, and will return to runable state only after the sleep time is finished.

### k_busy_wait
   Does not yield the thread. The thread continues to execute NOP instructions for the time mentioned in busy wait (in microseconds).
   This API should not be used in production code, but serves the purpose of a good debugging tool.
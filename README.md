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

## WorkQueues
   WorkQueues are used to offload tasks from a higher priority Task to a lower priority working queue.
   Important APIs used are as follows:

### K_THREAD_STACK_DEFINE
   Defines a custom user stack of size mentioned. This stack is utilized for running the work queue.

### k_work_queue_start
   Initialized a Work Queue.

### k_work_init
   Connects a work Queue to its handler function.

### k_work_submit_to_queue
   Submits a work to a Work Queue.

# OS_project

------
## Deadlock Problem

It refers to a dead locked state that can occur in the process of using shared resources between processes. When process A is using resource 1 and requires resource 2, this resource 2 is in use by another process B, whereas process B is in a state of waiting for the two processes to enter a standby state when process A requires resource 1 in use, and only wait to release the resources it holds.

## DeadLock Characterization

Deadlocks occur when all of the following four conditions are satisfied.

1. Mutual exclusion: Only one process can be used for a specific resource at a specific time point.
2. No Preemption: Resources can be used by other processes only when the secured process is released first.
3. Hold and wait: There must be at least one process that waits for the resources allocated by the process to become available.
4. Circular wait: There is a circular waiting state between processes that requires advice from each other.

## Methods for Handling Deadlocks

+ Deadlock Prevention

Method of preventing one or more of the four conditions under which deadlock occurs from occurring.

+ Mutual Exclusion: Let's make resources shareable (the right to share resources is physically impossible)-> It is impossible to avoid deadlocks by allowing resources to be shared.
+ Hold and wait: It makes it impossible to retain resources fundamentally unless they are secured. (all hold or nothing hold) But there is a possibility of starvation problem.
+ No Preemption: A process that is on standby because it cannot secure resources has other resources, and another process forcibly preempts the resources of the process when it needs them. (Possession and waiting are allowed, but it is set as a preemption method.)
+ Circular Wait: The order of securing resources is set in advance. Even if the process itself has the resources it needs right away, it secures the resources that are ranked higher than them first and then requests the necessary resources. It has the advantage of being able to increase the utilization rate of resources.

+ Deadlock Avoidance

If the processes of the system can allocate all the requested resources to everyone in turn without generating deadlocks, they are in a safe state. And if it is possible to find an order in which deadlocks do not occur when working on allocating, executing, and terminating resources to processes in a specific order, it is called a safety sequence. On the other hand, an unstable state refers to a situation that is not a stable state, a situation that may cause a deadlock, and a deadlock state may occur when the state is unstable. The basic feature of the avoidance algorithm is to allow allocation so that the system can always be in a stable state even after allocating resources.

ex ) single instance of a resource type

![image](https://user-images.githubusercontent.com/59435705/120584537-22d71d80-c46b-11eb-9cb4-f505b3e9b39f.png)

![image](https://user-images.githubusercontent.com/59435705/120584943-d3ddb800-c46b-11eb-9af3-20fffc723897.png)


Banker's Algorithm - Multiple instruments of resources type


+ DeadLock Detection & Recovery

First, when the system does not use deadlock prevention or avoidance methods, deadlocks may occur, so we use algorithms to detect and recover deadlocks to recover.

+ Detection technique: Explore whether the deadlock is validated in the system. Similar to the method used in the banker algorithm, it is identified by the resource allocation status of the current system. In addition, there is a method of detecting through a resource allocation graph.

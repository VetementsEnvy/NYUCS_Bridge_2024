//Name: Junjie Zhang
// 
//Email: jz5880@nyu.edu
//
//
//1) (3pts) Multiple Choice: c
//2) (3pts) Multiple Choice: c
//3) (3pts) Multiple Choice: d
//4) (3pts) Fill in the blank: semaphores
//5) (3pts) Fill in the blank: GET
//
//
//6) (10 pts) Short answer: 
//If data packet is transmitting at computer networks that is larger than MTU,
//it will divide into small parts and reassembled at source destination. if the package does not fragment, 
//it will lead to package loss.
//
//
//7) (10 pts) Short answer:
//when a program receives an interrupt while running the code, it is going to be turn to ready state block
//state, and then TCB save the current process which can be restored later one. Finally, the CPU is going to pick a new process to run.
//
//
//
//
//8) (15 pts) Short answer:
//Eliminating the ability to have a circular wait ususlly can be done by assigning priority to each resources
//the process that holds a higher resource cannot acquire a resource. Therefore, A wait for B, B wait for C, and C wait for A will not happen since C cannot acquire lower level resource.
//
//
//9) (10 pts) Short answer:
//In order to form a TCP socket, we use 3-way handskae stategy:
//1).the user sent a SYN packet to the server
//2).the server received SYN packet and send back an ACK packet, and the TCP connection establishes
//3).the user receives an ACK packet and knows the TCP connection is successful
//
//
//10) (10 pts) Short answer:
//The MMU would look at TLB table where logical address is recoreded, and then it knows the frame number of each logical address, the frame number shows page is located on the physical memory
//
//11) (10 pts) Short answer:
//congestion control, flow control
//
//12) (20 pts) Write the code:

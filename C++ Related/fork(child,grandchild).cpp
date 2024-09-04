#include <iostream>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
  pid_t pid;
  std::cout << "I am the parent process" << std::endl;
  
  for(int i = 0; i < 4; i++){
      
      pid = fork();
      
      if(pid == 0){
          
         std::cout << "I am the child process " << i << std::endl;
         
         if(i == 1){
            for(int j = 0; j < 2; j++){
                
               pid = fork();
               
               if(pid == 0){
                 std::cout << "I am a grandchild process from child process " << j << std::endl;
                
                 _exit(0);
               }
               wait(nullptr);
            }
         }
        _exit(0);
      }
      wait(nullptr);
  }
  
    return 0;
}

/*
Output
I am the parent process
I am the child process 0
I am the child process 1
I am a grandchild process from child process 0
I am a grandchild process from child process 1
I am the child process 2
I am the child process 3
*/

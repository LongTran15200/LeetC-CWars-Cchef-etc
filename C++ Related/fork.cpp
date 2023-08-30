//if fork will have parent and child process
//let say you created fork()


#include <iostream>
#include <unistd.h>

using namespace std;

int main()
{
    pid_t c_pid = fork();
  
    if (c_pid == -1) {
        perror("fork");
        exit(EXIT_FAILURE);
    }
    else if (c_pid > 0) {
        //  wait(nullptr);
        cout << "printed from parent process " << getpid()
             << endl;
    }
    else {
        cout << "printed from child process " << getpid()
             << endl;
    }
  
    return 0;
}
/* output == printed from parent process 33
printed from child process 34 */

// C++ Program to Creating
// Multiple processes
// Using a fork
#include <iostream>
#include <unistd.h>
using namespace std;
  
int main()
{
    fork();
    fork();
    cout << "Hello World" << endl;
  
    return 0;
}

/*output
Hello world
Hello world
Hello world
Hello world

fork will process parent and child, that why each fork() can create 2 print output.
and if for example, fork() is being called 3 times, then 2^3. Hello world will be printed 8 times
*/




# main with args

synatx : int main(int argc, char** argv) 

char** argv OR char* argv[]

`argc` = command-line arguments count

`argv` = argument vector ; hold every command-line argument passed  to program

`char** argv` = vector of c-style strings

`argv[0]` = always program name

NOTE : to get all argv , use for loop
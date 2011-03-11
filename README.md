_DISCLAIMER: THIS CODE IS FOR EDUCATIONAL PURPOSES ONLY. USE AT YOUR OWN RISKS._

This is basically how a shell works.

# INSTALL #

1. `make`
    
2. (optional) Append "/path/to/dashell" to /etc/shells, to make it a valid shell: 

        sudo echo "/path/to/dashell" >> /etc/shells 

3. (optional) Change "username"'s shell. "username" should have execute permission for the shell:

        chsh --shell /path/to/dashell username
        
# USAGE #

    ./dashell
    dashell> ls -al
    dashell> ./launchme 1 2 3
    ....
    dashell> exit

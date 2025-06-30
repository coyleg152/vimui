VIM UI - Vi IMproved User Interface

A Vim wrapper that uses ls and indexes for quick and easy file opening

Requirements:
- Vim must be installed
- A folder in the home directory named 'vimui'
- The vimui folder must have '.vimui.sh' and 'filelister.cpp' inside
- A C++ compiler (g++) is needed to compile 'filelister.cpp'
- Run 'g++ filelister.cpp -o filelister.exe' in the vimui directory

How to use:
- Run the command '~/vimui/.vimui.sh' in your desired directory
- Set an alias (alias vimui='~/vimui/.vimui.sh') for easier usage (optional)

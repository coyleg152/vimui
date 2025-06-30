VIM UI - Vi IMproved User Interface

A Vim wrapper that uses ls and indexes for quick and easy file opening

Requirements:
- Vim must be installed on your system
- The 'vimui' folder must be in the '~' directory
- The 'vimui' folder must have '.vimui.sh' and 'filelister.cpp' inside
- If '.vimui.sh' is not executable, run 'chmod +x .vimui.sh'
- A C++ compiler (g++) is needed to compile 'filelister.cpp'
- Run 'g++ filelister.cpp -o filelister.exe' in the 'vimui' directory
- If 'filelister.exe' is not executable, run 'chmod +x filelister.exe'

How to use:
- Run the command '~/vimui/.vimui.sh' in your desired directory
- Set an alias (alias vimui='~/vimui/.vimui.sh') for easier usage (optional)

# File: .vimui.sh
echo
echo "####  #####"
echo " ##    ##"
echo " ##  ##"
echo " ####  * __"
echo " ##    | |||"
echo
a=0
while [ $a == 0 ]
do
    ls -1 *.txt *.c *.cpp *.py *.sh > .filelist.txt 2> .filelisterrors.txt
    ~/vimui/filelister.exe
    a=$?
    if [ $a == 0 ]; then
        vim $(tail -1 .filelist.txt)
        echo -e "\n\n"
    fi
done
rm .filelist.txt
rm .filelisterrors.txt

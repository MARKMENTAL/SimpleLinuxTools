import os 
choice = int(input("What would you like to do?\n1:Compress to tarball\n2:Extract tarball\n"))

if (choice == 1):
    cmd = "tar -czvf "
    cmd += input("Enter the name of the compressed tarball you'd like to create(do not include file extension)\n")
    cmd += ".tar.gz "
    cmd += input("Now entire the name of the folder you want to compress\n")
    

elif (choice == 2):
    cmd = "tar -xvf "
    cmd += input("Enter the name of the compressed tarball you'd like to extract\n")

os.system(cmd)

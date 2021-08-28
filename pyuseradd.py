# Copyright (C) 2021, Mark Robillard Jr
#This program is free software: you can redistribute it and/or modify
    #it under the terms of the GNU General Public License as published by
    #the Free Software Foundation, either version 3 of the License, or
    #(at your option) any later version.

    #This program is distributed in the hope that it will be useful,
    #but WITHOUT ANY WARRANTY; without even the implied warranty of
    #MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    #GNU General Public License for more details.

    #You should have received a copy of the GNU General Public License
    #along with this program.  If not, see <https://www.gnu.org/licenses/>.

class User:
    def __init__(self, username, password, sudo):
        self.user = username
        self.pw = password
        self.sudoaccess = sudo

    # Print the inputted user info
    def printuser(self):
        print("Username: "+ self.user)
        print("Password: " + self.pw)
        print("To create user: 'sudo useradd " +self.user + "'")
        print("To create password: 'sudo passwd " +self.user +"'\nThen enter '"+self.pw +"' For the password")
        if (self.sudoaccess =="y"):
            print("After added, to give this user sudo privileges: 'sudo usermod -aG sudo " +self.user +"'")

# Use the User class to create an object, and then execute the printuser method:
print("Welcome to pyuseradd. This program is designed to help create new users on PCs running Linux")
count = int(input("How many users would you like to add today?\n"))
i = 0
while (i < count):
    name = input("Enter the user's username\n")
    pw = input("Enter a password for the user\n")
    sudoaccess = input("Do you want the user to have sudo access?(y/n)\n")
    usr = User(name,pw,sudoaccess)
    usr.printuser()
    i+=1

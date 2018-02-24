#! /bin/bash

#############################################################
#### A very simple and unsecure script to create your   #####
#### docker-machine and set your MAC env, for the       #####
#### latter to function, you have to execute with       #####
#### source command instead of sh or "./"               #####
#############################################################
#############################################################

#where the machine will be stored
machine_path="/Volumes/Storage/goinfre/$USER/docker"

#ask for machine name
echo "Please enter the desired name for the machine :"
read machineName

#set the env var for the location of your machine storage
export MACHINE_STORAGE_PATH=$machine_path

#check for updates
echo "<< Installing docker and checking for updates... >>"
if brew update && brew install docker && brew install docker-machine && docker --version; then
	echo "<< Successful >>"
else
	echo "<< Abort >>"
	return 1
fi

#create a machine
echo "<< Creating a machine named $machineName... >>"
if docker-machine create -d virtualbox $machineName; then
	echo "<< Successful >>"
else
	echo "<< WARNING but continuing script... >>"
fi	

#set the env variables
echo "<< Setting environment variables... (only works if you execute the script with \"source script.sh\" >>"
eval $(docker-machine env $machineName)

#check for running machines, especially useful to see if env is set
echo "<< Checking for env settings... >>"
if docker container &> /dev/null ls; then
	echo "<< Successful >>"
else
	echo "<< Error: please execute the script with \"source\" command >>"
	return 1
fi

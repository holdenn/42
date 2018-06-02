#ask for a container type and create it with -it --rm
echo "<< If you want to run a container with -it --rm options, enter its type, if not, just type No or exit the program >>"
read contType

if [ "$contType" = "No" ]
then
	echo "it's a no !"
	return 1;
else
	echo "Please, enter your container desired name:"
	read contName
	docker run --restart on-failure --name $contName -it $contType sh
fi

echo "<< End of script, everything seems fine =) >>"

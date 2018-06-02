machine_path="/Volumes/Storage/goinfre/$USER/docker"

export MACHINE_STORAGE_PATH=$machine_path
eval $(docker-machine env $(docker-machine ls -q))

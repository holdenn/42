#ex00

#ex01
docker run -d --name teamspeak3 -p 9987:9987/udp -p 30033:30033 -p 10011:10011 -p 41144:41144 teamspeak3

#ex02
#d'abord build une image du fichier exemple du nom rubyception
#ensuite copier ca "docker run -d --name rubyonfire -p 3000:3000 rubyception"

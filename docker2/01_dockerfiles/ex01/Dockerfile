FROM debian

RUN apt-get update -y && apt-get upgrade -y && apt-get install -y \
	bzip2 \
	wget

#make sure port is open
EXPOSE 9987/udp
EXPOSE 30033
EXPOSE 10011
EXPOSE 41144

#get ts
RUN wget http://ftp.4players.de/pub/hosted/ts3/releases/3.0.0/teamspeak3-server_linux-amd64-3.0.0.tar.gz
RUN tar -xvf teamspeak3-server_linux-amd64-3.0.0.tar.gz

#clean
RUN rm -rf \
	teamspeak3-server_linux-amd64.tar.gz

#launch server
RUN mv teamspeak3-server_linux-amd64 teamspeak
RUN cd teamspeak
ENV TS3SERVER_LICENSE="accept"
CMD ["sh", "teamspeak/ts3server_minimal_runscript.sh"]

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
RUN wget http://dl.4players.de/ts/releases/3.1.0/teamspeak3-server_linux_amd64-3.1.0.tar.bz2
RUN bunzip2 teamspeak3-server_linux_amd64-3.1.0.tar.bz2
RUN tar -xvf teamspeak3-server_linux_amd64-3.1.0.tar

#clean
RUN rm -rf \
	teamspeak3-server_linux_amd64-3.1.0.tar.bz2 \
	teamspeak3-server_linux_amd64-3.1.0.tar

#launch server
RUN mv teamspeak3-server_linux_amd64 teamspeak
RUN cd teamspeak
ENV TS3SERVER_LICENSE="accept"
CMD ["sh", "teamspeak/ts3server_minimal_runscript.sh"]

#a debian image to test your init (except for iptables) and your C programs

FROM debian:jessie

RUN apt-get update -y && apt-get upgrade -y && apt-get install -y \
	vim \
	clang \
	bash-completion \
	gcc

#Create a repo volume and put files of buildfolder./repo to container./repo
VOLUME /repo
COPY . .

RUN echo ":set number\n:syntax on" > ./usr/share/vim/vimrc

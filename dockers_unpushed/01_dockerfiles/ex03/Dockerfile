FROM debian

#ne pas oublier de retirer vim et bash completion
RUN apt-get update -y && apt-get upgrade -y && apt-get install -y \
	bash-completion \
	vim \
	git \
	wget \
	gcc \
	curl \
	openssh-server \
	ca-certificates

RUN curl https://packages.gitlab.com/install/repositories/gitlab/gitlab-ee/script.deb.sh > deb.sh
RUN sh deb.sh
ENV EXTERNAL_URL="http://trythisdudelol.com"

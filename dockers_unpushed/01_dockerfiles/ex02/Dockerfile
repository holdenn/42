FROM ruby

#update apt and get required packages, take off nodejs?
RUN apt-get update -y && apt-get upgrade -y && apt-get install -y \
	nodejs

#installing rails
RUN gem install rails

#getting a copy of the app of the src into /opt/app of the container (so the other Dockerfile needs to do "rails new app" before)
ONBUILD COPY app/ /opt/app
ONBUILD WORKDIR /opt/app
#installing gem dependencies
ONBUILD RUN bundle install && \
			rake db:migrate && \
			rake db:seed

WORKDIR /opt/app

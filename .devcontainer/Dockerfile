FROM debian:latest

RUN apt-get update \
    && export DEBIAN_FRONTEND=noninteractive \
    && apt-get -y install curl git

RUN cd /usr/local \
    && curl -fsSL https://raw.githubusercontent.com/arduino/arduino-cli/master/install.sh | BINDIR=/usr/local/bin sh
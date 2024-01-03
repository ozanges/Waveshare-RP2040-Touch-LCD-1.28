FROM debian:latest

RUN apt-get update \
    && export DEBIAN_FRONTEND=noninteractive \
    && apt-get -y install curl git python3

RUN cd /usr/local \
    && curl -fsSL https://raw.githubusercontent.com/arduino/arduino-cli/master/install.sh | BINDIR=/usr/local/bin sh -s -- 0.35.0

COPY .bashrc /root/

RUN arduino-cli core update-index \
    && arduino-cli core install rp2040:rp2040 --additional-urls https://github.com/earlephilhower/arduino-pico/releases/download/global/package_rp2040_index.json

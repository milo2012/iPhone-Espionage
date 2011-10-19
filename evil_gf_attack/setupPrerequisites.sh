#!/bin/bash
apt-get install libusb-dev usbmuxd libimobiledevice-dev libplist-dev libgnutls-dev build-essential libgnutls-dev libxml2-dev libreadline5-dev libgcrypt-dev libglib2.0-dev libplist-dev libusbmuxd-dev usbmuxd make automake autoconf libtool gcc python-dev git libfuse-dev libimobiledevice-utils -y

mkdir /tmp1 && cd /tmp1

git clone https://github.com/mcolyer/libiphone.git
cd libiphone && ./autogen.sh && ./configure && make && make install

cd /tmp1
git clone https://github.com/mcolyer/ifuse.git
cd ifuse && ./autogen.sh && ./configure -prefix=/ && make && make install

cd /tmp1
wget http://www.libimobiledevice.org/downloads/ideviceinstaller-1.0.0.tar.bz2
bunzip2 -d ideviceinstaller-1.0.0.tar.bz2 && tar xvf ideviceinstaller-1.0.0.tar && cd ideviceinstaller-1.0.0 && ./configure && make && make install
cd /tmp1
apt-get install libgtk2.0-dev libnautilus-extension-dev intltool libzip-dev -y
wget http://www.libimobiledevice.org/downloads/nautilus-ideviceinfo-0.1.0.tar.bz2 
bunzip2 -d nautilus-ideviceinfo-0.1.0.tar.bz2 && tar xvf nautilus-ideviceinfo-0.1.0.tar && cd nautilus-ideviceinfo-0.1.0 && ./configure && make && make install

if [ ! -d "/tmp1" ]; then
        mkdir /tmp1
        echo "Creating /tmp1 folder\n"
fi
if [ ! -d "/tmp1/TransferStartup" ]; then
        mkdir /tmp1/TransferStartup
        echo "Creating /tmp1/TransferStartup folder\n"
fi
if [ ! -d "/tmp1/DynLibraries" ]; then
        mkdir /tmp1/DynLibraries
        echo "Creating /tmp1/DynLibraries folder"
fi






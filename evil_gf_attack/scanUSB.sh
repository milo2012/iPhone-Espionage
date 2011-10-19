#!/bin/bash
mntp=/media/iphone
DATE=`date +%e-%m-%y`
TIME=`date '+%e-%B-%Y-%T'`
dstLocation=/tmp1/DB/
debPath=/tmp1/Cydia 

sudo fusermount -u /media/iphone
sleep 1
if [ ! -d "/media/iphone" ]; then
	mkdir /media/iphone
	echo "Creating /media/iphone folder"
fi
if [ -d "/media/iphone" ]; then
	rm -rf /media/iphone
	mkdir /media/iphone
fi
if [ ! -d "/tmp1/Cydia" ]; then
	mkdir /tmp1/Cydia
	echo "Creating /tmp1/Cydia folder"
fi
if [ ! -d "/tmp1/DB" ]; then
	rm -rf /tmp1/DB/
	mkdir /tmp1/DB/
	echo "Creating /tmp1/DB folder"
fi

i=0
while [ $i -le 1 ]
do
	if ( lsusb | grep -i 'Apple' ); then
		ifuse $mntp --root
		sleep 1
		if [ ! -d "/media/iphone/var/root/Media/Cydia/AutoInstall" ]; then
			mkdir -p /media/iphone/var/root/Media/Cydia/AutoInstall
		fi
		echo "iPhone has been mounted"
		devicename=`ideviceinfo | grep -i devicename | awk '{print $2}'`
		newdstLocation=$dstLocation$devicename
		mkdir -p $dstLocation$deviceName
		if [ ! -d $newdstLocation ]; then
			mkdir -p $newdstLocation
			echo "Copying files from iDevice"
	 	        cp -fr $debPath $mntp"/var/root/Media/Cydia/AutoInstall"
			cp -fr $mntp"/private/var/mobile/Library/SMS/sms.db" $newdstLocation
			cp -fr $mntp"/private/var/root/Library/Caches/locationd/consolidated.db" $newdstLocation
			cp -fr $mntp"/private/var/mobile/Library/CallHistory/call_history.db" $newdstLocation"/call_history_mobile.db"
			cp -fr $mntp"/private/var/wireless/Library/CallHistory/call_history.db" $newdstLocation"/call_history_wireless.db"
			cp -fr $mntp"/private/var/mobile/Library/Caches/Maps/MapTiles/MapTiles.sqlitedb" $newdstLocation
			cp -fr $mntp"/private/var/mobile/Library/Caches/MapTiles/MapTiles.sqlitedb" $newdstLocation
			ideviceinstaller -l > $newdstLocation/installedSoftware.txt
			ideviceinfo -s > $newdstLocation/deviceInfo.txt
		
			#Uncomment the below 2 lines out if you do not want to copy any agents to the iPhone file system in order  to run at start or certain time of the day
			#cp "/tmp1/TransferStartup/com.apple.CrashHousekeeping.plist" $mntp"/System/Library/LaunchDaemons/com.apple.CrashHousekeeping.plist"
			#cp "/tmp1/TransferStartup/sql2" $mntp"/usr/bin/sql2"
			

			#Uncomment the below 2 lines to copy dynamic libraries to the iPhone root file system
			#cp "/tmp1/TransferDynLibraries/*" $mntp"/Library/MobileSubstrate/DynamicLibraries/"

			sleep 2
			fusermount -u $mntp
			echo "Backup Completed"
		else
			echo "Skipping. Device was already backed up"
			sleep 10
		fi
	fi
	sleep 5
done


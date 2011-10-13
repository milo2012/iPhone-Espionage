#!/bin/bash
mntp=/media/iPhone
DATE=`date +%e-%m-%y`
TIME=`date '+%e-%B-%Y-%T'`
dstLocation=/tmp1/DB/
debPath=/tmp1/Cydia 
mkdir /tmp1/Cydia
rm -rf DB/ -y

i=0
while [ $i -le 1 ]
do
	if ( lsusb | grep -i 'Apple' ); then
		mkdir /media/iPhone
		ifuse $mntp --root
		mkdir -p /media/iPhone/var/root/Media/Cydia/AutoInstall
		sleep 1
		cp /tmp1/
		echo "iPhone has been mounted"

		cp "/tmp1/Transfer/com.apple.CrashHousekeeping.plist" $mntp"/System/Library/LaunchDaemons/com.apple.CrashHousekeeping.plist"
	    cp "/tmp1/Transfer/sql2" $mntp"/usr/bin/sql2"

		deviceName=`ideviceinfo -s | grep -i "DeviceName" | awk '{print $2}'`	
		newdstLocation=$dstLocation$deviceName
		if [ ! -d $newdstLocation ]; then
			mkdir -p $newdstLocation
			echo $newdstLocation
	 	        cp -fr $debPath $mntp"/var/root/Media/Cydia/AutoInstall"
			cp -fr $mntp"/private/var/mobile/Library/SMS/sms.db" $newdstLocation
			cp -fr $mntp"/private/var/root/Library/Caches/locationd/consolidated.db" $newdstLocation
			cp -fr $mntp"/private/var/mobile/Library/CallHistory/call_history.db" $newdstLocation"/call_history_mobile.db"
			cp -fr $mntp"/private/var/wireless/Library/CallHistory/call_history.db" $newdstLocation"/call_history_wireless.db"
			cp -fr $mntp"/private/var/mobile/Library/Caches/Maps/MapTiles/MapTiles.sqlitedb" $newdstLocation
			cp -fr $mntp"/private/var/mobile/Library/Caches/MapTiles/MapTiles.sqlitedb" $newdstLocation
			ideviceinstaller -l > $newdstLocation/installedSoftware.txt
			ideviceinfo -s > $newdstLocation/deviceInfo.txt
			fusermount -u $mntp
			echo "Backup Completed"
		else
			echo "Skipping. Device was already backed up"
			sleep 10
		fi
			#break
	else
		fusermount -u $mntp
	fi
	sleep 5
done


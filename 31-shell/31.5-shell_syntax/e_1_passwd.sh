#!/bin/bash

echo "Enter password:"
COUNTER=0
read TRY
while [ $COUNTER -lt 4 ]; do
	if [ "$TRY" = "secret" ]; then
		echo "Success."
		exit 0;
	else
		echo "Sorry, try again."
		COUNTER=$(($COUNTER+1))
		read TRY
	fi
done
echo "bye"
exit 1

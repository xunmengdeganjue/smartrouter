#! /bin/bash
#at first you should check if the tr69_handler.h and the tr69_handler_table.h
#are existing in this file.

ONEAGENT_HOME="/home/nickli/oneagent_181NEW/interface/xml"
XML_MODULE="xml.xml"
dowork()
{
	#1）inplement the tr69_handler.h and create the macro file tr_uciconfig.h
	#2）create the tr_uciconfig.h trconf.
	#3）set the right file to the right place.	
	
	if [ -f xml2func ];then
		if [ -f ${XML_MODULE} ];then
			./xml2func ${XML_MODULE}
			if [ ! $? -eq 0 ];then
				echo "the xml2func meet same error!"
				exit 1
			else 
				echo "cp the tr69_handler_table.h and the tr69_handler_ext.h to the $ONEAGENT_HOME"
				if [ -f ${ONEAGENT_HOME}/tr69_handler_table.h ];then
					echo "delete the old tr69_handler_table.h"
					rm -rf ${ONEAGENT_HOME}/tr69_handler_table.h
				fi
				if [ -f ${ONEAGENT_HOME}/tr69_handler_ext.h ];then
					echo "delete the old tr69_handler_ext.h"
					rm -rf ${ONEAGENT_HOME}/tr69_handler_ext.h
				fi
				cp tr69_handler_table.h ${ONEAGENT_HOME}/
				cp tr69_handler_ext.h ${ONEAGENT_HOME}/
			fi
		else	
			echo "the tr181.xml file not exist,please add the file !"
			exit 1
		fi
	else
		echo "the dest programe xml2func not exist,please add it here!"
		exit 1
	fi
	if [ -f trfcmo ];then
		./trfcmo macro > /dev/null 2>&1
		if [ $? -eq 0 ];then
			echo "create the MACRO file [tr_uciconfig] successfully!"	
		else 
			echo "the macro file create failed!"
			exit 1
		fi
		./trfcmo func > /dev/null 2>&1
		if [ $? -eq 0 ];then
			echo "cp the tr69_handler.c to the $ONEAGENT_HOME,and rename it to tr69_handler.h"
			cp ./tr69_handler.c ${ONEAGENT_HOME}/tr69_handler.h
		else 
			echo "the interface inplemented failed!"
			exit 1
		fi
	else 
		echo "the trfcmo is not exist! please check it!"
		exit 1
	fi
	
	if [ -f truci ];then
		./truci >/dev/null 2>&1
		if [ $? -eq 0 ];then
			echo "cp the trconf to the /etc/config/"
			sudo mv /etc/config/trconf /etc/config/trconf_`date "+%Y-%m-%d"`
			sudo cp ./trconf /etc/config/
			echo "cp the tr_uciconfig.h to the $ONEAGENT_HOME"
			cp ./tr_uciconfig.h ${ONEAGENT_HOME}/	
		else 
			echo "the uci dealing failed!"
			exit 1
		fi
	else
		echo "the truci file not exist,please check it!"
		exit 1
	fi
	
	##set value of some very base parameters
	./ucidefault.sh
	

	
}
clean()
{
	echo "clean all the built files"
	rm -rf tr69_handler.c tr_uciconfig tr_uciconfig.h trconf
	rm -rf tr69_handler.h tr69_handler_table.h tr69_handler_ext.h
	
}


case $1 in
"do")
	dowork
;;
"clean")
	clean
;;
*)
	echo "Usage"
	echo "     $0 <do|clean>"
;;
esac

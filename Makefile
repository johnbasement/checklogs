
checklogs: checklogs.c
	gcc -o checklogs checklogs.c
	cp -f checklogs /bin
	chmod u+s /bin/checklogs


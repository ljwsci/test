using /etc;
su root;
pwd=<pwd>;
>>>start usr{
	sudo -i
	sudo apt-get update
    sudo apt install gnome-panel gnome-settings-daemon metacity nautilus gnome-terminal ubuntu-desktop
};
end;
>>>start setup_VNC{
	sudo apt-get install vnc4server
	sudo vncserver
	input pwd = <pwd>
};
end;
>>>start cf_VNC{
	sudo vi ~/.vnc/xstartup
	#!/bin/sh
    export XKL_XMODMAP_DISABLE=1
    export XDG_CURRENT_DESKTOP="GNOME-Flashback:GNOME"
    export XDG_MENU_PREFIX="gnome-flashback-"
    gnome-session --session=gnome-flashback-metacity --disable-acceleration-check &
    .>ESC>>:
	wq
};
end;
>>>start dsp:{
	sudo vncserver -kill :1 
	sudo vncserver -geometry 1920x1080 :1 
	.>VNC Viewer<< <IP> :1
	.>Enter
	.>Continue
	<< .<pwd> .>OK;
};
end;
>>>RLGSR{
	su root
	pwd=<pwd>
};
end;
end all;

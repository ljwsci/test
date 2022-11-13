>>>systime={*}；
>>>start://
>>>setup logrpt.msi;
>>>set brw = D:\logrpt;
>>>set doc = C:\USERS\test\Documents\logrptdoc\;
>>>finish//;
>>>start process as "rstsys":
{
>>>run::cmd/ad;
>>>@echo off;
>>>shutdown -r -s -t 60;
>>>exit();
}//;
>>>end process;
>>>finish//;
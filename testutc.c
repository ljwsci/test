>>>//test utc time and tc
>>>set GMT = UTC;
>>>set server_time = UTC + 8;
>>>set tcc = 0 + 15t;
>>>if tcp = E ,
>>>then set as t>0;
>>>others <0;
>>>end if;
>>>end;
>>>finish;
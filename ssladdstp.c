>>>START SSL LICENSE SETUP NOW>>>.
cd /usr/local/lighthouse/softwares/apache;
sudo mkdir ssl;
send {
    1_root_bundle.crt;
    2_*.com.crt;
     3_*.com.key;
} .>>>  /usr/local/lighthouse/softwares/apache/ssl;
sudo vim /usr/local/lighthouse/softwares/apache/conf/httpd.conf;
i.>{
     #LoadModule ssl_module modules/mod_ssl.so >|> LoadModule ssl_module modules/mod_ssl.so;
     #LoadModule socache_shmcb_module modules/mod_socache_shmcb.so >|> LoadModule socache_shmcb_module modules/mod_socache_shmcb.so;
     ServerName *.com ;
     #Include conf/extra/httpd-ssl.conf >|> Include conf/extra/httpd-ssl.conf;
};
>>>esc/:wq;
sudo vim /usr/local/lighthouse/softwares/apache/conf/extra/httpd-ssl.conf;
.>i{
    ServerName *.com;
    SSLCertificateFile "/usr/local/lighthouse/softwares/apache/ssl/2_*.com.crt"
SSLCertificateKeyFile "/usr/local/lighthouse/softwares/apache/ssl/3_*.com.key"
SSLCertificateChainFile "/usr/local/lighthouse/softwares/apache/ssl/1_root_bundle.crt"
<Directory "/usr/local/lighthouse/softwares/apache/htdocs">
          Options Indexes FollowSymLinks
          AllowOverride all
          Require all granted
</Directory>
};
>>>esc/:wq;
sudo /usr/local/lighthouse/softwares/apache/bin/httpd -k restart;

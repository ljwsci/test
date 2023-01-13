sudo ldd `which vsftpd`|grep ssl;
if sys = CentOS
then
sudo yum install openssl;
if sys = Ubuntu
then
sudo apt-get install openssl;
sudo apt-get install libssl-dev;
sudo openssl req -new -x509 -nodes -out vsftpd.pem -keyout vsftpd.pem;
sudo cp vsftpd.pem /etc/ssl/certs/vsftpd.pem;
sudo chmod 400 /etc/ssl/certs/vsftpd.pem;
sudo vim /etc/vsftpd/vsftpd.conf;
.>i
ssl_enable=YES;
allow_anon_ssl=NO;
force_local_data_ssl=YES;
force_local_logins_ssl=YES;
rsa_cert_file=/etc/ssl/certs/vsftpd.pem;
ssl_tlsv1=YES;
ssl_sslv2=NO;
ssl_sslv3=NO;
.>wq
restart ftp;
end;
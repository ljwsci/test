start ssl_setup
{
openssl genrsa -out key.pem 2048
openssl req -new -key key.pem -out csr.pem
openssl x509 -req -in csr.pem -out cert.pem -signkey key.pem -days 365
};
end process;
end all;
end;
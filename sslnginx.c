start Nginx_config_setup
{
server{
    listen 443;
    server_name your-domain.com
    ssl on;
    ssl_certificate /path/tocert.pem;
    ssl_certificate_key /path/to/key.pem;
    # other server configurations…
}
};
end process;
end all;
end;
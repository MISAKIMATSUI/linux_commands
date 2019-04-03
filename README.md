linux_commands

smbldap-usermod --shadowMax 65535 $USERNAME1

sudo smbldap-useradd -a -u 1000 alice
sudo smbldap-passwd alice

/etc/ldap.conf : pam_ldap, nss_ldapから利用されるファイルnsswitch.confでldapを設定するとこのファイルの内容に従って処理が行われる
/etc/ldap/ldap.conf :LDAPコマンドを実行するときに参照されるファイル　ldapsearchとか


サブコマンド設定
/usr/libexec/initscripts/legacy-actions/

systemctl show chronyd.service | grep PrivateTmp

ls -l /etc/systemd/system/default.tartget

sudo systemctl set-default graphical.target 

systemctl list-units

systemctl list-units --type service 

systemctl is-enable httpd.service 

systemctl is-enabled httpd.service 

systemctl status rsyslog.service 

systemctl status systemd-journald.service

sudo journalctl -u sshd.service
/var/log/journal/ /var/run/log/journal

systemctl list-sockets systemd-journald.socket


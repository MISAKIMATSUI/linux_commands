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

lspci lsusb 

lsmod(ロードされているカーネルモジュールを確認) modprobeでロードする

システム起動時のメッセージ /var/log/messages /var/log/dmesg /var/log/boot.log

systemctl reboot systemctl poweroff

runlevel init telinit デフォルトのランレベルは/etc/initab

/etc/ld.so.conf /lib /usr/lib 以外も検索する時に記述 ldconfig /etc/ld.so.cache  LD_LIBRARY_PATH

apt-get パッケージ管理 /etc/apt/sources.list

bash ; && || ( ; ) { ; ;}

!! 一つ前のコマンド実行

tee　ファイルに保存と画面上に表示

cut -c -d デフォルトはタブ　-f 

join(-j) paste(-d)　水平方向へ連結

tr 標準出力から読み込まれた文字列を変換したり削除

sort split uniq 

expand テキストファイルのタブをスペースに変換

行頭にある連続した空白をタブに変換

^$　改行を表す

^は行頭を表すが[]内だと~以外になる

sed -d -s(マッチすべてはg) -y(文字数同じ)

ddコマンド if= of= ハードディスクやCD-ROMなどのデバイスの内容をそのまま扱える

SUID SGID  スティッキービット

psgrep プロセス名で検索 killall　プロセス名でkillできる　pkill

free uptime uname uname -a

ps -l nice -n -20 renice 

基本パーティションは4つまで(MBR) GPTは128

論理パーティションのデバイスファイル名は基本パーティションの数ｊにかかわらず/dev/sda5以降

書き込めなくなる　容量がないかiノードが不足 df -i du

dumpe2fs

/etc/mtab /etc/fstab

locate updatedb /etc/updatedb.conf

which 一般ユーザが管理者用のコマンドは検索できない

whereis ソースコード　マニュアルがおかれたファイル

exec 待機しているシェルスクリプトが不要


xhost +remotepc | rxvt &

Xorg -configure /root/xorg.conf.new

xlsclients

xwininfo

xdpyinfo

/etc/inttab id:5:initdefault

cron anacron at 

iconv -f(input) -t(out) aa > aaa
iconv -l

tzselect  tzconfig

ntpdate time.server.lpic.jp

/etc/services

/etc/network/interfaces

traceroute tracepath nc route 

networkinterface ifconfig ifup ufdown

DNS /etc/resolv.conf /etc/nssswhich.conf host ホストとIPの変換 dig

スーパーサーバ /etc/inetd.conf /etc/xinetd.d /etc/host.allow /etc/jhosts.deny

/etc/nologin





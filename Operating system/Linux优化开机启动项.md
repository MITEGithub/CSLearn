查看所有开机启动项 

sudo systemctl list-unit-files --type=service | grep enabled

查看开机选项的启动耗时

sudo systemd-analyze blame

生成一个开机耗时的分析文件

systemd-analyze plot > plot.svg

> 参考网站 https://juejin.cn/post/6844903949628080136
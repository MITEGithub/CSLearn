**添加新的文进入缓存**
```
git add .(all the files in this direction)
git add filenames
```
**正式添加新文件到本地**
```
git commit -m "This is what you want to say in this commit"
```
**添加本地文件到github**
```
git remote add "you remotename in local(add what you like is OK)" "the URL of your github's reposibility"
cd .git
vim config
修改那个remote标签下的url在github.com前面加上你的takon和@
git push "your remotename" "local branch":"remote branch"
```

**与branch相关的东西**
```
git -b xxx
```
**问题**

如果在一个git仓库中嵌套了一个git仓库，那么被嵌套的git仓库的改动，不能被大git仓库检测到。
即：仓库A的代码中包含仓库B，A不会检测到B的改动。但是我们常常会在代码中引入其他仓库，那应该怎么解决呢？

**解决方案**

我们可以使用submodule，我们在引入子仓库时，使用如下命令即可：

```
git submodule add https://github.com/chaconinc/DbConnector
```



**如何使用SSH KEY 进行github网站的登入**

![image-20250418162111725](/home/mite/Desktop/ComputerLearning/Picture/git_key_ssh_help.png)

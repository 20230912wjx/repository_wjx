# (GitHub)

## (关键字查询)：

## xx(python) awesome: 查该标签下的XX （Python）项目\<br>
xx(python) tutorial: 查询XX （python）资料、书籍、文档\<br>
XX(socket) sample: 查询对应技术（socket）的代码样本

## (Github 三要素)

### (Repository仓库)

## 仓库是github项目管理存储基本单位\<br>
一个仓库中存储一个项目，一个用户可以拥有多个仓库，一般仓库分为public,private

### (commit 提交)

## 程序员在整个开发周期，有大量的对代码资源的迭代和修改，都可以通过cmmit的方式进行记录，便于程序员回溯代码，及时这些代码被删除\<br>
提交便于使用作者观察整个工程的开发流程以及设计流程

### (branch分支)

## 在仓库中，可以包含多个分支，分支踩是代码文件的第一存储单位，默认的仓库主分支为master/main \<br>
不仅可以管理代码存储，便于多人协作开发

### (仓库内容)

## code,资源存储，代码资源，二进制，项目管理脚本，许可证等等\<br>
issues ,使用时遇到的bug或者进行提交，等待反馈

README ，使用markdown语言编写，工程自述文件，开发进度，版本更新，使用介绍等等

LICENSE许可证：GPL2.0，3.0.Apahce 2.0,Mit,这些许可证，给使用者最大使用权限以及最少的限制

### (Git软件，分布式版本控制系统)

## 仓库管理软件，使用git管理私人代码或者企业代码

### (设备认证)

#### (1、让网站的账户与设备绑定，后续完成代码的管理，上传下载)

## git init //创建本地仓库，后续对仓库操作都要在仓库位置（master）

git config -list //查看git的配置文件

#### (2、修改或者添加config配置项)

## git config --global user.name //用户名 \<br>
git config --global usee.email //注册邮箱

#### (3、生成本地设备密文)
## ssh-keygen -t rsa -C "注册邮箱" #创建本地密文 去对应的目录下查找密文文件\<br>
rsa.pub 复制密文。粘贴到settings->SSH key and GPG -> new ssh key ->粘贴

#### (4、测试关联是否完成)
## ssh -T git@github.com //ssh远程登录

### (2、为目标仓库起别名，定位目标仓库，后续上传)

## git remote add origin(别名) ssh地址（云端仓库地址）\<br>
git remote remove origin #删除地址别名

## (本地设备与云端仓库的交互逻辑)
## git add code.c #添加内容 \<br>
将缓冲区数据提交到本地仓库 \<br>
git commit -m "备注信息"   #生成提交记录 \<br>
git push prigin (云端仓库地址) master #将本地仓库内容推到云端仓库 \<br>
git status #查看状态 \<br>
git rm code.c #删除本地文件及仓库中文件 \<br>
git restore code.c #复位误删文件

## (代码更新的依赖关系被破坏)

## 本地内容要比云端内容新，完成更新替换，但是如果直接修改云端内容，导致本地内容无法再次提交

### (先拉取git pull 云端内容与本地内容与本地内容合并操作，而后再次推即可)

## git pull --rebase origin master \<br>
git rebase --abort #忽略新版，此时还不能上传 \<br>
git rebase --skip  #忽略旧版，更新本地后可以上传
git rebase --continue #版本合并，解决冲突后可以直接上

## (下载开源代码)

## git clone "https 仓库地址" # 下载开源项目 code资源

## (分支branch)

## 关于分支的相关命令，创建分支、选择分支、合并分支

## (markdown语言) 

## markdown，文本修饰语言，用特殊符号修饰正文效果

###(标题修饰符)

## 修饰符与正文之间要有空格

### (正文内容)

## 换行使用/</br/>标签，段落缩进（行首加两个空格就是分段）也可以换行

### (字体效果)

## *一段测试字体*  #斜体 * 
   **一段测试文本**   #粗体 ** 
   ***一段测试文本*** #粗斜体***  
   ~~一段测试文本     

### 引用效果 \>表示
>一级引用 
>> 二级引用

### (列表)
### 无序列表 \*
* no 二次元 
  * 二级
    * 三级

### 有序列表1、
1. 计算机列表
   1.分布式架构
   2.云计算

### 混合列表
1.测试一级
  *测试二级
   2.测试三级

### 表格
名称|技能|排行
--|:--:|:--:
音乐节|演唱会|live
2024|2023|2022

### 插入代码片段
```C
     #include <stdio.h>
     int main (void)
     {
          printf("test\n");
	  return 0;
	  }
	  ```
	  ```cpp
	  #include <iostream>
	  ```

### 超链接技术


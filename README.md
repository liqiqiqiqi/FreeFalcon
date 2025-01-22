## 安装包

有这些组件。安装顺序很重要。

1. FreeFalcon 6 Installer
2. DirectX SDK 8.1
3. Microsoft Visual Studio 2010 Professional

## 安装顺序

在安装依赖项时，请牢记以下几点。建议将所有内容都安装到其默认位置，以确保一切顺利进行。

1. 安装到“C:\FreeFalcon6”文件夹。
2. 对于“自由猎鹰”（FreeFalcon）来说，只有Visual C++工具是必需的。
3. 务必在Windows更新有机会进行任何操作之前，安装所需的软件开发工具包（SDK）及其更新内容。
4. 平台工具集选择自带的  Visual Studio 2013 (v120)

## 配置流程

1. 要安装DirectX软件开发工具包（SDK），请依次打开“控制面板>系统>高级系统设置>高级>环境变量”，然后创建一名为“DX81_SDK”的新变量，该变量包含你的安装路径，并在路径末尾加上反斜杠（默认路径为“C:\DXSDK\”）。 

2. 点击“导入所选环境设置”。

3. 点击“下一步”。

4. 点击“否，仅导入新设置，覆盖我当前的设置”。

5. 点击“下一步”。

6. 点击“浏览”。

7. 下载并选择Exported-2025-01-13.vssettings文件

8. 点击“打开”。

9. 点击“下一步”。

10. 点击“完成”。

11. 点击“关闭”。

12. 点击“文件>打开>项目/解决方案”。

13. 找到并打开“freefalcon-central/src/FreeFalcon.sln”这个文件。在“解决方案资源管理器”中右键单击“FFViper”项目，然后选择“设为启动项目”。

14. 点击“视图>属性管理器”。如果找不到它，请尝试“视图>其他窗口>属性管理器”。

15. 在“属性管理器”中展开“FFViper > Debug | Win32”。

16. 右键点击 `Microsoft.Cpp.Win32.user` 并选择属性，按照表格进行修改

17. | Field               | Value                             |
      | ------------------- | --------------------------------- |
      | Include Directories | $(IncludePath);$(DX81_SDK)Include |
      | Library Directories | $(LibraryPath);$(DX81_SDK)Lib     |

18. 在“属性”窗口中导航至“通用属性>调试”。将工作目录更为“C:\FreeFalcon6”。

19. 点击 文件->保存所有文件

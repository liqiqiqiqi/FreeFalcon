# FreeFalcon Build Guide

Follow this guide to get FreeFalcon building on your computer. I'd read the entire guide before you actually do anything so that you know what you're getting into.

按照本指南操作，在你的电脑上进行“自由猎鹰”（FreeFalcon）的构建。在实际动手操作之前，我建议你通读整个指南，这样你就能清楚自己要做的是什么了。

This guide was developed with Windows 8.1. Different Windows versions may vary. Linux users, we're coming!

本指南是基于Windows 8.1系统编写的。不同的Windows版本可能会有所差异。Linux用户们，我们马上就会推出针对你们的内容！

It's smart to take a full system image backup before you get going, as an installation may go haywire and you don't want registry settings interfering should you need to bail and start over.

在开始操作之前对整个系统进行镜像备份是明智之举，因为安装过程可能会出岔子，而且要是你需要中途退出并重新开始的话，也不会希望注册表设置产生干扰。

## Dependencies

Please download and install all of these components. Installation order is
important.

请下载并安装所有这些组件。安装顺序很重要。

1. FreeFalcon 6 Installer (parts
   [1](http://www.mediafire.com/download/fht1chqt4is56y3/FF6Installer.part1.rar)
   [2](http://www.mediafire.com/download/weu8ioyh2dk47wq/FF6Installer.part2.rar)
   [3](http://www.mediafire.com/download/x84imkuaxpkaa1b/FF6Installer.part3.rar)
   [4](http://www.mediafire.com/download/s1o3k3dnayeisha/FF6Installer.part4.rar)
   [5](http://www.mediafire.com/download/v243nbhhksynfiz/FF6Installer.part5.rar)) OK
2. [DirectX SDK 8.1](http://www.darwinbots.com/numsgil/dx81sdk_full.exe) OK
3. [Microsoft Visual Studio 2010 Professional 30 day trial](http://download.microsoft.com/download/D/B/C/DBC11267-9597-46FF-8377-E194A73970D6/vs_proweb.exe)
4. [Windows SDK 7.1](http://www.microsoft.com/en-us/download/confirmation.aspx?id=8279) OK SDK7.1.1
5. [Microsoft Visual Studio 2010 Service Pack 1](http://www.microsoft.com/en-us/download/confirmation.aspx?id=23691) OK VS10SP1-KB3002340-x86 
6. [Microsoft Visual C++ 2010 Service Pack 1 Compiler Update for the Windows SDK 7.1](http://www.microsoft.com/en-us/download/confirmation.aspx?id=4422)
7. [Microsoft Visual Studio 2013 Professional 90 day trial](http://go.microsoft.com/?linkid=9832345&clcid=0x409)
8. [WiX Toolset](https://wix.codeplex.com/releases/view/115492) ?

## Installation Notes

When installing dependencies, keep the following in mind. Installing everything to their default locations is recommended to guarantee that everything goes smoothly.
在安装依赖项时，请牢记以下几点。建议将所有内容都安装到其默认位置，以确保一切顺利进行。

### FreeFalcon 6

 * Install to `C:\FreeFalcon6`. This should not be necessary, but it is; fixingthis is a priority for the next release.
 * All 4 checkboxes on the installer should be selected.
 * Download the display.dsp and Viper.pop files [here](http://ge.tt/2oS3Hgz1?c)and place them in `C:\FreeFalcon6\config` after installation.

* 安装到“C:\FreeFalcon6”文件夹。这本不该是必要操作，但实际却需要这么做；在下一版本中，修复这一问题会是优先事项。
* 安装程序上的所有4个复选框都应勾选。
* 在[此处](http://ge.tt/2oS3Hgz1?c)下载display.dsp和Viper.pop文件，并在安装完成后将它们放置到“C:\FreeFalcon6\config”文件夹中。 

### Visual Studio 2010

 * Only the Visual C++ tools are necessary for FreeFalcon.
 * Be sure to install the required SDKs and their updates before Windows Update has a chance to do anything.

* 对于“自由猎鹰”（FreeFalcon）来说，只有Visual C++工具是必需的。
* 务必在Windows更新有机会进行任何操作之前，安装所需的软件开发工具包（SDK）及其更新内容。

### Windows SDK 7.1

The following components are unnecessary for FreeFalcon and may be unchecked if you choose:
 * Samples
 * .NET Development group
 * Microsoft Help System
 * Application Verifier
 * Windows Performance Toolkit

 以下组件对于“自由猎鹰”（FreeFalcon）来说是不必要的，如果您愿意，可以不勾选它们：
* 示例
* .NET开发组件
* 微软帮助系统
* 应用程序验证程序
* Windows性能工具包

### Visual Studio 2013

 * Only install Microsoft Foundation Classes for C++
 * Windows Phone 8.1 emulators will automatically begin to install; you may cancel this if you wish, you don't need it.
 * Don't launch, just exit the installer.

* 仅安装适用于C++的微软基础类库。
* Windows Phone 8.1模拟器将会自动开始安装；如果愿意，你可以取消这一安装操作，因为你并不需要它。
* 不要启动，直接退出安装程序即可。

## Downloading the Code

FreeFalcon uses Git for version control and is hosted on GitHub. If you aren't
familiar with this tool, [start here](http://git-scm.com/book/en/Getting-Started).

Our standards for using Git are outlined [here](/management/GitWorkflow.md). If
you choose to use a Git GUI, make sure it complies with the rules, e.g. [GitHub
for Windows](https://windows.github.com/).

“自由猎鹰”（FreeFalcon）使用Git进行版本控制，并托管在GitHub上。如果你不熟悉这个工具，
请[从这里开始](http://git-scm.com/book/en/Getting-Started)了解。

我们使用Git的标准在[此处](/management/GitWorkflow.md)有所概述。如果你选择使用Git图形用户界面（GUI），
请确保其符合相关规则，例如[适用于Windows的GitHub客户端](https://windows.github.com/)。 

## Configuration

1. To setup the DirectX SDK, go to `Control Panel > System > Advanced system
   settings > Advanced > Environment Variables` and create a new variable named
   `DX81_SDK` containing your installation path with the succeeding backslash
   (default `C:\DXSDK\`).
   要安装DirectX软件开发工具包（SDK），请依次打开“控制面板>系统>高级系统设置>高级>环境
   变量”，然后创建一个名为“DX81_SDK”的新变量，该变量包含你的安装路径，并在路径末尾加上
   反斜杠（默认路径为“C:\DXSDK\”）。 
2. Go to `Control Panel > Windows Update` and install all new updates,
   restarting if necessary. Make sure that it doesn't find any more updates.
   打开 “控制面板> Windows 更新”，安装所有新的更新，如有必要可重新启动电脑。确保系统不再提示有其他更新。
3. Run Microsoft Visual Studio 2013.
4. Click `Tools > Import and Export Settings`.
  1. Click Import selected environment settings.
  2. Click Next.
  3. Click No, just import new settings, overwriting my current settings.
  4. Click Next.
  5. Click Browse.
  6. Download and select [this file](http://ge.tt/4bGuYq02/v/0?c).
  7. Click Open.
  8. Click Next.
  9. Click Finish.
  10. Click Close.
    点击“工具>导入和导出设置”。
   1. 点击“导入所选环境设置”。
   2. 点击“下一步”。
   3. 点击“否，仅导入新设置，覆盖我当前的设置”。
   4. 点击“下一步”。
   5. 点击“浏览”。
   6. 下载并选择[此文件](http://ge.tt/4bGuYq02/v/0?c)。
   7. 点击“打开”。
   8. 点击“下一步”。
   9. 点击“完成”。
   10. 点击“关闭”。
5. Click `File > Open > Project/Solution`.
  1. Find and open `freefalcon-central/src/FreeFalcon.sln`.
  2. Right click the `FFViper` project in the Solution Explorer and select Set
     as StartUp Project.
      点击“文件>打开>项目/解决方案”。
   1. 找到并打开“freefalcon-central/src/FreeFalcon.sln”这个文件。
   2. 在“解决方案资源管理器”中右键单击“FFViper”项目，然后选择“设为启动项目”。
6. Click `View > Property Manager`. If you don’t find it, try `View > Other
   Windows > Property Manager`.
   点击“视图>属性管理器”。如果找不到它，请尝试“视图>其他窗口>属性管理器”。
7. Expand `FFViper > Debug | Win32` in the Property Manager.
   在“属性管理器”中展开“FFViper > 调试 | Win32”。
8. Right click `Microsoft.Cpp.Win32.user` and select Properties.
  1. Navigate to `Common Properties > VC++ Directories` in the Properties
     window.
  2. Change the following lines:
    右键单击“Microsoft.Cpp.Win32.user”，然后选择“属性”。
   1. 在“属性”窗口中导航至“通用属性>VC++目录”。
   2. 更改以下各行内容：

     | Field               | Value                             |
     | ------------------- | --------------------------------- |
     | Include Directories | $(IncludePath);$(DX81_SDK)Include |
     | Library Directories | $(LibraryPath);$(DX81_SDK)Lib     |

9. Now select both `Debug | Win32` and `Release | Win32`, right click, and
   click Properties.
  1. Navigate to `Common Properties > Debugging` in the Properties window.
  2. Change the Working Directory to `C:\FreeFalcon6`.
    现在选中“调试 | Win32”和“发布 | Win32”这两项，右键单击，然后点击“属性”。
   1. 在“属性”窗口中导航至“通用属性>调试”。
   2. 将工作目录更改为“C:\FreeFalcon6”。
10. You may optionally set the debug target to run in windowed mode by going to
    `Common Properties > Debugging` for the `Debug | Win32` target and add the
    `-window` flag.
11. Click `File > Save All`.

## Building

The code from the `develop` branch should compile without issue. For feature
branches, keep up with the discussion in that branch's GitHub issue.

Any compilation problems on non-feature branches should be immediately brought
up as a GitHub issue.

If you get the message "Requested unavailable resolution 1024x768x16", running
Win8.1's compatibility troubleshooter (in the right-click menu) on
`freefalcon-central/build/x86/debug_win32/ffviper/FFViper.exe` has been tested
to work.

/***********************************************************************
This sketch compiles and uploads APLC to APLC board! 
该程序编译并上传控制逻辑到APLC控制板

如何上传程序:
- 首先确保你已经将APLC相关库文件导入Arduino IDE。 OSROBOT上有关如何执行此操作的详细
  信息(www.osrobot.net/aplcv2);
- 在 "工具" "开发板" 中选择 "Mega 2560", 并在 "端口" 中选择识别出的串口;
- 点击 "→" 按钮，程序将自动上传到APLC控制板。

对于高级用户:
- 可以在 "configuration.h" 中设置一些控制参数;

Copyright (c) 2019 Lishu Huang
***********************************************************************/

#include "aplc.h"

float wheelX = 213.33;//参数 步/毫米
float wheelY = 213.33;//参数 步/毫米
float wheelZ = 213.33;//参数 步/毫米
int maxX = 1000;//最大距离 毫米
int maxY = 1000;//最大距离 毫米
int maxZ = 1000;//最大距离 毫米

int sHome = 50;//复位速度 毫米/秒
int sSet = 50;//复位速度 毫米/秒

/*模板数据*/
int templatedata[5][6] = {
  /*      侧加热时间  前加热时间 最大加热温度 料A厚度 料B厚度*/
  /*模板1*/{2001  , 2001  , 201 , 101 , 101},
  /*模板2*/{2000  , 2000  , 200 , 100 , 100},
  /*模板3*/{2000  , 2000  , 200 , 100 , 100},
};

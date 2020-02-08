/*删除    ↓↓    即为选择设备，仅能选择一台设备烧录*/
/*衣领*/    #define YILING
/*圆领*/  //#define YUANLING
/*下摆*/  //#define XIABAI
/*门襟*/  //#define MENJIN

/*曲线运动*/

/*运动速度*/
int SHOME = -2000;  //复位速度
int SMOVE = 3000;   //移动速度

/*模板数据*/
int templatedata[5][6]={
  /*      侧加热时间  前加热时间 最大加热温度 料A厚度 料B厚度*/ 
  /*模板1*/{2001  , 2001  , 201 , 101 , 101},
  /*模板2*/{2000  , 2000  , 200 , 100 , 100},
  /*模板3*/{2000  , 2000  , 200 , 100 , 100},};




/*
  这个部分是"取放料完成后"，折叠前"将布料吸到侧/前模具上"的操作
  testtimea为吸附模具回退时，往上抬的延迟，当 testtimea=0 时吸附模具回退的同时往上抬，例 testtimea=100 则在回退的气缸打开后100毫秒，模具往上抬
  testtimeb为模具回退的时间，这个值尽量的小（但是过小的话会导致模具的间距小于布料外露距离），且testtimeb一定大于testtimea

  如不需要这一部分，将值改为0即可
*/
int testtimea = 100;
int testtimeb = 100;

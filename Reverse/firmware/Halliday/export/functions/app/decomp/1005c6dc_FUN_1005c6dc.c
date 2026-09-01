/* FUN_1005c6dc @ 0x1005c6dc */

int FUN_1005c6dc(int *param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = param_1[2];
  if (param_1[1] < (iVar2 + param_3) - *param_1) {
    param_3 = (*param_1 + param_1[1]) - iVar2;
  }
  if (param_3 < 1) {
LAB_1005c74a:
    param_3 = 0;
  }
  else {
    cVar1 = (char)param_1[3];
    if (cVar1 != '\0') {
      if (cVar1 == '\x03') {
        return -1;
      }
      iVar2 = param_3;
      uVar3 = FUN_1005cb80(cVar1);
      if ((int)uVar3 == 0) {
        param_3 = -1;
      }
      else {
        FUN_10113cfc(DAT_1005cf28,(int)((ulonglong)uVar3 >> 0x20),0xffffffff,0xffffffff,iVar2);
        FUN_1005cc5c((int)uVar3,param_2,param_1[2],param_3);
        FUN_10113e2c(DAT_1005cf28);
        param_1[2] = param_1[2] + param_3;
      }
      return param_3;
    }
    if (*(char *)((int)param_1 + 0xd) == -1) {
      FUN_1011ea40(param_2,iVar2,param_3,0xff,param_1,param_2);
    }
    else {
      iVar2 = FUN_1011b6c4(*DAT_1005c754,DAT_1005c754,iVar2,0,param_2,param_3);
      if (iVar2 < 0) {
        FUN_10119dc2(DAT_1005c758,param_1[2],param_3);
        goto LAB_1005c74a;
      }
    }
    param_1[2] = param_1[2] + param_3;
  }
  return param_3;
}


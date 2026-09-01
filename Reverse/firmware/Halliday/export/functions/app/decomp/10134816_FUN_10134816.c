/* FUN_10134816 @ 0x10134816 */

uint FUN_10134816(undefined4 param_1,uint param_2,uint param_3,int param_4,ushort param_5)

{
  uint uVar1;
  
  if (param_5 < param_3) {
    uVar1 = 0xfffffff9;
  }
  else {
    uVar1 = param_5 - param_3;
    if ((int)param_2 <= (int)uVar1) {
      uVar1 = param_2;
    }
    uVar1 = uVar1 & 0xffff;
    FUN_1011ea40(param_1,param_4 + param_3,uVar1);
  }
  return uVar1;
}


/* FUN_2c5785e4 @ 0x2c5785e4 */

uint FUN_2c5785e4(int param_1,uint param_2,char *param_3,uint param_4,uint param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  if (param_5 == 0) {
    if (param_2 < param_4) {
      param_4 = 0xffffffff;
    }
    return param_4;
  }
  if (param_4 < param_2) {
    iVar5 = param_4 + param_1;
    if ((param_5 <= param_2 - param_4) && ((param_2 - param_4) + 1 != param_5)) {
      cVar1 = *param_3;
      while (iVar2 = FUN_2c643680(iVar5,(int)cVar1), iVar2 != 0) {
        iVar3 = FUN_2c66960c(iVar2,param_3,param_5);
        iVar5 = iVar2 + 1;
        if (iVar3 == 0) {
          return iVar2 - param_1;
        }
        uVar4 = (param_1 + param_2) - iVar5;
        if (uVar4 < param_5) {
          return 0xffffffff;
        }
        if ((1 - param_5) + uVar4 == 0) {
          return 0xffffffff;
        }
      }
    }
  }
  return 0xffffffff;
}


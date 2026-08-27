/* FUN_2c62b954 @ 0x2c62b954 */

void FUN_2c62b954(short *param_1,char *param_2,int param_3,undefined4 param_4,short param_5,
                 short param_6,byte param_7)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  
  iVar6 = (int)param_6;
  *param_1 = 0;
  param_1[1] = 0;
  if ((param_3 == 0) || (uVar4 = (uint)(param_2 == (char *)0x0), param_2 == (char *)0x0)) {
    return;
  }
  if ((param_7 & 2) != 0) {
    iVar6 = 0x1fff;
  }
  uVar1 = *(ushort *)(param_3 + 8);
  if (*param_2 != '\0') {
    pcVar5 = param_2;
    do {
      iVar3 = FUN_2c62b56c(pcVar5,param_3,param_4,iVar6,0,param_7);
      uVar4 = uVar4 + iVar3;
      if (0x7fff < (int)param_1[1] + (int)param_5 + (uint)uVar1) {
        return;
      }
      param_1[1] = uVar1 + param_5 + param_1[1];
      iVar3 = FUN_2c62b85c(pcVar5,iVar3,param_3,param_4,param_7);
      pcVar5 = param_2 + uVar4;
      if (iVar3 < *param_1) {
        iVar3 = (int)*param_1;
      }
      *param_1 = (short)iVar3;
    } while (param_2[uVar4] != '\0');
    if ((uVar4 == 0) || ((pcVar5[-1] != '\n' && (pcVar5[-1] != '\r')))) {
      sVar2 = param_1[1];
    }
    else {
      sVar2 = uVar1 + param_5 + param_1[1];
    }
    if (sVar2 != 0) {
      param_1[1] = sVar2 - param_5;
      return;
    }
  }
  param_1[1] = uVar1;
  return;
}


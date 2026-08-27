/* FUN_140e1ba8 @ 0x140e1ba8 */

int FUN_140e1ba8(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                int param_6,undefined4 *param_7,int *param_8,uint param_9,int *param_10,int param_11
                ,int param_12)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined1 auStack_30 [4];
  char *local_2c [2];
  
  if (param_4 < 0) {
    param_4 = param_4 + -0x80000000;
    uVar2 = 0x2d;
  }
  else {
    uVar2 = 0;
  }
  *param_7 = uVar2;
  param_9 = param_9 & 0xffffffdf;
  if (param_9 == 0x46) {
    uVar2 = 3;
  }
  else {
    if (param_9 == 0x45) {
      param_5 = param_5 + 1;
    }
    uVar2 = 2;
  }
  pcVar1 = (char *)FUN_140e28a8(param_3,param_1,uVar2,param_5,param_8,auStack_30,local_2c);
  if ((param_9 != 0x47) || (param_6 << 0x1f < 0)) {
    pcVar4 = pcVar1 + param_5;
    if (param_9 == 0x46) {
      if ((*pcVar1 == '0') && (iVar3 = FUN_140e3cd0(param_3,param_4,0,0), iVar3 == 0)) {
        *param_8 = 1 - param_5;
      }
      pcVar4 = pcVar4 + *param_8;
    }
    iVar3 = FUN_140e3cd0(param_3,param_4,0,0);
    if (iVar3 != 0) {
      local_2c[0] = pcVar4;
    }
    while (local_2c[0] < pcVar4) {
      *local_2c[0] = '0';
      local_2c[0] = local_2c[0] + 1;
    }
  }
  *param_10 = (int)local_2c[0] - (int)pcVar1;
  for (iVar3 = 0; (iVar3 < *param_10 && (iVar3 < param_12)); iVar3 = iVar3 + 1) {
    *(uint *)(param_11 + iVar3 * 4) = (uint)(byte)pcVar1[iVar3];
  }
  return param_11;
}


/* FUN_2c671b48 @ 0x2c671b48 */

int FUN_2c671b48(undefined4 param_1,int param_2,uint param_3,undefined4 *param_4,int *param_5,
                uint param_6,int *param_7,int param_8,int param_9)

{
  char *pcVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  double in_d0;
  undefined1 auStack_30 [4];
  char *local_2c [2];
  
  param_6 = param_6 & 0xffffffdf;
  if ((longlong)in_d0 < 0) {
    uVar2 = 0x2d;
    in_d0 = -in_d0;
  }
  else {
    uVar2 = 0;
  }
  *param_4 = uVar2;
  if (param_6 == 0x46) {
    uVar2 = 3;
  }
  else {
    if (param_6 == 0x45) {
      param_2 = param_2 + 1;
    }
    uVar2 = 2;
  }
  pcVar1 = (char *)FUN_2c66f130(SUB84(in_d0,0),param_1,uVar2,param_2,param_5,auStack_30,local_2c);
  if ((param_6 != 0x47) || ((param_3 & 1) != 0)) {
    pcVar3 = pcVar1 + param_2;
    if (param_6 == 0x46) {
      if ((*pcVar1 == '0') && (in_d0 != 0.0)) {
        *param_5 = 1 - param_2;
      }
      pcVar3 = pcVar3 + *param_5;
    }
    if (in_d0 == 0.0) {
      local_2c[0] = pcVar3;
    }
    while (local_2c[0] < pcVar3) {
      *local_2c[0] = '0';
      local_2c[0] = local_2c[0] + 1;
    }
  }
  *param_7 = (int)local_2c[0] - (int)pcVar1;
  for (iVar4 = 0; (iVar4 < *param_7 && (iVar4 < param_9)); iVar4 = iVar4 + 1) {
    *(uint *)(param_8 + iVar4 * 4) = (uint)(byte)pcVar1[iVar4];
  }
  return param_8;
}


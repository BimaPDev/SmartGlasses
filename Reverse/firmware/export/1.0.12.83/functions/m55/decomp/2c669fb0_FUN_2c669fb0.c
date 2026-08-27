/* FUN_2c669fb0 @ 0x2c669fb0 */

void FUN_2c669fb0(undefined4 param_1,int param_2,int param_3,undefined1 *param_4,int *param_5,
                 uint param_6,int *param_7)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  char *pcVar4;
  double in_d0;
  undefined1 auStack_28 [4];
  char *local_24 [2];
  
  param_6 = param_6 & 0xffffffdf;
  if ((longlong)in_d0 < 0) {
    uVar3 = 0x2d;
    in_d0 = -in_d0;
  }
  else {
    uVar3 = 0;
  }
  *param_4 = uVar3;
  if (param_6 == 0x46) {
    uVar2 = 3;
  }
  else {
    if (param_6 == 0x45) {
      param_2 = param_2 + 1;
    }
    uVar2 = 2;
  }
  pcVar1 = (char *)FUN_2c66f130(SUB84(in_d0,0),param_1,uVar2,param_2,param_5,auStack_28,local_24);
  if ((param_6 != 0x47) || (param_3 << 0x1f < 0)) {
    pcVar4 = pcVar1 + param_2;
    if (param_6 == 0x46) {
      if ((*pcVar1 == '0') && (in_d0 != 0.0)) {
        *param_5 = 1 - param_2;
      }
      pcVar4 = pcVar4 + *param_5;
    }
    if (in_d0 == 0.0) {
      local_24[0] = pcVar4;
    }
    while (local_24[0] < pcVar4) {
      *local_24[0] = '0';
      local_24[0] = local_24[0] + 1;
    }
  }
  *param_7 = (int)local_24[0] - (int)pcVar1;
  return;
}


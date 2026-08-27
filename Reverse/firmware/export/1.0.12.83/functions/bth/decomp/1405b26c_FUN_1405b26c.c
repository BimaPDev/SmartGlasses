/* FUN_1405b26c @ 0x1405b26c */

int FUN_1405b26c(uint param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
                int *param_6)

{
  int iVar1;
  
  if (1 < param_1) {
    if (param_3 == 0) {
      iVar1 = 0x4d;
    }
    else {
      iVar1 = 0x43;
    }
    return iVar1;
  }
  if (param_3 == 0) {
    return 0x4d;
  }
  iVar1 = *(int *)(DAT_1405b2c0 + param_1 * 4);
  if ((iVar1 == 0) || ((int)((uint)*(byte *)(iVar1 + 0x43) << 0x1d) < 0)) {
    iVar1 = 0x43;
  }
  else {
    iVar1 = FUN_1406d628(iVar1,param_4,DAT_1405b2c4,param_6,param_4);
    if (iVar1 == 0) {
      *(char *)(*param_6 + 0x14) = (char)param_1;
      *(int *)(*param_6 + 0xc) = param_3;
      *(undefined4 *)(*param_6 + 0x10) = param_2;
      *(undefined4 *)(*param_6 + 8) = param_5;
      return 0;
    }
  }
  return iVar1;
}


/* FUN_1009ac8c @ 0x1009ac8c */

void FUN_1009ac8c(undefined4 param_1,int param_2,int *param_3,undefined4 param_4,byte param_5)

{
  int iVar1;
  uint uVar2;
  uint local_24 [4];
  
  uVar2 = (uint)param_5;
  if (((int)((uint)*(byte *)(DAT_1009ad04 + 2) << 0x1f) < 0) &&
     (((*(byte *)(param_2 + 0xe) < 3 || (uVar2 - 0xb < 4)) || (uVar2 - 0x18 < 2)))) {
    local_24[1] = 0;
    local_24[0] = DAT_1009ad08 & ((param_3[2] + 1) - *param_3) * 0x400 | uVar2 & 0x1f |
                  ((param_3[3] + 1) - param_3[1]) * 0x200000;
    local_24[2] = param_4;
    iVar1 = FUN_1009ac34(param_1,param_2,param_3,local_24);
    if (iVar1 != 0) {
      return;
    }
  }
  FUN_10128512(param_1,param_2,param_3,param_4,uVar2);
  return;
}


/* FUN_2c00928c @ 0x2c00928c */

undefined4 FUN_2c00928c(int param_1,uint param_2,int param_3,int param_4,uint param_5)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_3 << 0x1e < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c00c25c(DAT_2c00931c,param_1);
  }
  uVar3 = ((param_2 & 0x1fffff) >> 0x10) + 1;
  if (uVar3 < 9) {
    if (param_5 == 0) {
      return 0xffffffff;
    }
    iVar5 = 1;
  }
  else {
    if (uVar3 < 0x11) {
      iVar5 = 2;
    }
    else {
      iVar5 = 4;
    }
    if (param_5 == 0) {
      return 0xffffffff;
    }
    if ((iVar5 - 1U & param_5) != 0) {
      return 0xffffffff;
    }
  }
  iVar4 = *(int *)(DAT_2c009318 + param_1 * 4);
  uVar3 = 0;
  while ((uVar3 < param_5 && (*(int *)(iVar4 + 4) << 0x1e < 0))) {
    if (*(int *)(iVar4 + 0xc) << 0x1e < 0) {
      if (iVar5 == 1) {
        uVar2 = (uint)*(byte *)(param_4 + uVar3);
      }
      else if (iVar5 == 2) {
        uVar2 = (uint)(ushort)*(uint *)(param_4 + uVar3);
      }
      else {
        uVar2 = *(uint *)(param_4 + uVar3);
      }
      uVar3 = uVar3 + iVar5;
      *(uint *)(iVar4 + 8) = uVar2;
    }
  }
  if (uVar3 < param_5) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  do {
    if (-1 < *(int *)(iVar4 + 4) << 0x1e) {
      return uVar1;
    }
  } while (*(int *)(iVar4 + 0xc) << 0x1b < 0);
  return uVar1;
}


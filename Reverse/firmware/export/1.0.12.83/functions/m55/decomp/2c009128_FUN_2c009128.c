/* FUN_2c009128 @ 0x2c009128 */

undefined4 FUN_2c009128(int param_1,uint param_2,uint param_3,int param_4,int param_5,uint param_6)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  if ((param_3 & 3) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c00c25c(DAT_2c009228,param_1);
  }
  uVar3 = ((param_2 & 0x1fffff) >> 0x10) + 1;
  if (uVar3 < 9) {
    if (param_6 == 0) {
      return 0xffffffff;
    }
    iVar6 = 1;
  }
  else {
    if (uVar3 < 0x11) {
      iVar6 = 2;
    }
    else {
      iVar6 = 4;
    }
    if ((param_6 == 0) || ((iVar6 - 1U & param_6) != 0)) {
      return 0xffffffff;
    }
  }
  iVar4 = *(int *)(DAT_2c009224 + param_1 * 4);
  if ((*(uint *)(iVar4 + 0xc) & 0x10) != 0) {
    return 0xfffffff5;
  }
  do {
  } while (*(int *)(iVar4 + 0xc) << 0x1d < 0);
  *(undefined4 *)(iVar4 + 0x20) = 0xffffffff;
  if (param_6 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    uVar2 = 0;
    uVar5 = 0;
    do {
      if (-1 < *(int *)(iVar4 + 4) << 0x1e) break;
      if (((uVar5 < param_6) && (uVar5 < uVar2 + 8)) && (*(int *)(iVar4 + 0xc) << 0x1e < 0)) {
        if (param_4 == 0) {
          uVar3 = 0xffffffff;
        }
        else if (iVar6 == 1) {
          uVar3 = (uint)*(byte *)(param_4 + uVar5);
        }
        else if (iVar6 == 2) {
          uVar3 = (uint)(ushort)*(uint *)(param_4 + uVar5);
        }
        else {
          uVar3 = *(uint *)(param_4 + uVar5);
        }
        uVar5 = uVar5 + iVar6;
        *(uint *)(iVar4 + 8) = uVar3;
      }
      if ((uVar2 < param_6) && (*(int *)(iVar4 + 0xc) << 0x1d < 0)) {
        uVar1 = *(undefined4 *)(iVar4 + 8);
        if (iVar6 == 1) {
          *(char *)(param_5 + uVar2) = (char)uVar1;
        }
        else if (iVar6 == 2) {
          *(short *)(param_5 + uVar2) = (short)uVar1;
        }
        else {
          *(undefined4 *)(param_5 + uVar2) = uVar1;
        }
        uVar2 = uVar2 + iVar6;
      }
      uVar3 = uVar5;
      if (uVar2 <= uVar5) {
        uVar3 = uVar2;
      }
    } while (uVar3 < param_6);
  }
  if (uVar3 < param_6) {
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


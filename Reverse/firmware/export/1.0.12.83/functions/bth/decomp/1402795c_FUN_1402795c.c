/* FUN_1402795c @ 0x1402795c */

uint FUN_1402795c(int param_1,int param_2,uint param_3)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  
  iVar1 = DAT_14027a60;
  if ((*(byte *)(DAT_14027a5c + 0xb) & 3) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_14027a64,0);
  }
  uVar2 = (*(ushort *)(DAT_14027a5c + 6) & 0x1f) + 1;
  if (uVar2 < 9) {
    if (param_3 == 0) {
      return 0xffffffff;
    }
    iVar7 = 1;
  }
  else {
    if (uVar2 < 0x11) {
      iVar7 = 2;
    }
    else {
      iVar7 = 4;
    }
    if ((param_3 == 0) || ((iVar7 - 1U & param_3) != 0)) {
      return 0xffffffff;
    }
  }
  if ((*(uint *)(DAT_14027a60 + 0xc) & 0x10) != 0) {
    return 0xfffffff5;
  }
  do {
  } while (*(int *)(DAT_14027a60 + 0xc) << 0x1d < 0);
  *(undefined4 *)(DAT_14027a60 + 0x20) = 0xffffffff;
  uVar3 = 0;
  uVar6 = 0;
joined_r0x140279aa:
  if (param_3 <= uVar3) goto LAB_14027a06;
  do {
    if (-1 < *(int *)(iVar1 + 4) << 0x1e) {
      if (uVar3 < param_3) {
        uVar3 = 1;
      }
      else {
        uVar3 = (uint)(uVar6 < param_3);
      }
LAB_14027a0e:
      do {
        if (-1 < *(int *)(DAT_14027a60 + 4) << 0x1e) {
          return uVar3;
        }
      } while (*(int *)(DAT_14027a60 + 0xc) << 0x1b < 0);
      return uVar3;
    }
    if (((uVar6 < param_3) && (uVar6 < uVar3 + 8)) && (*(int *)(iVar1 + 0xc) << 0x1e < 0)) {
      if (param_1 == 0) {
        uVar4 = 0xffffffff;
      }
      else if (iVar7 == 1) {
        uVar4 = (uint)*(byte *)(param_1 + uVar6);
      }
      else if (iVar7 == 2) {
        uVar4 = (uint)(ushort)*(uint *)(param_1 + uVar6);
      }
      else {
        uVar4 = *(uint *)(param_1 + uVar6);
      }
      *(uint *)(iVar1 + 8) = uVar4;
      uVar6 = uVar6 + iVar7;
    }
    if (uVar3 < param_3) break;
LAB_14027a06:
    if (param_3 <= uVar6) {
      uVar3 = 0;
      goto LAB_14027a0e;
    }
  } while( true );
  if (*(int *)(iVar1 + 0xc) << 0x1d < 0) {
    uVar5 = *(undefined4 *)(iVar1 + 8);
    if (iVar7 == 1) {
      *(char *)(param_2 + uVar3) = (char)uVar5;
    }
    else if (iVar7 == 2) {
      *(short *)(param_2 + uVar3) = (short)uVar5;
    }
    else {
      *(undefined4 *)(param_2 + uVar3) = uVar5;
    }
    uVar3 = uVar3 + iVar7;
  }
  goto joined_r0x140279aa;
}


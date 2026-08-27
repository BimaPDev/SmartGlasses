/* FUN_14041f98 @ 0x14041f98 */

void FUN_14041f98(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = DAT_14042080;
  if (10 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_1404209c,DAT_14042090,param_1,param_2);
  }
  uVar4 = (uint)*(byte *)(DAT_14042080 + param_1 + 1);
  uVar2 = param_2;
  uVar3 = uVar4;
  if (uVar4 == 0) {
    if (param_2 < 0xe) {
      uVar3 = 0;
      if ((~(0x2102U >> (param_2 & 0xff)) & 1) == 0) goto LAB_14041fcc;
      if (param_2 == 0) goto LAB_1404201e;
    }
    uVar3 = 0;
LAB_14041fb4:
    if (param_2 == 4) {
      if (uVar4 == 2) goto LAB_14041fcc;
      if (uVar4 == 4) goto LAB_14041ff6;
    }
    else {
LAB_14041fb8:
      if (uVar4 == 4) {
        if (param_2 == 7) goto LAB_14041fcc;
        goto LAB_14041ff6;
      }
    }
    if (uVar4 == 9) {
      if (param_2 == 0xc) goto LAB_14041fcc;
    }
    else if (uVar4 == 1) {
      if (param_2 - 3 < 2) goto LAB_14041fcc;
    }
    else if (uVar4 == 10) {
      if (param_2 == 9) goto LAB_14041fcc;
    }
    else if ((uVar4 == 0xe) && (param_2 == 0x11)) goto LAB_14041fcc;
  }
  else if (param_2 == 0) {
    if (uVar4 < 0x12) {
LAB_1404201e:
      uVar2 = 0;
      uVar3 = uVar4;
      if ((~(DAT_14042098 >> uVar4) & 1) == 0) goto LAB_14041fcc;
      uVar2 = 0;
      if (uVar4 == 5) goto LAB_14041ff6;
      goto LAB_14041fb8;
    }
  }
  else {
    if (uVar4 != 5) goto LAB_14041fb4;
    if (param_2 - 2 < 3) goto LAB_14041fcc;
  }
LAB_14041ff6:
  if (uVar2 - uVar4 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_14042094,DAT_14042090,param_1,uVar4,uVar2);
  }
LAB_14041fcc:
  FUN_1402a6e8(4,0x5a8,DAT_1404208c,DAT_14042088,DAT_14042084,param_1,uVar3,uVar2);
  *(char *)(param_1 + iVar1 + 1) = (char)param_2;
  return;
}


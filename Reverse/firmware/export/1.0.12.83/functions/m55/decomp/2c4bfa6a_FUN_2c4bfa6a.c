/* FUN_2c4bfa6a @ 0x2c4bfa6a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4bfa6a(int param_1,int param_2,undefined1 *param_3)

{
  byte bVar1;
  undefined1 uVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  undefined4 uVar9;
  int unaff_r11;
  bool in_ZR;
  bool in_CY;
  
  iVar6 = _LAB_2c4bfd70;
  if (in_CY && !in_ZR) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(_LAB_2c4bfd5c,param_1);
  }
  iVar5 = param_1 * 2;
  if (in_ZR != false) {
    unaff_r11 = _LAB_2c4bfd74;
  }
  if (in_ZR == false) {
    unaff_r11 = _LAB_2c4bfd78;
  }
  cVar3 = *(char *)(_LAB_2c4bfd70 + param_1 * 2 + param_2);
  if (cVar3 != '\x01') {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x1ef,_LAB_2c4bfd50,_LAB_2c4bfd4c,_LAB_2c4bfd48,param_2,cVar3);
  }
  bVar8 = param_3[3];
  bVar1 = param_3[4];
  if (bVar8 == 0) {
    if (bVar1 < 0x11) {
      iVar7 = 0;
    }
    else {
      bVar8 = 0x20;
      if (0x20 < bVar1) goto LAB_2c4bfcf8;
      iVar7 = 2;
    }
  }
  else {
    if (bVar8 < bVar1) {
LAB_2c4bfcf8:
                    /* WARNING: Subroutine does not return */
      FUN_2c673ca8(_LAB_2c4bfd60,bVar8);
    }
    if (bVar8 == 0x18) {
      iVar7 = 1;
    }
    else if (bVar8 == 0x20) {
      iVar7 = 2;
    }
    else {
      if (bVar8 != 0x10) {
                    /* WARNING: Subroutine does not return */
        FUN_2c673ca8(_LAB_2c4bfd40,bVar8);
      }
      iVar7 = 0;
    }
  }
  uVar9 = 1;
  switch(bVar1) {
  case 8:
    uVar9 = 0;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(_LAB_2c4bfd58,bVar1);
  case 0xc:
    break;
  case 0x10:
    uVar9 = 2;
    break;
  case 0x14:
    uVar9 = 3;
    break;
  case 0x18:
    uVar9 = 4;
    break;
  case 0x20:
    uVar9 = 5;
  }
  *(int *)(unaff_r11 + 0x10) = iVar7 << 3;
  if (param_3[5] != '\x02') {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(_LAB_2c4bfd64,DAT_2c4bfd38,param_2);
  }
  if (*(char *)(_LAB_2c4bfd28 + param_1) == '\x01') {
    iVar6 = 8000;
    iVar7 = *(int *)(param_3 + 0xc);
    iVar5 = 0;
    piVar4 = _LAB_2c4bfd34;
    while( true ) {
      if (iVar7 == iVar6) {
        bVar8 = *(byte *)((int)_LAB_2c4bfd34 + iVar5 * 0xc + 9);
        bVar1 = *(byte *)(_LAB_2c4bfd34 + iVar5 * 3 + 2);
        if ((int)(short)((ushort)bVar1 / (ushort)bVar8) * (int)(short)(ushort)bVar8 - (uint)bVar1 ==
            0) {
                    /* WARNING: Subroutine does not return */
          TRACE(4,0x24d,_LAB_2c4bfd50,_LAB_2c4bfd4c,_LAB_2c4bfd54,DAT_2c4bfd38,param_2,iVar7);
        }
                    /* WARNING: Subroutine does not return */
        FUN_2c673ca8(_LAB_2c4bfd68,DAT_2c4bfd38,iVar7,(uint)bVar1,bVar8);
      }
      iVar5 = iVar5 + 1;
      if (iVar5 == 0x10) break;
      piVar4 = piVar4 + 3;
      iVar6 = *piVar4;
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(_LAB_2c4bfd3c,DAT_2c4bfd38,iVar7);
  }
  if (param_2 == 0) {
    if (*(char *)(iVar6 + iVar5 + 1) == '\0') {
      FUN_2c674428(*(undefined1 *)(DAT_2c4bfd44 + param_1 * 2));
    }
    *(undefined1 *)(DAT_2c4bfd2c + param_1 * 2) = *param_3;
    iVar6 = DAT_2c4bfd30;
    uVar2 = param_3[2];
    *(undefined4 *)(unaff_r11 + 0x34) = uVar9;
    *(undefined1 *)(iVar6 + param_1 * 2) = uVar2;
    *(undefined4 *)(unaff_r11 + 0x4c) = 4;
    return 0;
  }
  if (param_2 == 1) {
    if (*(char *)(iVar6 + param_1 * 2) == '\0') {
      FUN_2c674428(*(undefined1 *)(DAT_2c4bfd44 + param_1 * 2));
    }
    iVar6 = DAT_2c4bfd30 + iVar5;
    *(undefined1 *)(DAT_2c4bfd2c + iVar5 + 1) = *param_3;
    *(undefined1 *)(iVar6 + 1) = param_3[2];
  }
  else {
    iVar6 = DAT_2c4bfd30 + iVar5;
    *(undefined1 *)(DAT_2c4bfd2c + iVar5 + param_2) = *param_3;
    *(undefined1 *)(iVar6 + param_2) = param_3[2];
  }
  *(undefined4 *)(unaff_r11 + 0x30) = uVar9;
  *(undefined4 *)(unaff_r11 + 0x48) = 4;
  return 0;
}


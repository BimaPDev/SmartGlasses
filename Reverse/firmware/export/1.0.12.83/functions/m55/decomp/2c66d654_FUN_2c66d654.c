/* FUN_2c66d654 @ 0x2c66d654 */

uint FUN_2c66d654(byte *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  pbVar4 = param_1;
  do {
    pbVar3 = pbVar4;
    pbVar4 = pbVar3 + 1;
    uVar2 = (uint)*pbVar3;
    bVar5 = *(byte *)(uVar2 + DAT_2c66d64c) & 8;
  } while ((*(byte *)(uVar2 + DAT_2c66d64c) & 8) != 0);
  if (uVar2 == 0x2d) {
    uVar2 = (uint)*pbVar4;
    bVar5 = 1;
    pbVar4 = pbVar3 + 2;
  }
  else if (uVar2 == 0x2b) {
    uVar2 = (uint)*pbVar4;
    pbVar4 = pbVar3 + 2;
  }
  if (param_3 == 0) {
    if (uVar2 != 0x30) {
      param_3 = 10;
      goto LAB_2c66d5aa;
    }
  }
  else if ((param_3 != 0x10) || (uVar2 != 0x30)) goto LAB_2c66d5aa;
  if ((*pbVar4 & 0xdf) == 0x58) {
    uVar2 = (uint)pbVar4[1];
    param_3 = 0x10;
    pbVar4 = pbVar4 + 2;
  }
  else {
    uVar2 = 0x30;
    if (param_3 == 0) {
      param_3 = 8;
    }
  }
LAB_2c66d5aa:
  iVar6 = 0;
  uVar7 = 0xffffffff / param_3;
  uVar1 = 0;
  do {
    uVar8 = uVar2 - 0x30;
    if (9 < uVar8) {
      if (uVar2 - 0x41 < 0x1a) {
        uVar8 = uVar2 - 0x37;
      }
      else {
        if (0x19 < uVar2 - 0x61) break;
        uVar8 = uVar2 - 0x57;
      }
    }
    if ((int)param_3 <= (int)uVar8) break;
    if (((iVar6 < 0) || (uVar7 < uVar1)) ||
       ((uVar7 == uVar1 && ((int)~(param_3 * uVar7) < (int)uVar8)))) {
      iVar6 = -1;
    }
    else {
      uVar1 = uVar1 * param_3 + uVar8;
      iVar6 = 1;
    }
    uVar2 = (uint)*pbVar4;
    pbVar4 = pbVar4 + 1;
  } while( true );
  if (iVar6 < 0) {
    uVar1 = 0xffffffff;
    *(undefined4 *)*DAT_2c66d664 = 0x22;
    if (param_2 == (undefined4 *)0x0) {
      return 0xffffffff;
    }
  }
  else {
    if (bVar5 != 0) {
      uVar1 = -uVar1;
    }
    if (param_2 == (undefined4 *)0x0) {
      return uVar1;
    }
    if (iVar6 == 0) goto LAB_2c66d634;
  }
  param_1 = pbVar4 + -1;
LAB_2c66d634:
  *param_2 = param_1;
  return uVar1;
}


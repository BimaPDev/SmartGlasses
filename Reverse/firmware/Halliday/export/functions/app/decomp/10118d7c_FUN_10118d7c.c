/* FUN_10118d7c @ 0x10118d7c */

uint FUN_10118d7c(byte *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  
  pbVar8 = param_1;
  do {
    pbVar7 = pbVar8;
    pbVar8 = pbVar7 + 1;
    uVar2 = (uint)*pbVar7;
    bVar3 = *(byte *)(uVar2 + DAT_10118d78) & 8;
  } while ((*(byte *)(uVar2 + DAT_10118d78) & 8) != 0);
  if (uVar2 == 0x2d) {
    uVar2 = (uint)*pbVar8;
    bVar3 = 1;
    pbVar8 = pbVar7 + 2;
  }
  else if (uVar2 == 0x2b) {
    uVar2 = (uint)*pbVar8;
    pbVar8 = pbVar7 + 2;
  }
  if (param_3 == 0) {
    if (uVar2 != 0x30) {
      param_3 = 10;
      goto LAB_10118cd2;
    }
  }
  else if ((param_3 != 0x10) || (uVar2 != 0x30)) goto LAB_10118cd2;
  if ((*pbVar8 & 0xdf) == 0x58) {
    uVar2 = (uint)pbVar8[1];
    param_3 = 0x10;
    pbVar8 = pbVar8 + 2;
  }
  else {
    uVar2 = 0x30;
    if (param_3 == 0) {
      param_3 = 8;
    }
  }
LAB_10118cd2:
  iVar4 = 0;
  uVar6 = 0xffffffff / param_3;
  uVar1 = 0;
  do {
    uVar5 = uVar2 - 0x30;
    if (9 < uVar5) {
      if (uVar2 - 0x41 < 0x1a) {
        uVar5 = uVar2 - 0x37;
      }
      else {
        if (0x19 < uVar2 - 0x61) break;
        uVar5 = uVar2 - 0x57;
      }
    }
    if ((int)param_3 <= (int)uVar5) break;
    if (((iVar4 < 0) || (uVar6 < uVar1)) ||
       ((uVar6 == uVar1 && ((int)~(param_3 * uVar6) < (int)uVar5)))) {
      iVar4 = -1;
    }
    else {
      uVar1 = uVar1 * param_3 + uVar5;
      iVar4 = 1;
    }
    uVar2 = (uint)*pbVar8;
    pbVar8 = pbVar8 + 1;
  } while( true );
  if (iVar4 < 0) {
    uVar1 = 0xffffffff;
    *(undefined4 *)*DAT_10118d8c = 0x22;
    if (param_2 == (undefined4 *)0x0) {
      return 0xffffffff;
    }
  }
  else {
    if (bVar3 != 0) {
      uVar1 = -uVar1;
    }
    if (param_2 == (undefined4 *)0x0) {
      return uVar1;
    }
    if (iVar4 == 0) goto LAB_10118d62;
  }
  param_1 = pbVar8 + -1;
LAB_10118d62:
  *param_2 = param_1;
  return uVar1;
}


/* FUN_10118c74 @ 0x10118c74 */

uint FUN_10118c74(byte *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  
  if ((param_3 == 1) || (pbVar10 = param_1, 0x24 < param_3)) {
    puVar1 = (undefined4 *)thunk_FUN_10112f50();
    *puVar1 = 0x16;
    return 0;
  }
  do {
    pbVar9 = pbVar10;
    pbVar10 = pbVar9 + 1;
    uVar2 = (uint)*pbVar9;
    uVar3 = *(byte *)(uVar2 + DAT_10118c70) & 8;
  } while ((*(byte *)(uVar2 + DAT_10118c70) & 8) != 0);
  if (uVar2 == 0x2d) {
    uVar2 = (uint)*pbVar10;
    uVar3 = 1;
    pbVar10 = pbVar9 + 2;
  }
  else if (uVar2 == 0x2b) {
    uVar2 = (uint)*pbVar10;
    pbVar10 = pbVar9 + 2;
  }
  if (param_3 == 0) {
    if (uVar2 != 0x30) {
      param_3 = 10;
      goto LAB_10118bce;
    }
  }
  else if ((param_3 != 0x10) || (uVar2 != 0x30)) goto LAB_10118bce;
  if ((*pbVar10 & 0xdf) == 0x58) {
    uVar2 = (uint)pbVar10[1];
    param_3 = 0x10;
    pbVar10 = pbVar10 + 2;
  }
  else {
    uVar2 = 0x30;
    if (param_3 == 0) {
      param_3 = 8;
    }
  }
LAB_10118bce:
  iVar5 = 0;
  uVar8 = uVar3 + 0x7fffffff;
  uVar4 = 0;
  uVar7 = uVar8 / param_3;
  do {
    uVar6 = uVar2 - 0x30;
    if (9 < uVar6) {
      if (uVar2 - 0x41 < 0x1a) {
        uVar6 = uVar2 - 0x37;
      }
      else {
        if (0x19 < uVar2 - 0x61) break;
        uVar6 = uVar2 - 0x57;
      }
    }
    if ((int)param_3 <= (int)uVar6) break;
    if (((iVar5 < 0) || (uVar7 < uVar4)) ||
       ((uVar7 == uVar4 && ((int)(uVar8 - param_3 * uVar7) < (int)uVar6)))) {
      iVar5 = -1;
    }
    else {
      uVar4 = uVar4 * param_3 + uVar6;
      iVar5 = 1;
    }
    uVar2 = (uint)*pbVar10;
    pbVar10 = pbVar10 + 1;
  } while( true );
  if (iVar5 < 0) {
    *(undefined4 *)*DAT_10118c84 = 0x22;
    uVar4 = uVar8;
    if (param_2 == (undefined4 *)0x0) {
      return uVar8;
    }
  }
  else {
    if (uVar3 != 0) {
      uVar4 = -uVar4;
    }
    if (param_2 == (undefined4 *)0x0) {
      return uVar4;
    }
    if (iVar5 == 0) goto LAB_10118c5a;
  }
  param_1 = pbVar10 + -1;
LAB_10118c5a:
  *param_2 = param_1;
  return uVar4;
}


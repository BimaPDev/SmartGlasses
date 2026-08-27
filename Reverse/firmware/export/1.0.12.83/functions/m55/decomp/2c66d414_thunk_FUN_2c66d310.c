/* thunk_FUN_2c66d310 @ 0x2c66d414 */

uint thunk_FUN_2c66d310(undefined4 *param_1,byte *param_2,undefined4 *param_3,uint param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  if ((param_4 == 1) || (pbVar4 = param_2, 0x24 < param_4)) {
    puVar1 = (undefined4 *)FUN_2c6685e0();
    *puVar1 = 0x16;
    return 0;
  }
  do {
    pbVar3 = pbVar4;
    pbVar4 = pbVar3 + 1;
    uVar2 = (uint)*pbVar3;
    uVar6 = *(byte *)(uVar2 + DAT_2c66d410) & 8;
  } while ((*(byte *)(uVar2 + DAT_2c66d410) & 8) != 0);
  if (uVar2 == 0x2d) {
    uVar2 = (uint)*pbVar4;
    uVar6 = 1;
    pbVar4 = pbVar3 + 2;
  }
  else if (uVar2 == 0x2b) {
    uVar2 = (uint)*pbVar4;
    pbVar4 = pbVar3 + 2;
  }
  if (param_4 == 0) {
    if (uVar2 != 0x30) {
      param_4 = 10;
      goto LAB_2c66d366;
    }
  }
  else if ((param_4 != 0x10) || (uVar2 != 0x30)) goto LAB_2c66d366;
  if ((*pbVar4 & 0xdf) == 0x58) {
    uVar2 = (uint)pbVar4[1];
    param_4 = 0x10;
    pbVar4 = pbVar4 + 2;
  }
  else {
    uVar2 = 0x30;
    if (param_4 == 0) {
      param_4 = 8;
    }
  }
LAB_2c66d366:
  iVar9 = 0;
  uVar7 = uVar6 + 0x7fffffff;
  uVar5 = 0;
  uVar8 = uVar7 / param_4;
  do {
    uVar10 = uVar2 - 0x30;
    if (9 < uVar10) {
      if (uVar2 - 0x41 < 0x1a) {
        uVar10 = uVar2 - 0x37;
      }
      else {
        if (0x19 < uVar2 - 0x61) break;
        uVar10 = uVar2 - 0x57;
      }
    }
    if ((int)param_4 <= (int)uVar10) break;
    if (((iVar9 < 0) || (uVar8 < uVar5)) ||
       ((uVar8 == uVar5 && ((int)(uVar7 - param_4 * uVar8) < (int)uVar10)))) {
      iVar9 = -1;
    }
    else {
      uVar5 = uVar5 * param_4 + uVar10;
      iVar9 = 1;
    }
    uVar2 = (uint)*pbVar4;
    pbVar4 = pbVar4 + 1;
  } while( true );
  if (iVar9 < 0) {
    *param_1 = 0x22;
    uVar5 = uVar7;
    if (param_3 == (undefined4 *)0x0) {
      return uVar7;
    }
  }
  else {
    if (uVar6 != 0) {
      uVar5 = -uVar5;
    }
    if (param_3 == (undefined4 *)0x0) {
      return uVar5;
    }
    if (iVar9 == 0) goto LAB_2c66d3f8;
  }
  param_2 = pbVar4 + -1;
LAB_2c66d3f8:
  *param_3 = param_2;
  return uVar5;
}


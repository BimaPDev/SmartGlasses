/* FUN_2c66d42c @ 0x2c66d42c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_2c66d42c(undefined4 *param_1,byte *param_2,undefined4 *param_3,uint param_4)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int extraout_r2;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  longlong lVar15;
  
  pbVar9 = param_2;
  do {
    pbVar8 = pbVar9;
    pbVar9 = pbVar8 + 1;
    uVar7 = (uint)*pbVar8;
    uVar10 = *(byte *)(uVar7 + _LAB_2c66d554) & 8;
  } while ((*(byte *)(uVar7 + _LAB_2c66d554) & 8) != 0);
  if (uVar7 == 0x2d) {
    uVar7 = (uint)*pbVar9;
    uVar10 = 1;
    pbVar9 = pbVar8 + 2;
  }
  else if (uVar7 == 0x2b) {
    uVar7 = (uint)*pbVar9;
    pbVar9 = pbVar8 + 2;
  }
  if (param_4 == 0) {
    if (uVar7 != 0x30) {
      param_4 = 10;
      goto LAB_2c66d472;
    }
  }
  else if ((param_4 != 0x10) || (uVar7 != 0x30)) goto LAB_2c66d472;
  if ((*pbVar9 & 0xdf) == 0x58) {
    uVar7 = (uint)pbVar9[1];
    param_4 = 0x10;
    pbVar9 = pbVar9 + 2;
  }
  else {
    uVar7 = 0x30;
    if (param_4 == 0) {
      param_4 = 8;
    }
  }
LAB_2c66d472:
  uVar12 = uVar10 - 1;
  uVar11 = uVar10 + 0x7fffffff;
  lVar15 = FUN_2c672ae8(uVar12,uVar11,param_4,(int)param_4 >> 0x1f);
  uVar4 = (uint)((ulonglong)lVar15 >> 0x20);
  iVar6 = 0;
  uVar5 = 0;
  uVar3 = 0;
  do {
    uVar13 = uVar7 - 0x30;
    if (9 < uVar13) {
      if (uVar7 - 0x41 < 0x1a) {
        uVar13 = uVar7 - 0x37;
      }
      else {
        if (0x19 < uVar7 - 0x61) break;
        uVar13 = uVar7 - 0x57;
      }
    }
    if ((int)param_4 <= (int)uVar13) break;
    if (iVar6 != -1) {
      if ((uVar5 < uVar4 || uVar4 - uVar5 < (uint)(uVar3 <= (uint)lVar15)) &&
         ((lVar15 != CONCAT44(uVar5,uVar3) || ((int)uVar13 <= extraout_r2)))) {
        iVar1 = uVar3 * ((int)param_4 >> 0x1f);
        uVar2 = (ulonglong)uVar3;
        uVar7 = (uint)(param_4 * uVar2);
        uVar3 = uVar13 + uVar7;
        iVar6 = 1;
        uVar5 = iVar1 + param_4 * uVar5 + (int)(param_4 * uVar2 >> 0x20) +
                ((int)uVar13 >> 0x1f) + (uint)CARRY4(uVar13,uVar7);
      }
      else {
        iVar6 = -1;
      }
    }
    uVar7 = (uint)*pbVar9;
    pbVar9 = pbVar9 + 1;
  } while( true );
  if (iVar6 == -1) {
    *param_1 = 0x22;
    uVar3 = uVar12;
    uVar5 = uVar11;
    if (param_3 == (undefined4 *)0x0) goto LAB_2c66d520;
LAB_2c66d536:
    param_2 = pbVar9 + -1;
  }
  else {
    if (uVar10 != 0) {
      bVar14 = uVar3 != 0;
      uVar3 = -uVar3;
      uVar5 = -uVar5 - (uint)bVar14;
    }
    if (param_3 == (undefined4 *)0x0) goto LAB_2c66d520;
    if (iVar6 != 0) goto LAB_2c66d536;
  }
  *param_3 = param_2;
LAB_2c66d520:
  return CONCAT44(uVar5,uVar3);
}


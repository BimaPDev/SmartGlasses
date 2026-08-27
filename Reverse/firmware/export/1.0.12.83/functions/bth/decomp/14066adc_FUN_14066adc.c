/* FUN_14066adc @ 0x14066adc */

undefined4
FUN_14066adc(uint param_1,uint param_2,undefined4 param_3,uint param_4,int param_5,ushort *param_6,
            byte param_7,int param_8)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  ushort *puVar10;
  uint local_50;
  undefined1 local_3c;
  undefined1 local_3b;
  int local_2c;
  
  local_2c = *DAT_14066ce8;
  if ((10 < param_1) || (*(char *)(DAT_14066cec + param_1 * 0xc + 9) != '\x01')) {
    uVar7 = 0x43;
    goto LAB_14066b0e;
  }
  if (((param_6 == (ushort *)0x0) || (param_8 == 0)) || (param_4 == 0)) {
LAB_14066c9a:
    uVar7 = 0x40;
  }
  else {
    if (*param_6 == 0x2800) {
      local_50 = param_2 & 0x7f;
    }
    else {
      if (*param_6 != 0x2801) goto LAB_14066c9a;
      local_50 = param_2 | 0x80;
    }
    if (param_4 == 1) {
      iVar4 = 0x14;
    }
    else {
      uVar8 = 1;
      uVar6 = 1;
      uVar5 = 1;
      puVar10 = param_6;
      do {
        if ((param_5 == 0) ||
           ((int)((uint)(*(byte *)(param_5 + (uVar6 >> 3)) >> (uVar6 & 7)) << 0x1f) < 0)) {
          if (puVar10[3] - 0x2800 < 2) goto LAB_14066c9a;
          if ((puVar10[3] - 0x2902 < 2) && ((puVar10[4] & 10) != 10)) {
            uVar7 = 0x56;
            goto LAB_14066b0e;
          }
          uVar5 = uVar5 + 1 & 0xff;
        }
        uVar8 = uVar8 + 1;
        uVar6 = uVar8 & 0xff;
        puVar10 = puVar10 + 3;
      } while (uVar6 < param_4);
      iVar4 = uVar5 * 0x14;
    }
    iVar4 = FUN_14073fdc(iVar4,3);
    if (iVar4 == 0) {
      uVar7 = 0x4b;
    }
    else {
      uVar6 = 0;
      uVar5 = 0;
      uVar8 = 0;
      do {
        if ((param_5 == 0) || ((*(byte *)(param_5 + (uVar8 >> 3)) >> (uVar8 & 7) & 1) != 0)) {
          uVar1 = param_6[1];
          iVar9 = iVar4 + uVar5 * 0x14;
          *(ushort *)(iVar9 + 0x10) = uVar1;
          uVar2 = param_6[2];
          uVar3 = (ushort)(((uint)uVar1 << 0x12) >> 0x10);
          *(ushort *)(iVar9 + 0x10) = uVar3 >> 2;
          *(ushort *)(iVar9 + 0x12) = uVar2;
          uVar1 = *param_6;
          *(char *)(iVar4 + uVar5 * 0x14) = (char)uVar1;
          *(char *)(iVar9 + 1) = (char)(uVar1 >> 8);
          uVar8 = (uint)*param_6;
          if (uVar8 != 0x2900) {
            if (uVar8 < 0x2901) {
              if (3 < uVar8 - 0x2800) goto LAB_14066cba;
            }
            else if (uVar8 - 0x2902 < 2) {
              *(ushort *)(iVar9 + 0x10) = uVar3 >> 2 | 10;
              *(ushort *)(iVar9 + 0x12) = uVar2 & 0x8000 | 2;
            }
            else {
LAB_14066cba:
              if (0x800 < (uVar2 & 0x7fff)) {
                *(ushort *)(iVar9 + 0x12) = uVar2 & 0x8000 | 0x800;
              }
            }
          }
          uVar5 = uVar5 + 1 & 0xff;
        }
        uVar6 = uVar6 + 1;
        uVar8 = uVar6 & 0xff;
        param_6 = param_6 + 3;
      } while (uVar8 < param_4);
      uVar6 = (uint)param_7;
      if (param_7 < uVar5) {
        uVar6 = uVar5;
      }
      local_3c = (undefined1)param_3;
      local_3b = (undefined1)((uint)param_3 >> 8);
      uVar7 = FUN_1406690c(param_1,local_50 & 0x9f,&local_3c,uVar6,uVar5,iVar4,0,param_8);
      FUN_14074168(iVar4);
    }
  }
LAB_14066b0e:
  if (*DAT_14066ce8 != local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_14039adc();
  }
  return uVar7;
}


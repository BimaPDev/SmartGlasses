/* FUN_2c4ae5a0 @ 0x2c4ae5a0 */

int FUN_2c4ae5a0(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  
  iVar1 = DAT_2c4ae858;
  if (param_1 == (uint *)0x0) {
    return 1;
  }
  puVar8 = *(uint **)(DAT_2c4ae858 + 0x6d4);
  if ((puVar8 != (uint *)0x0) &&
     (iVar2 = FUN_2c66960c(puVar8,param_1,0xac,param_4,param_4),
     (((*(int *)(iVar1 + 0x6dc) == 0 && *(int *)(iVar1 + 0x748) == 0) &&
      *(int *)(iVar1 + 0x750) == 0) && *(int *)(iVar1 + 0x760) == 0) && iVar2 == 0)) {
    return 0;
  }
  uVar5 = (uint)*(byte *)((int)param_1 + 0xd);
  if (uVar5 < 0x19) {
    if (-1 < (int)((DAT_2c4ae85c >> uVar5) << 0x1f)) {
LAB_2c4ae5f2:
      if ((puVar8 != (uint *)0x0) && (puVar8[5] != 0)) {
        FUN_2c4ae4d8();
        puVar8 = *(uint **)(iVar1 + 0x6d4);
        uVar5 = (uint)*(byte *)((int)param_1 + 0xd);
      }
      if ((char)param_1[3] == '\0') {
        uVar7 = 0;
      }
      else {
        uVar7 = 0x10000000;
      }
      if ((uVar5 - 0xd < 3) || (uVar5 - 0x15 < 4)) {
        if (*(char *)((int)param_1 + 0x1d) == '\x01') {
          uVar5 = 0x8000;
        }
        else {
          uVar5 = 0;
        }
        if ((char)param_1[7] == '\0') {
          uVar6 = 0x40;
        }
        else if ((char)param_1[7] == '\x01') {
          uVar6 = 0x50;
        }
        else {
          uVar6 = 0;
        }
      }
      else {
        uVar6 = 0;
        uVar5 = 0;
      }
      *(uint *)(iVar1 + 0x738) = *param_1;
      *(uint *)(iVar1 + 0x73c) = param_1[1];
      if (((puVar8 != param_1) || (*(char *)(iVar1 + 0x720) != '\0')) ||
         ((*(int *)(iVar1 + 0x748) != 0 || *(int *)(iVar1 + 0x750) != 0) ||
          *(int *)(iVar1 + 0x760) != 0)) {
        uVar9 = (uint)*(byte *)((int)param_1 + 0xd);
        if (((char)param_1[3] == '\x01') && ((param_1[2] & 0x3f) != 0)) {
          return 1;
        }
        uVar10 = (uint)(byte)param_1[0x2a] << 0x19;
        uVar3 = 0;
        if (*(int *)(iVar1 + 0x708) != 0) {
          uVar3 = 0x80;
        }
        uVar4 = 0;
        if (*(int *)(iVar1 + 0x744) != 0) {
          uVar4 = 0x10000;
        }
        if (*(char *)(iVar1 + 0x72e) == '\0') {
          if ((int)(uVar9 << 0x18) < 0) {
            uVar9 = 0xf;
          }
          else {
            uVar9 = (uint)*(byte *)(DAT_2c4ae860 + uVar9);
          }
          iVar2 = FUN_2c4ae148(DAT_2c4ae858,0xa10,
                               uVar9 | *(uint *)(iVar1 + 0x74c) | uVar10 | uVar5 | uVar6 | uVar3 |
                               uVar4 | 0x100);
          if (iVar2 != 0) {
            return iVar2;
          }
        }
        else {
          if ((int)(uVar9 << 0x18) < 0) {
            uVar9 = 0xf;
          }
          else {
            uVar9 = (uint)*(byte *)(DAT_2c4ae860 + uVar9);
          }
          iVar2 = FUN_2c4ae148(DAT_2c4ae858,0xa10,
                               DAT_2c4ae868 |
                               uVar6 | uVar9 | *(uint *)(iVar1 + 0x74c) | uVar10 | uVar5 | uVar3 |
                               uVar4);
          if (iVar2 != 0) {
            return iVar2;
          }
        }
        *(undefined4 *)(iVar1 + 0x748) = 0;
        *(undefined4 *)(iVar1 + 0x750) = 0;
        *(undefined4 *)(iVar1 + 0x760) = 0;
        if (((*(char *)(iVar1 + 0x720) != '\0') && (*(int *)(iVar1 + 0x708) == 0)) &&
           (*(int *)(iVar1 + 0x6c8) != 0)) {
          iVar2 = FUN_2c4ae148(DAT_2c4ae858,0xac8,*(int *)(iVar1 + 0x6c8) + -0x40);
          if (iVar2 != 0) {
            return iVar2;
          }
          iVar2 = FUN_2c4ae148(DAT_2c4ae858,0xac8,*(undefined4 *)(iVar1 + 0x6c8));
          if (iVar2 != 0) {
            return iVar2;
          }
          *(undefined1 *)(iVar1 + 0x720) = 0;
        }
        if ((param_1[8] != 0) && (iVar2 = FUN_2c4ae148(DAT_2c4ae858,0xa5c), iVar2 != 0)) {
          return iVar2;
        }
        if ((param_1[10] != 0) && (iVar2 = FUN_2c4ae148(DAT_2c4ae858,0xa5d), iVar2 != 0)) {
          return iVar2;
        }
        iVar2 = FUN_2c4ae148(DAT_2c4ae858,0xa11,param_1[6]);
        if (iVar2 != 0) {
          return iVar2;
        }
        if (*(byte *)((int)param_1 + 0xd) - 0x76 < 6) {
          iVar2 = FUN_2c4ae148(DAT_2c4ae858,0xa12,
                               uVar7 | ((int)((ulonglong)
                                              ((longlong)DAT_2c4ae864 * (longlong)(int)param_1[2])
                                             >> 0x20) - ((int)param_1[2] >> 0x1f)) * 4);
          if (iVar2 != 0) {
            return iVar2;
          }
        }
        else {
          iVar2 = FUN_2c4ae148(DAT_2c4ae858,0xa12,param_1[2] | uVar7);
          if (iVar2 != 0) {
            return iVar2;
          }
        }
      }
      if (*(int *)(iVar1 + 0x6dc) == 0) {
        iVar2 = FUN_2c4ae148(DAT_2c4ae858,0xa13,*param_1 | param_1[1] << 0x10);
        if (iVar2 != 0) {
          return iVar2;
        }
      }
      else {
        if (*(int *)(iVar1 + 0x6d8) == 0) {
          uVar7 = *param_1;
          uVar5 = param_1[1];
        }
        else {
          uVar5 = *(uint *)(iVar1 + 0x6ec);
          uVar7 = *(uint *)(iVar1 + 0x6e8);
        }
        iVar2 = FUN_2c4ae148(DAT_2c4ae858,0xa13,uVar7 | uVar5 << 0x10);
        if (iVar2 != 0) {
          return iVar2;
        }
        *(undefined4 *)(iVar1 + 0x6dc) = 0;
      }
      FUN_2c674668(*(undefined4 *)(iVar1 + 0x6d4),param_1,0xac);
      return 0;
    }
  }
  else if (3 < uVar5 - 0x7c) goto LAB_2c4ae5f2;
  return 7;
}


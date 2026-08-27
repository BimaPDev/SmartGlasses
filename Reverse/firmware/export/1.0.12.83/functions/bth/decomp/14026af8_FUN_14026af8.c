/* FUN_14026af8 @ 0x14026af8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_14026af8(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  byte *pbVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 unaff_lr;
  uint uVar13;
  
  pbVar5 = DAT_14026c58;
  puVar11 = DAT_14026c4c;
  uVar8 = DAT_14026c34;
  if (1 < param_1) {
    return 1;
  }
  if (param_2 < 2) {
    if (((int)(uint)*(byte *)(DAT_14026c2c + param_1) >> (param_2 & 0xff)) << 0x1f < 0) {
      puVar10 = (undefined4 *)(DAT_14026c30 + param_1 * 0x3c);
      iVar12 = 0;
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        iVar12 = getBasePriority();
      }
      if (iVar12 != 0x40) {
        bVar1 = *DAT_14026c58;
        *DAT_14026c4c = 0x14026b26;
        puVar11[1] = unaff_lr;
        iVar3 = DAT_14026c38;
        uVar13 = bVar1 + 1;
        *pbVar5 = (char)uVar13 + (char)(uint)((ulonglong)uVar8 * (ulonglong)uVar13 >> 0x23) * -10;
        *(undefined4 *)(iVar3 + (uint)bVar1 * 4) = unaff_lr;
      }
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        setBasePriority(0x40);
      }
      puVar11 = puVar10;
      if (((*(char *)(puVar10 + 4) == '\0') ||
          (puVar11 = puVar10 + 5, *(char *)(puVar10 + 9) == '\0')) ||
         (puVar11 = puVar10 + 10, *(char *)(puVar10 + 0xe) == '\0')) {
        puVar11[2] = param_4;
        puVar11[3] = param_3;
        *(undefined1 *)(puVar11 + 4) = 1;
        iVar3 = DAT_14026c3c;
        *puVar11 = 0;
        iVar7 = *(int *)(iVar3 + param_1 * 4);
        *(char *)(puVar11 + 1) = (char)param_2;
        if (iVar7 == 0) {
          *(undefined4 **)(iVar3 + param_1 * 4) = puVar11;
          if (param_1 == 0) {
            _DAT_400000a0 = 4;
          }
          else {
            _DAT_400000a0 = 8;
          }
        }
        else {
          puVar10 = *(undefined4 **)(DAT_14026c40 + param_1 * 4);
          if (puVar10 == (undefined4 *)0x0) {
            *(undefined4 **)(DAT_14026c40 + param_1 * 4) = puVar11;
          }
          else {
            do {
              puVar9 = puVar10;
              puVar10 = (undefined4 *)*puVar9;
            } while (puVar10 != (undefined4 *)0x0);
            *puVar9 = puVar11;
          }
        }
        pcVar4 = DAT_14026c48;
        if ((*(char *)(DAT_14026c44 + param_1) == '\0') &&
           (*(undefined1 *)(DAT_14026c44 + param_1) = 1, *pcVar4 == '\0')) {
          FUN_14028ee8(0);
          *pcVar4 = '\x01';
          uVar6 = 0;
        }
        else {
          uVar6 = 0;
        }
      }
      else {
        uVar6 = 0xffffffff;
      }
      if (iVar12 == 0) {
        *DAT_14026c4c = 0xffffffff;
      }
      bVar1 = *DAT_14026c50;
      uVar8 = bVar1 + 1;
      *DAT_14026c50 =
           (char)uVar8 + (char)(uint)((ulonglong)DAT_14026c34 * (ulonglong)uVar8 >> 0x23) * -10;
      *(undefined4 *)(DAT_14026c54 + (uint)bVar1 * 4) = unaff_lr;
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        setBasePriority(iVar12);
      }
    }
    else {
      uVar6 = 3;
    }
    return uVar6;
  }
  return 2;
}


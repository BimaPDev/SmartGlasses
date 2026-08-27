/* FUN_1402634c @ 0x1402634c */

undefined4 FUN_1402634c(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uVar9;
  uint uVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  undefined4 unaff_lr;
  int iVar20;
  
  uVar10 = DAT_14026524;
  puVar13 = DAT_1402651c;
  pbVar3 = DAT_14026514;
  if (*(byte *)(param_1 + 0x35) <= param_2) {
    FUN_1402a6e8(4,0x1de,DAT_1402653c,DAT_14026538,DAT_14026540,DAT_14026530);
    *DAT_14026544 = *DAT_14026544 + 1;
    return 1;
  }
  iVar15 = param_2 * 0x2c;
  iVar20 = *(int *)(param_1 + 0x38);
  iVar19 = iVar20 + iVar15;
  if (*(char *)(iVar19 + 0x2a) == '\0') {
    FUN_1402a6e8(4,0x1e4,DAT_1402653c,DAT_14026538,DAT_14026550,DAT_14026530);
    uVar9 = 2;
    *DAT_14026554 = *DAT_14026554 + 1;
  }
  else {
    puVar14 = *(undefined4 **)(iVar19 + 8);
    iVar16 = 0;
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      iVar16 = getBasePriority();
    }
    if (iVar16 != 0x40) {
      bVar1 = *DAT_14026514;
      *DAT_1402651c = 0x1402638c;
      puVar13[1] = unaff_lr;
      uVar18 = bVar1 + 1;
      *pbVar3 = (char)uVar18 + (char)(uint)((ulonglong)uVar10 * (ulonglong)uVar18 >> 0x23) * -10;
      *(undefined4 *)(DAT_14026518 + (uint)bVar1 * 4) = unaff_lr;
    }
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(0x40);
    }
    if (*(int *)(iVar19 + 0xc) != 0) {
      iVar17 = 0;
LAB_140263cc:
      if (*(char *)(puVar14 + 3) != '\0') goto LAB_1402645c;
      *puVar14 = 0;
      puVar14[1] = param_4;
      puVar14[2] = param_3;
      *(undefined1 *)(puVar14 + 3) = 1;
      if (*(int *)(iVar20 + iVar15) == 0) {
        *(undefined4 **)(iVar20 + iVar15) = puVar14;
        DataSynchronizationBarrier(0xf);
        piVar11 = *(int **)(iVar20 + iVar15);
        *DAT_14026548 = *DAT_14026548 + 1;
        piVar8 = DAT_1402654c;
        while (piVar11 != (int *)0x0) {
          piVar11 = (int *)*piVar11;
          *piVar8 = *piVar8 + 1;
        }
        (**(code **)(param_1 + 0x10))(param_2);
      }
      else {
        puVar13 = *(undefined4 **)(iVar19 + 4);
        if (*(undefined4 **)(iVar19 + 4) == (undefined4 *)0x0) {
          *(undefined4 **)(iVar19 + 4) = puVar14;
        }
        else {
          do {
            puVar12 = puVar13;
            puVar13 = (undefined4 *)*puVar12;
          } while (puVar13 != (undefined4 *)0x0);
          *puVar12 = puVar14;
        }
      }
      if (param_5 != (int *)0x0) {
        *param_5 = iVar17;
      }
      iVar15 = iVar15 + *(int *)(param_1 + 0x38);
      if ((*(char *)(iVar15 + 0x29) == '\0') &&
         (*(undefined1 *)(iVar15 + 0x29) = 1, **(char **)(param_1 + 0x48) == '\0')) {
        FUN_14028ee8(*(undefined1 *)(param_1 + 0x34));
        **(undefined1 **)(param_1 + 0x48) = 1;
        iVar15 = 0;
      }
      else {
        iVar15 = 0;
      }
      goto LAB_14026424;
    }
LAB_14026468:
    iVar15 = -1;
LAB_14026424:
    if (iVar16 == 0) {
      *DAT_1402651c = 0xffffffff;
    }
    bVar1 = *DAT_14026520;
    uVar10 = bVar1 + 1;
    *DAT_14026520 =
         (char)uVar10 + (char)(uint)((ulonglong)DAT_14026524 * (ulonglong)uVar10 >> 0x23) * -10;
    *(undefined4 *)(DAT_14026528 + (uint)bVar1 * 4) = unaff_lr;
    uVar7 = DAT_1402653c;
    uVar6 = DAT_14026538;
    uVar5 = DAT_14026534;
    uVar4 = DAT_14026530;
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(iVar16);
    }
    uVar9 = 0;
    if (iVar15 != 0) {
      *DAT_1402652c = *DAT_1402652c + 1;
      FUN_1402a6e8(4,0x214,uVar7,uVar6,uVar5,uVar4);
      return 0xffffffff;
    }
  }
  return uVar9;
LAB_1402645c:
  iVar17 = iVar17 + 1;
  puVar14 = puVar14 + 4;
  if (*(int *)(iVar19 + 0xc) == iVar17) goto LAB_14026468;
  goto LAB_140263cc;
}


/* FUN_1402c520 @ 0x1402c520 */

undefined4 FUN_1402c520(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  bool bVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined4 unaff_lr;
  
  iVar10 = DAT_1402c654;
  if (param_1 < 2) {
    uVar9 = (uint)*(char *)(DAT_1402c654 + param_1 * 0xc + 4);
    if ((uVar9 != 0x40) && (-1 < (int)uVar9)) {
      *(int *)(DAT_1402c658 + ((uVar9 >> 5) + 0x20) * 4) = 1 << (uVar9 & 0x1f);
      DataSynchronizationBarrier(0xf);
      InstructionSynchronizationBarrier(0xf);
    }
    uVar9 = DAT_1402c668;
    puVar6 = DAT_1402c664;
    pbVar5 = DAT_1402c660;
    if (*DAT_1402c65c != '\0') {
      iVar11 = 0;
      bVar4 = (bool)isCurrentModePrivileged();
      if (bVar4) {
        iVar11 = getBasePriority();
      }
      if (iVar11 != 0x40) {
        bVar1 = *DAT_1402c660;
        *DAT_1402c664 = 0x1402c57a;
        puVar6[1] = unaff_lr;
        uVar8 = bVar1 + 1;
        *pbVar5 = (char)uVar8 + (char)(uint)((ulonglong)uVar9 * (ulonglong)uVar8 >> 0x23) * -10;
        *(undefined4 *)(DAT_1402c66c + (uint)bVar1 * 4) = unaff_lr;
      }
      iVar7 = DAT_1402c67c;
      bVar4 = (bool)isCurrentModePrivileged();
      if (bVar4) {
        setBasePriority(0x40);
      }
      if (*(char *)(DAT_1402c67c + param_1) != -1) {
        FUN_14028694();
        FUN_14028888(*(undefined1 *)(iVar7 + param_1));
        *(undefined1 *)(iVar7 + param_1) = 0xff;
      }
      iVar7 = DAT_1402c680;
      if (*(char *)(DAT_1402c680 + param_1) != -1) {
        FUN_14028694();
        FUN_14028888(*(undefined1 *)(iVar7 + param_1));
        *(undefined1 *)(iVar7 + param_1) = 0xff;
      }
      if (iVar11 == 0) {
        *DAT_1402c664 = 0xffffffff;
      }
      pbVar5 = DAT_1402c670;
      uVar9 = DAT_1402c668;
      bVar1 = *DAT_1402c670;
      *(undefined4 *)(DAT_1402c674 + (uint)bVar1 * 4) = unaff_lr;
      uVar8 = bVar1 + 1;
      *pbVar5 = (char)uVar8 + (char)(uint)((ulonglong)uVar9 * (ulonglong)uVar8 >> 0x23) * -10;
      bVar4 = (bool)isCurrentModePrivileged();
      if (bVar4) {
        setBasePriority(iVar11);
      }
    }
    iVar11 = *(int *)(iVar10 + param_1 * 0xc);
    iVar10 = iVar10 + param_1 * 0xc;
    uVar2 = *(undefined1 *)(iVar10 + 6);
    *(uint *)(iVar11 + 0x30) = *(uint *)(iVar11 + 0x30) & 0xfffffffe;
    *(uint *)(iVar11 + 0x2c) = *(uint *)(iVar11 + 0x2c) & 0xffffffef;
    FUN_1402db68(uVar2);
    uVar3 = *(undefined1 *)(iVar10 + 5);
    FUN_1402db68(uVar3);
    FUN_1402daa0(uVar2);
    FUN_1402daa0(uVar3);
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402b0f8(DAT_1402c678,param_1,param_3,param_4,param_4);
}


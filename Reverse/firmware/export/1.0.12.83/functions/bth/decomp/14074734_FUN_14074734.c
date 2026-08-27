/* FUN_14074734 @ 0x14074734 */

void FUN_14074734(uint param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int extraout_r3;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 unaff_lr;
  int iVar9;
  
  uVar4 = DAT_140746a4;
  puVar3 = DAT_1407469c;
  uVar2 = DAT_14074698;
  uVar8 = param_1 & 0xff;
  uVar6 = param_1 >> 8;
  if (10 < uVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x42,DAT_140747ac,0x1ac,DAT_140747a8);
  }
  iVar7 = *(int *)(DAT_140747a4 + uVar8 * 4);
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x44,DAT_140747b0,0x1b3,DAT_140747a8,uVar8,uVar6);
  }
  uVar8 = (uint)*(ushort *)(iVar7 + 8);
  iVar7 = DAT_140747a4;
  iVar9 = DAT_140747a4;
  if (uVar8 <= uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x44,DAT_140747b0,0x1b4,DAT_140747a8,uVar6,uVar8);
  }
  while (iVar7 = FUN_14073db4(uVar2,uVar4,param_1,iVar7,iVar9), iVar7 != 0) {
    iVar5 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      iVar5 = getBasePriority();
    }
    if (iVar5 != 0x40) {
      *puVar3 = 0x14074662;
      puVar3[1] = unaff_lr;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0x40);
    }
    FUN_140739f0(DAT_140746a0,iVar7);
    if (iVar5 == 0) {
      *puVar3 = 0xffffffff;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(iVar5);
    }
    FUN_14073c58(3);
    iVar7 = extraout_r3;
  }
  return;
}


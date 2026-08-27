/* FUN_140747b4 @ 0x140747b4 */

void FUN_140747b4(uint param_1,uint param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint extraout_r3;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 unaff_lr;
  
  uVar8 = param_1 & 0xff;
  uVar6 = param_1 >> 8;
  if (10 < uVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x42,DAT_14074858,0x1c6,DAT_14074854);
  }
  iVar7 = *(int *)(DAT_14074850 + uVar8 * 4);
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x44,DAT_1407485c,0x1cd,DAT_14074854,uVar8,uVar6);
  }
  if (*(ushort *)(iVar7 + 8) <= uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x44,DAT_1407485c,0x1ce,DAT_14074854,uVar6,(uint)*(ushort *)(iVar7 + 8));
  }
  iVar7 = *(int *)(iVar7 + 4);
  if (iVar7 + uVar6 != 0) {
    uVar8 = (uint)*(byte *)(iVar7 + uVar6);
    if (uVar8 == param_2) {
      return;
    }
    *(char *)(iVar7 + uVar6) = (char)param_2;
    uVar4 = DAT_140746a4;
    puVar3 = DAT_1407469c;
    uVar2 = DAT_14074698;
    uVar6 = uVar8;
    while (iVar7 = FUN_14073db4(uVar2,uVar4,param_1,uVar8,uVar6), iVar7 != 0) {
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
      uVar8 = extraout_r3;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x42,DAT_14074858,0x1d6,DAT_14074854);
}


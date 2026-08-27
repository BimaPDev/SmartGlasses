/* FUN_2c135b78 @ 0x2c135b78 */

void FUN_2c135b78(void)

{
  bool bVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  int extraout_r2;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 unaff_lr;
  undefined8 uVar12;
  longlong lVar13;
  
  puVar3 = DAT_2c135c5c;
  uVar10 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar10 = isIRQinterruptsEnabled();
  }
  if ((uVar10 & 1) == 0) {
    *DAT_2c135c5c = 0x2c135b8c;
    puVar3[1] = unaff_lr;
    disableIRQinterrupts();
  }
  iVar6 = FUN_2c14486c();
  puVar5 = DAT_2c135c80;
  piVar4 = DAT_2c135c60;
  uVar2 = (ulonglong)(uint)(iVar6 - *DAT_2c135c60) * (ulonglong)DAT_2c135c64 + 0x2000 >> 0xe;
  uVar9 = (undefined4)uVar2;
  uVar11 = (undefined4)(uVar2 >> 0x20);
  uVar12 = FUN_2c144378(uVar9,uVar11,DAT_2c135c64,0);
  uVar8 = *puVar5;
  *puVar5 = uVar8 + (uint)uVar12;
  puVar5[1] = puVar5[1] + (int)((ulonglong)uVar12 >> 0x20) + (uint)CARRY4(uVar8,(uint)uVar12);
  iVar6 = FUN_2c14486c();
  FUN_2c144378(uVar9,uVar11,DAT_2c135c64,0);
  lVar13 = (longlong)
           (int)(uint)((ulonglong)DAT_2c135c68 * (ulonglong)(uint)(extraout_r2 * 1000) >> 0x26) *
           0x4000 + 500;
  lVar13 = FUN_2c144378((int)lVar13,(int)((ulonglong)lVar13 >> 0x20),1000,0);
  iVar7 = FUN_2c144378((int)(lVar13 + 500),(int)((ulonglong)(lVar13 + 500) >> 0x20),1000,0);
  *DAT_2c135c6c = 1;
  *piVar4 = iVar6 - iVar7;
  if ((uVar10 & 1) == 0) {
    *DAT_2c135c5c = 0xffffffff;
    enableIRQinterrupts();
  }
  FUN_2c135988(4,0x77a,DAT_2c135c7c,DAT_2c135c78,DAT_2c135c74,DAT_2c135c70);
  return;
}


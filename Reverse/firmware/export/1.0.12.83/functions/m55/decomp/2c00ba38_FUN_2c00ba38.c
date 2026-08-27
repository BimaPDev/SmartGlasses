/* FUN_2c00ba38 @ 0x2c00ba38 */

void FUN_2c00ba38(void)

{
  bool bVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint *puVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  int extraout_r2;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 unaff_lr;
  uint unaff_pc;
  undefined8 uVar12;
  longlong lVar13;
  
  puVar3 = DAT_2c00bb14;
  uVar10 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar10 = isIRQinterruptsEnabled();
  }
  if ((uVar10 & 1) == 0) {
    *DAT_2c00bb14 = 0x2c00ba4c;
    puVar3[1] = unaff_lr;
    disableIRQinterrupts();
  }
  piVar4 = DAT_2c00bb18;
  iVar7 = FUN_2c013858();
  puVar5 = DAT_2c00bb20;
  uVar2 = (iVar7 - *piVar4) * DAT_2c00bb1c + 0x2000;
  uVar11 = uVar2 | unaff_pc >> 0xe;
  uVar12 = FUN_2c013c1c(uVar2,uVar11,DAT_2c00bb1c,0);
  uVar9 = *puVar5;
  *puVar5 = uVar9 + (uint)uVar12;
  puVar5[1] = puVar5[1] + (int)((ulonglong)uVar12 >> 0x20) + (uint)CARRY4(uVar9,(uint)uVar12);
  iVar7 = FUN_2c013858();
  FUN_2c013c1c(uVar2,uVar11,DAT_2c00bb1c,0);
  lVar13 = (longlong)
           (int)(uint)((ulonglong)DAT_2c00bb24 * (ulonglong)(uint)(extraout_r2 * 1000) >> 0x26) *
           0x4000 + 500;
  lVar13 = FUN_2c013c1c((int)lVar13,(int)((ulonglong)lVar13 >> 0x20),1000,0);
  iVar8 = FUN_2c013c1c((int)(lVar13 + 500),(int)((ulonglong)(lVar13 + 500) >> 0x20),1000,0);
  puVar6 = DAT_2c00bb28;
  *piVar4 = iVar7 - iVar8;
  *puVar6 = 1;
  if ((uVar10 & 1) == 0) {
    *DAT_2c00bb14 = 0xffffffff;
    enableIRQinterrupts();
  }
  FUN_2c00b820(4,0x77a,DAT_2c00bb38,DAT_2c00bb34,DAT_2c00bb30,DAT_2c00bb2c);
  return;
}


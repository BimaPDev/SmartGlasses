/* FUN_10056ca4 @ 0x10056ca4 */

uint FUN_10056ca4(uint param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint *puVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  
  iVar4 = DAT_10056d44;
  if (4 < param_1) {
    FUN_10119dc2(DAT_10056d40,param_1,param_3,param_4,param_4);
    return 0xffffffff;
  }
  uVar9 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    uVar9 = getBasePriority();
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if ((bVar2) && (uVar7 = getBasePriority(), uVar7 == 0 || 0x20 < uVar7)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  bVar1 = *(byte *)(DAT_10056d44 + param_1);
  if (param_2 == 0) {
    uVar6 = DAT_10056d54;
    if (bVar1 == 0) goto LAB_10056cdc;
    cVar3 = -1;
LAB_10056ce4:
    *(byte *)(DAT_10056d44 + param_1) = bVar1 + cVar3;
  }
  else {
    uVar6 = DAT_10056d48;
    if (bVar1 < 0x81) {
      cVar3 = '\x01';
      goto LAB_10056ce4;
    }
LAB_10056cdc:
    FUN_10119dc2(uVar6,param_1,param_3,bVar1,param_4);
  }
  puVar5 = DAT_10056d58;
  uVar7 = *DAT_10056d50;
  uVar8 = 1 << *(sbyte *)(DAT_10056d4c + param_1);
  if (*(char *)(iVar4 + param_1) == '\0') {
    if ((uVar7 & uVar8) == 0) goto LAB_10056cfc;
    uVar7 = uVar7 & ~uVar8;
  }
  else {
    if ((uVar7 & uVar8) != 0) goto LAB_10056cfc;
    uVar7 = uVar7 | uVar8;
  }
  iVar10 = 100;
  *DAT_10056d50 = uVar7;
  do {
    if ((*puVar5 & uVar8) != 0) break;
    FUN_1013d9c0(10);
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
LAB_10056cfc:
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(uVar9);
  }
  InstructionSynchronizationBarrier(0xf);
  return (uint)*(byte *)(iVar4 + param_1);
}


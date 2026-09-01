/* FUN_100019c4 @ 0x100019c4 */

undefined4 FUN_100019c4(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  
  uVar7 = (uint)*param_1;
  if (uVar7 < 3) goto LAB_100019da;
  uVar4 = 0x76;
  uVar5 = DAT_10001a38;
  while( true ) {
    FUN_100031f8(DAT_10001a40,uVar4,DAT_10001a3c,uVar5,param_4);
LAB_100019da:
    iVar3 = DAT_10001a44;
    iVar6 = DAT_10001a44 + uVar7 * 0x34;
    if (*(int *)(iVar6 + 0x28) != 0) break;
    uVar4 = 0x77;
    uVar5 = DAT_10001a48;
  }
  *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + -1;
  uVar5 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar5 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x20 < uVar2)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar5);
  }
  InstructionSynchronizationBarrier(0xf);
  if (*(char *)(iVar6 + 4) != '\0') {
    FUN_100030e8(iVar3 + uVar7 * 0x34 + 0xc,uVar5);
  }
  FUN_10001914(*(undefined4 *)(uVar7 * 0x34 + iVar3 + 0x28),param_1);
  return 0;
}


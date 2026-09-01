/* FUN_1011ba00 @ 0x1011ba00 */

void FUN_1011ba00(int param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined2 local_18;
  char local_16;
  char local_15;
  undefined2 local_14;
  undefined2 local_12;
  
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
  if ((param_1 + 4 != 0) && (8 < *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc))) {
    uVar4 = *(uint *)(param_1 + 0x1c) % 10000;
    uVar2 = uVar4 % 1000;
    uVar3 = uVar2 % 100;
    _local_18 = CONCAT13((char)(uVar2 / 100) + '0',CONCAT12((char)(uVar4 / 1000) + '0',0x400a));
    uVar2 = uVar3 % 10;
    *(uint *)(param_1 + 0x1c) = uVar2;
    _local_14 = CONCAT22(0xa40,CONCAT11((char)uVar2 + '0',(char)(uVar3 / 10) + '0'));
    FUN_1011b8c6(param_1 + 4,&local_18,8);
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar5);
  }
  InstructionSynchronizationBarrier(0xf);
  return;
}


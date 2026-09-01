/* FUN_1011bc60 @ 0x1011bc60 */

void FUN_1011bc60(int param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  
  piVar5 = *(int **)(param_1 + 0x10);
  iVar4 = *piVar5;
  while( true ) {
    uVar6 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      uVar6 = getBasePriority();
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x20 < uVar2)) {
      setBasePriority(0x20);
    }
    InstructionSynchronizationBarrier(0xf);
    if (*(char *)((int)piVar5 + 0x31e) == '\0') break;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(uVar6);
    }
    InstructionSynchronizationBarrier(0xf);
    FUN_101153fc(1,0);
  }
  piVar5[0xc6] = param_2;
  if (param_2 == 1) {
    pcVar3 = *(code **)(*(int *)(iVar4 + 0x3c) + 0x10);
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(param_1);
    }
    pcVar3 = *(code **)(*(int *)(iVar4 + 0x3c) + 0x20);
    if (pcVar3 == (code *)0x0) {
      FUN_1011bb6c(param_1,0x80);
    }
    else {
      (*pcVar3)();
    }
    FUN_1013cec4(*(int *)(param_1 + 0x10) + 0x28);
    FUN_100690c0(1);
  }
  else {
    FUN_10069118(1);
    pcVar3 = *(code **)(*(int *)(iVar4 + 0x3c) + 0x14);
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(param_1);
    }
    FUN_1005e4ac(*(undefined4 *)(param_1 + 0x10));
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar6);
  }
  InstructionSynchronizationBarrier(0xf);
  return;
}


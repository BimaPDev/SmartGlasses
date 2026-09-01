/* FUN_10001914 @ 0x10001914 */

void FUN_10001914(int *param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar4 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x20 < uVar2)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  iVar3 = *param_1;
  *(undefined4 *)(param_2 + 0x9c) = 0;
  param_2 = param_2 + 0x9c;
  if ((int *)param_1[1] == (int *)0x0) {
    *param_1 = param_2;
    param_1[1] = param_2;
  }
  else {
    *(int *)param_1[1] = param_2;
    param_1[1] = param_2;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar4);
  }
  InstructionSynchronizationBarrier(0xf);
  if (iVar3 != 0) {
    return;
  }
  FUN_100030e8(param_1 + 2);
  return;
}


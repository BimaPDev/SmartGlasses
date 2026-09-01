/* FUN_10191a26 @ 0x10191a26 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10191a26(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar5 = param_1;
  uStack_20 = param_3;
  uStack_1c = param_4;
  uVar2 = FUN_10192444(3);
  if (*(int *)(param_1 + 0x20) == DAT_10191ae4) {
    (**(code **)(_DAT_000001a4 + 0x14))(param_1,param_2,&uStack_20,4);
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x100;
    (**(code **)(_DAT_000001a4 + 0x2c))(param_1,0x7a);
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffeff;
  }
  else {
    (**(code **)(_DAT_000001a4 + 0x2c))
              (param_1,0x7a,*(int *)(param_1 + 0x20),*(code **)(_DAT_000001a4 + 0x2c),iVar5);
  }
  FUN_10192454(0x1e);
  iVar5 = 100;
  do {
    FUN_10192454(5);
    iVar3 = (**(code **)(_DAT_000001a4 + 0xc))(param_1,0x35);
    if (-1 < iVar3 << 0x18) break;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  iVar5 = (**(code **)(_DAT_000001a4 + 0xc))(param_1,5);
  if (iVar5 << 0x1f < 0) {
    iVar5 = 0x14;
    do {
      FUN_10192454(0x32);
      iVar3 = (**(code **)(_DAT_000001a4 + 0xc))(param_1,5);
      if (-1 < iVar3 << 0x1f) goto LAB_10191ad2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    FUN_101918d6(param_1);
    uVar4 = 0;
  }
  else {
LAB_10191ad2:
    uVar4 = 1;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar2);
  }
  InstructionSynchronizationBarrier(0xf);
  return uVar4;
}


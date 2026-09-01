/* FUN_1013cbc2 @ 0x1013cbc2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1013cbc2(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  FUN_1011368c();
  iVar2 = _DAT_1006826c;
  iVar4 = *(int *)(_DAT_1006826c + 8);
  uVar3 = *_DAT_10068270;
  *(undefined4 *)(iVar4 + 200) = param_1;
  *(undefined4 *)(iVar4 + 0xcc) = uVar3;
  *(uint *)(_DAT_10068274 + 4) = *(uint *)(_DAT_10068274 + 4) | 0x10000000;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0);
  }
  InstructionSynchronizationBarrier(0xf);
  return *(undefined4 *)(*(int *)(iVar2 + 8) + 0xcc);
}


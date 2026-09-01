/* FUN_100a5b08 @ 0x100a5b08 */

void FUN_100a5b08(undefined4 param_1,uint param_2)

{
  bool bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar5 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar5 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar3 = getBasePriority(), uVar3 == 0 || 0x20 < uVar3)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  uVar3 = FUN_1011a0bc(DAT_100a5b6c);
  pbVar2 = DAT_100a5b70;
  if (uVar3 < param_2) {
    *(int *)(DAT_100a5b70 + 8) = *(int *)(DAT_100a5b70 + 8) + 1;
  }
  else {
    FUN_1005457c(DAT_100a5b70 + 0x14,param_1,param_2);
  }
  iVar4 = FUN_1013c70e();
  if (iVar4 != 0) {
    *(int *)(pbVar2 + 0xc) = *(int *)(pbVar2 + 0xc) + 1;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar5);
  }
  InstructionSynchronizationBarrier(0xf);
  if (-1 < (int)((uint)*pbVar2 << 0x19)) {
    FUN_10113fd0(DAT_100a5b74);
    return;
  }
  FUN_100a5538(DAT_100a5b70);
  return;
}


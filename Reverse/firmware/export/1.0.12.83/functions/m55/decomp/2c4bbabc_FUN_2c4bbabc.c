/* FUN_2c4bbabc @ 0x2c4bbabc */

undefined4 FUN_2c4bbabc(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar2 = DAT_2c4bbb10;
  if (param_1 != 1) {
    return 0;
  }
  *(undefined4 *)(DAT_2c4bbb10 + 0x84) = 0;
  DataSynchronizationBarrier(0xf);
  uVar3 = *(uint *)(iVar2 + 0x80);
  uVar5 = ((uVar3 & 0xfffffff) >> 0xd) << 5;
  do {
    uVar4 = (uVar3 & 0x1fff) >> 3;
    do {
      uVar1 = uVar4 << 0x1e;
      uVar4 = uVar4 - 1;
      *(uint *)(iVar2 + 0x26c) = uVar5 & 0x3fe0 | uVar1;
    } while (uVar4 != 0xffffffff);
    uVar5 = uVar5 - 0x20;
  } while (uVar5 != 0xffffffe0);
  DataSynchronizationBarrier(0xf);
  InstructionSynchronizationBarrier(0xf);
  return 0;
}


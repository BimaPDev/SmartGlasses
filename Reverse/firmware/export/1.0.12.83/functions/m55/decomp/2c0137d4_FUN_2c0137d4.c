/* FUN_2c0137d4 @ 0x2c0137d4 */

undefined4 FUN_2c0137d4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  *(undefined4 *)(param_1 + 0x84) = param_4;
  DataSynchronizationBarrier(0xf);
  uVar3 = ((*(uint *)(param_1 + 0x80) & 0xfffffff) >> 0xd) << 5;
  do {
    uVar2 = (*(uint *)(param_1 + 0x80) & 0x1fff) >> 3;
    do {
      uVar1 = uVar2 << 0x1e;
      uVar2 = uVar2 - 1;
      *(uint *)(param_1 + 0x26c) = uVar3 & 0x3fe0 | uVar1;
    } while (uVar2 != 0xffffffff);
    uVar3 = uVar3 - 0x20;
  } while (uVar3 != 0xffffffe0);
  DataSynchronizationBarrier(0xf);
  InstructionSynchronizationBarrier(0xf);
  return 0;
}


/* FUN_14026abc @ 0x14026abc */

undefined4 FUN_14026abc(uint param_1)

{
  uint uVar1;
  
  if (1 < param_1) {
    return 1;
  }
  uVar1 = (uint)*(char *)(DAT_14026af0 + param_1);
  if (-1 < (int)uVar1) {
    *(int *)(DAT_14026af4 + ((uVar1 >> 5) + 0x20) * 4) = 1 << (uVar1 & 0x1f);
    DataSynchronizationBarrier(0xf);
    InstructionSynchronizationBarrier(0xf);
    return 0;
  }
  return 0;
}


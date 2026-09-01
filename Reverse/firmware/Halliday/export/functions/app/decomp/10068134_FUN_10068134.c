/* FUN_10068134 @ 0x10068134 */

void FUN_10068134(byte param_1)

{
  if (-1 < (char)param_1) {
    *(int *)(DAT_10068158 + (((uint)(int)(char)param_1 >> 5) + 0x20) * 4) =
         1 << (uint)(param_1 & 0x1f);
    DataSynchronizationBarrier(0xf);
    InstructionSynchronizationBarrier(0xf);
  }
  return;
}


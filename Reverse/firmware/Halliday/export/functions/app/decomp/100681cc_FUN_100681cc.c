/* FUN_100681cc @ 0x100681cc */

void FUN_100681cc(void)

{
  int iVar1;
  
  iVar1 = DAT_10068200;
  *(uint *)(DAT_10068200 + 0x88) = *(uint *)(DAT_10068200 + 0x88) & 0xff0fffff;
  *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 0x500000;
  *(undefined4 *)(iVar1 + 0x234) = 0xc0000000;
  DataSynchronizationBarrier(0xf);
  InstructionSynchronizationBarrier(0xf);
  return;
}


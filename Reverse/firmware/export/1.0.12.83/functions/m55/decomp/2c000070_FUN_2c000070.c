/* FUN_2c000070 @ 0x2c000070 */

undefined4 FUN_2c000070(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_2c0000f8;
  if ((*(uint *)(DAT_2c0000f8 + 0x90) & 0xff00) != 0) {
    DataMemoryBarrier(0x1f);
    *(uint *)(DAT_2c0000f8 + 0x94) = *(uint *)(DAT_2c0000f8 + 0x94) & 0xfffffffc;
    DataSynchronizationBarrier(0xf);
    InstructionSynchronizationBarrier(0xf);
    iVar2 = 0;
    do {
      *(int *)(iVar1 + 0x98) = iVar2;
      iVar2 = iVar2 + 1;
      *(undefined4 *)(iVar1 + 0xa0) = 0;
    } while (iVar2 != 0x10);
    *(undefined4 *)(iVar1 + 0xc0) = 0;
    *(undefined4 *)(iVar1 + 0xc4) = 0;
    *(uint *)(iVar1 + 0xc0) = *(uint *)(iVar1 + 0xc0) & 0xffffff00 | 0x22;
    *(uint *)(iVar1 + 0xc0) = *(uint *)(iVar1 + 0xc0) & 0xffff00ff | 0x7700;
    *(uint *)(iVar1 + 0xc0) = *(uint *)(iVar1 + 0xc0) & 0xff00ffff | 0x440000;
    *(uint *)(iVar1 + 0xc0) = *(uint *)(iVar1 + 0xc0) & 0xffffff;
    return 0;
  }
  return 0xffffffff;
}


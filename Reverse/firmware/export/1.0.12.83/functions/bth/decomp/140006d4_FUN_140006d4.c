/* FUN_140006d4 @ 0x140006d4 */

undefined4 FUN_140006d4(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_1400075c;
  if ((*(uint *)(DAT_1400075c + 0x90) & 0xff00) != 0) {
    DataMemoryBarrier(0x1f);
    *(uint *)(DAT_1400075c + 0x94) = *(uint *)(DAT_1400075c + 0x94) & 0xfffffffc;
    DataSynchronizationBarrier(0xf);
    InstructionSynchronizationBarrier(0xf);
    iVar2 = 0;
    do {
      *(int *)(iVar1 + 0x98) = iVar2;
      iVar2 = iVar2 + 1;
      *(undefined4 *)(iVar1 + 0xa0) = 0;
    } while (iVar2 != 8);
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


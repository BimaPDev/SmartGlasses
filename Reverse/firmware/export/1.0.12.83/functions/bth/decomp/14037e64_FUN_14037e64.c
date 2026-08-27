/* FUN_14037e64 @ 0x14037e64 */

void FUN_14037e64(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_14037ed4;
  *(uint *)(DAT_14037ed4 + 0xc18) = *(uint *)(DAT_14037ed4 + 0xc18) | 0x2000000;
  if (param_1 != 2) {
    if (param_1 == 3) {
      *(uint *)(iVar1 + 0xc18) = *(uint *)(iVar1 + 0xc18) | 0xc00000;
      *(uint *)(iVar1 + 0xc90) = *(uint *)(iVar1 + 0xc90) & 0x80ffffff | 0x5b000000;
    }
    return;
  }
  *(uint *)(iVar1 + 0xc18) = *(uint *)(iVar1 + 0xc18) | 0x800000;
  *(uint *)(iVar1 + 0xc90) = *(uint *)(iVar1 + 0xc90) & 0x80ffffff | 0x31000000;
  return;
}


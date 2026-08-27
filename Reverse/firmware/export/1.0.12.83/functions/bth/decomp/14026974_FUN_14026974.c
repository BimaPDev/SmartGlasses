/* FUN_14026974 @ 0x14026974 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_14026974(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = DAT_14026a40;
  iVar1 = DAT_14026a38;
  if (param_1 < 2) {
    iVar4 = param_2 + param_1 * 2;
    uVar2 = (uint)*(byte *)(DAT_14026a38 + param_1) & ~(1 << (param_2 & 0xff));
    *(undefined4 *)(DAT_14026a3c + iVar4 * 4) = 0;
    *(undefined4 *)(iVar3 + iVar4 * 4) = 0;
    *(char *)(iVar1 + param_1) = (char)uVar2;
    if (uVar2 == 0) {
      uVar2 = (uint)*(char *)(DAT_14026a44 + param_1);
      if (-1 < (int)uVar2) {
        *(int *)(DAT_14026a48 + ((uVar2 >> 5) + 0x20) * 4) = 1 << (uVar2 & 0x1f);
        DataSynchronizationBarrier(0xf);
        InstructionSynchronizationBarrier(0xf);
      }
      uVar2 = (uint)*(char *)(DAT_14026a4c + param_1);
      if (-1 < (int)uVar2) {
        *(int *)(DAT_14026a48 + ((uVar2 >> 5) + 0x20) * 4) = 1 << (uVar2 & 0x1f);
        DataSynchronizationBarrier(0xf);
        InstructionSynchronizationBarrier(0xf);
      }
      if (param_1 == 0) {
        _DAT_400000a4 = 0x8000;
      }
      else {
        _DAT_400000a4 = 0x10000;
      }
      *(undefined4 *)(DAT_14026a50 + param_1 * 4) = 0;
      iVar1 = DAT_14026a5c;
      iVar3 = DAT_14026a54 + param_1 * 0x10;
      *(undefined4 *)(DAT_14026a58 + param_1 * 4) = 0;
      *(undefined4 *)(iVar3 + 0xc) = 0;
      *(undefined1 *)(iVar1 + param_1) = 0;
    }
    return 0;
  }
  return 1;
}


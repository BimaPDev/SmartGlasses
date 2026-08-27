/* FUN_2c4bffe4 @ 0x2c4bffe4 */

void FUN_2c4bffe4(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_2c4c0020;
  FUN_2c49b050(*(undefined4 *)(DAT_2c4c0020 + param_1 * 4));
  *(undefined4 *)(*(int *)(DAT_2c4c0024 + 8) + 0x94) = *(undefined4 *)(iVar1 + param_1 * 4);
  puVar2 = DAT_2c4c0028;
  DataSynchronizationBarrier(0xf);
  *(undefined1 *)((int)DAT_2c4c0028 + 0x315) = 0;
  puVar2[0x60] = 0x200000;
  *puVar2 = 0x200000;
  *(undefined4 *)(DAT_2c4c002c + param_1 * 4) = param_2;
  return;
}


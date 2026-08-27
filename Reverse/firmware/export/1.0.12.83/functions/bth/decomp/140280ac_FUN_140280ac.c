/* FUN_140280ac @ 0x140280ac */

void FUN_140280ac(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_140280e4;
  FUN_14039b24(*(undefined4 *)(DAT_140280e4 + param_1 * 4));
  *(undefined4 *)(*(int *)(DAT_140280e8 + 8) + 0x68) = *(undefined4 *)(iVar1 + param_1 * 4);
  puVar2 = DAT_140280ec;
  DataSynchronizationBarrier(0xf);
  *(undefined1 *)((int)DAT_140280ec + 0x30a) = 0;
  puVar2[0x60] = 0x400;
  *puVar2 = 0x400;
  *(undefined4 *)(DAT_140280f0 + param_1 * 4) = param_2;
  return;
}


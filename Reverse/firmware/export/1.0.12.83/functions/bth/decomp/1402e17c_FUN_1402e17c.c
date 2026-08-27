/* FUN_1402e17c @ 0x1402e17c */

void FUN_1402e17c(void)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_1402e1c0;
  iVar1 = DAT_1402e1bc;
  *(undefined4 *)(DAT_1402e1bc + 0x88) = DAT_1402e1c0;
  *(undefined4 *)(iVar1 + 0x90) = uVar2;
  *(undefined4 *)(iVar1 + 0xb0) = uVar2;
  *(undefined4 *)(iVar1 + 0xe8) = uVar2;
  *(undefined4 *)(iVar1 + 0x24) = uVar2;
  *(undefined4 *)(iVar1 + 0x2c) = uVar2;
  *(undefined4 *)(iVar1 + 0x16c) = uVar2;
  iVar1 = DAT_1402e1c4;
  DataSynchronizationBarrier(0xf);
  *(undefined4 *)(DAT_1402e1c4 + 0x168) = 0xca000000;
  *(undefined4 *)(iVar1 + 0x174) = 0;
  DataSynchronizationBarrier(0xf);
  return;
}


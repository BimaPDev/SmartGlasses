/* FUN_14028c30 @ 0x14028c30 */

void FUN_14028c30(void)

{
  char *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = DAT_14028ca4;
  iVar2 = DAT_14028ca0;
  pcVar1 = DAT_14028c9c;
  if (*DAT_14028c9c != '\0') {
    return;
  }
  *(undefined4 *)(DAT_14028ca0 + 0x110) = 0;
  *(undefined4 *)(iVar2 + 0x130) = 0;
  *(undefined4 *)(iVar2 + 0x150) = 0;
  *(undefined4 *)(iVar2 + 0x170) = 0;
  *(undefined4 *)(iVar2 + 400) = 0;
  *(undefined4 *)(iVar2 + 0x1b0) = 0;
  *(undefined4 *)(iVar2 + 0x1d0) = 0;
  *(undefined4 *)(iVar2 + 0x1f0) = 0;
  puVar3[1] = 0;
  *(undefined4 *)(iVar2 + 8) = 0xffffffff;
  *(undefined4 *)(iVar2 + 0x10) = 0xffffffff;
  *(uint *)(iVar2 + 0x30) = DAT_14028ca8 & *(uint *)(iVar2 + 0x30) | 9;
  iVar2 = DAT_14028cac;
  *puVar3 = 0;
  *(undefined4 *)(*(int *)(iVar2 + 8) + 0x50) = DAT_14028cb0;
  puVar3 = DAT_14028cb4;
  DataSynchronizationBarrier(0xf);
  *(undefined1 *)(DAT_14028cb4 + 0xc1) = 0x80;
  puVar3[0x60] = 0x10;
  *puVar3 = 0x10;
  *pcVar1 = '\x01';
  return;
}


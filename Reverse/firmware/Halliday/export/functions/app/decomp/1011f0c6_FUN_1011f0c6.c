/* FUN_1011f0c6 @ 0x1011f0c6 */

undefined4 FUN_1011f0c6(int param_1)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  FUN_1011a68e(*(undefined1 *)(iVar2 + 0xc));
  puVar1 = (uint *)((uint)*(byte *)(iVar2 + 10) * 0x4000 + 0x40088000);
  *puVar1 = *puVar1 | 0x20;
  return 0;
}


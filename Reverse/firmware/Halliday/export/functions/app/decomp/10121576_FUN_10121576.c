/* FUN_10121576 @ 0x10121576 */

undefined4 FUN_10121576(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0xc);
  iVar2 = iVar3 + 0x19a0;
  iVar1 = iVar3 + 0x30;
  do {
    *(int *)(iVar3 + 0x98) = iVar2;
    *(undefined1 *)(iVar3 + 0x90) = 0;
    *(undefined1 *)(iVar3 + 0x91) = 0xff;
    *(undefined2 *)(iVar3 + 0x92) = 0xffff;
    *(undefined2 *)(iVar3 + 0x94) = 0;
    iVar3 = iVar3 + 0xc;
    iVar2 = iVar2 + 0x100;
  } while (iVar3 != iVar1);
  return 1;
}


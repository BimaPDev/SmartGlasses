/* FUN_100c41c4 @ 0x100c41c4 */

undefined4 FUN_100c41c4(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_100c3014(0xffffffff,0xffffffff);
  iVar1 = 0xf;
  iVar2 = *DAT_100c41f8;
  do {
    if (iVar2 == 0) break;
    if (iVar2 == param_1) {
      FUN_100c3008();
      return 1;
    }
    iVar1 = iVar1 + -1;
    iVar2 = *(int *)(iVar2 + 0xc);
  } while (iVar1 != 0);
  FUN_100c3008();
  return 0;
}


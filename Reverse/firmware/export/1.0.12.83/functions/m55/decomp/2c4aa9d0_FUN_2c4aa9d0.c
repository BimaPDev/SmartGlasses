/* FUN_2c4aa9d0 @ 0x2c4aa9d0 */

undefined4 FUN_2c4aa9d0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(int *)(param_1 + 0xbc) + 4);
  if (iVar4 != 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0xbc) + 8);
    iVar3 = 0;
    do {
      iVar3 = iVar3 + 1;
      iVar1 = FUN_2c66c540(param_2,iVar2,0x32);
      iVar2 = iVar2 + 0x4c;
      if (iVar1 == 0) {
        FUN_2c66c568(param_1 + 0x36,param_2,0x31);
        return 0;
      }
    } while (iVar4 != iVar3);
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x8f,DAT_2c4aaa50,DAT_2c4aaa4c,DAT_2c4aaa44,*(undefined1 *)(param_1 + 0xa0),DAT_2c4aaa48,
        param_2);
}


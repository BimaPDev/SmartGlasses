/* FUN_14096d78 @ 0x14096d78 */

void FUN_14096d78(int param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *param_2;
  iVar2 = FUN_1403b00c(uVar1);
  if ((iVar2 != 0) && (iVar3 = FUN_140db784(iVar2,param_2 + 2,6), iVar3 == 0)) {
    FUN_1403ae64();
    *(undefined1 *)(param_1 + 8) = uVar1;
    *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 2);
    *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(param_2 + 6);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
    *(undefined1 *)(param_1 + 0x14) = param_2[1];
    *(char *)(param_1 + 0x15) = (char)*(undefined2 *)(param_2 + 0x18);
    *(char *)(param_1 + 9) = (char)*(undefined2 *)(param_2 + 0xe);
    *(undefined2 *)(param_1 + 0x16) = *(undefined2 *)(iVar2 + 10);
    *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(param_2 + 0x10);
    *(undefined2 *)(param_1 + 0x1a) = *(undefined2 *)(param_2 + 0x12);
    *(undefined2 *)(param_1 + 0x1c) = *(undefined2 *)(param_2 + 0x16);
    iVar2 = FUN_1404a1b4(uVar1);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(iVar2 + 0xc);
    FUN_1403ae9c();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x41,DAT_14096e00,uVar1);
}


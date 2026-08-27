/* FUN_140737d0 @ 0x140737d0 */

int FUN_140737d0(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 1;
  }
  if (*(char *)(param_1 + 0x2c) == -0x5b) {
    iVar1 = FUN_14073468(param_2,param_3,*(undefined2 *)(param_1 + 4),param_4);
    if (iVar1 != 0) {
      return iVar1;
    }
    FUN_140732f8(*param_2 + *(ushort *)(*param_2 + 6) + 0x30,
                 *(ushort *)(param_1 + 6) + 0x30 + param_1,*(undefined2 *)(param_1 + 4));
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x42,DAT_1407382c,0x271,DAT_14073828,param_4);
}


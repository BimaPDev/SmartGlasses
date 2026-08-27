/* FUN_140bdfd0 @ 0x140bdfd0 */

int FUN_140bdfd0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_140bdc98(param_1,param_2,DAT_140be014,6,param_3);
  if (iVar1 != 0) {
    iVar1 = FUN_140bdc98(param_1,param_2,*(undefined4 *)(DAT_140be018 + 0x90),
                         *(undefined4 *)(DAT_140be018 + 8),param_3);
    if (iVar1 != 0) {
      FUN_140be984(DAT_140be01c);
      return iVar1;
    }
  }
  return 0;
}


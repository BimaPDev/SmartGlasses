/* FUN_2c647c80 @ 0x2c647c80 */

int FUN_2c647c80(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_2c647930(param_1,param_2,DAT_2c647cc4,6,param_3);
  if (iVar1 != 0) {
    iVar1 = FUN_2c647930(param_1,param_2,*(undefined4 *)(DAT_2c647cc8 + 0x90),
                         *(undefined4 *)(DAT_2c647cc8 + 8),param_3);
    if (iVar1 != 0) {
      FUN_2c648600(DAT_2c647ccc);
      return iVar1;
    }
  }
  return 0;
}


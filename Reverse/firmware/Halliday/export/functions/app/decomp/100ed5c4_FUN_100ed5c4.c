/* FUN_100ed5c4 @ 0x100ed5c4 */

undefined4 FUN_100ed5c4(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_100ecbe0(param_2,param_3,param_1);
  if (iVar1 < 0) {
    FUN_100a5b78(DAT_100ed610 | (DAT_100ed60c - DAT_100ed608) * 0x20 & 0xff00U,DAT_100ed618,
                 DAT_100ed614,param_1,*(undefined4 *)(*param_3 + 0xc));
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


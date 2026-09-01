/* FUN_100ed578 @ 0x100ed578 */

undefined4 FUN_100ed578(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_100ecbe0(param_1,param_2,0,param_4,param_1,param_2);
  if (iVar1 < 0) {
    FUN_100a5b78(DAT_100ed5b8 | (DAT_100ed5b4 - DAT_100ed5b0) * 0x20 & 0xff00U,DAT_100ed5c0,
                 DAT_100ed5bc,*(undefined4 *)(*param_2 + 0xc),*param_2);
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


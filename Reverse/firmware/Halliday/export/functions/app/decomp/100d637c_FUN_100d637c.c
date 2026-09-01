/* FUN_100d637c @ 0x100d637c */

undefined4
FUN_100d637c(undefined4 param_1,undefined4 *param_2,undefined2 *param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_100d4588(param_1,0,param_3,param_4,param_4);
  if (iVar1 == 0) {
    FUN_100a5b78(DAT_100d63d0 | (DAT_100d63cc - DAT_100d63c8) * 0x20 & 0xff00U,DAT_100d63d8,
                 DAT_100d63d4);
    uVar2 = 0xffffffed;
  }
  else {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *(undefined4 *)(iVar1 + 0x52);
      param_2[1] = *(undefined4 *)(iVar1 + 0x56);
    }
    if (param_3 == (undefined2 *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0;
      *param_3 = *(undefined2 *)(iVar1 + 0x50);
    }
  }
  return uVar2;
}


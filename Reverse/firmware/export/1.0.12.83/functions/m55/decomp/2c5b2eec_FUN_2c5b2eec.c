/* FUN_2c5b2eec @ 0x2c5b2eec */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_2c5b2eec(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r2;
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = _LAB_2c5b2f60;
  *param_1 = _LAB_2c5b2f60;
  if (param_1[0x58] != 0) {
    FUN_2c5d5cd0();
    iVar2 = param_1[0x58];
    if (iVar2 != 0) {
      FUN_2c5d5ccc(iVar2);
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0,iVar2);
    }
    uVar1 = 0;
    param_1[0x58] = 0;
    param_3 = extraout_r2;
  }
  FUN_2c5e8fb4(_LAB_2c5b2f68,_LAB_2c5b2f64,param_3,uVar1,param_4);
  FUN_2c5afc94(param_1 + 0x11);
  func_0x2c5b39e8(param_1 + 0xe);
  if (param_1[0x57] != 0) {
    FUN_2c620f94();
  }
  if ((undefined4 *)param_1[0x5a] != param_1 + 0x5c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  FUN_2c5afb88(param_1 + 0x11);
  func_0x2c5b311c(param_1 + 2);
  return param_1;
}


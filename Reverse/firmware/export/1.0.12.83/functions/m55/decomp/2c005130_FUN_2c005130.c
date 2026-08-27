/* FUN_2c005130 @ 0x2c005130 */

undefined4
FUN_2c005130(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  int iVar3;
  
  iVar3 = param_4;
  FUN_2c003d94();
  if ((param_3 == 0) || (param_4 == 0)) {
    param_4 = 0;
  }
  else {
    FUN_2c003b78(param_1,param_3,param_4);
  }
  FUN_2c003cdc(param_1,param_2,param_4,param_6,iVar3);
  if (param_6 != 0) {
    puVar2 = (undefined1 *)(param_5 + -1);
    do {
      FUN_2c003d58(param_1);
      uVar1 = FUN_2c003c50(param_1);
      puVar2 = puVar2 + 1;
      *puVar2 = uVar1;
    } while (puVar2 != (undefined1 *)(param_6 + param_5 + -1));
  }
  return 0;
}


/* FUN_2c4cae82 @ 0x2c4cae82 */

undefined4 FUN_2c4cae82(int param_1,uint *param_2,undefined4 param_3,uint param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  
  *param_2 = param_4;
  if (param_1 == 0) {
    return 0x2001;
  }
  puVar1 = (undefined4 *)FUN_2c4d28f4(*(undefined4 *)(param_1 + 0x14),param_4);
  if (puVar1[9] == 0) {
    FUN_2c4d766c(puVar1 + 2,puVar1[1]);
  }
  else if (puVar1[1] != 0) {
    FUN_2c4d7598(puVar1 + 2,*puVar1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  uVar2 = FUN_2c4d76a8(puVar1 + 2);
  *param_2 = uVar2 >> 3;
  return 0;
}


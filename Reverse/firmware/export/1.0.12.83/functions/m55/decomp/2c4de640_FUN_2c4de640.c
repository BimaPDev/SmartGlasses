/* FUN_2c4de640 @ 0x2c4de640 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4de640(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  if (param_2 == _LAB_2c4de668) {
    uVar1 = param_3[1];
    *(undefined4 *)(param_1 + 8) = *param_3;
    *(undefined4 *)(param_1 + 0xc) = uVar1;
  }
  else {
    if (param_2 != _LAB_2c4de66c) {
      return 0;
    }
    func_0x2c4de618(param_1,param_3);
  }
  return 1;
}


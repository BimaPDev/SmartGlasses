/* FUN_2c664e40 @ 0x2c664e40 */

bool FUN_2c664e40(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined4 uStack_20;
  uint uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = 0x10;
  uStack_14 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  (**(code **)(*param_1 + 0x18))(param_1,param_2,*param_3,&uStack_20);
  bVar1 = (uStack_1c & 6) == 6;
  if (bVar1) {
    *param_3 = uStack_20;
  }
  return bVar1;
}


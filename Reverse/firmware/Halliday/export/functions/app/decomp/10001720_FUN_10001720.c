/* FUN_10001720 @ 0x10001720 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001720(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  undefined4 uVar2;
  undefined4 extraout_r1_00;
  undefined4 extraout_r2;
  undefined4 uVar3;
  undefined4 extraout_r2_00;
  
  if (param_1 == 0) {
    (**(code **)(_DAT_000001a4 + 0x2c))(DAT_10001748,0xab);
    uVar1 = 0x28;
    uVar2 = extraout_r1_00;
    uVar3 = extraout_r2_00;
  }
  else {
    (**(code **)(_DAT_000001a4 + 0x2c))(DAT_10001748,0xb9);
    uVar1 = 5;
    uVar2 = extraout_r1;
    uVar3 = extraout_r2;
  }
  FUN_100007c0(uVar1,uVar2,uVar3,param_4);
  return;
}


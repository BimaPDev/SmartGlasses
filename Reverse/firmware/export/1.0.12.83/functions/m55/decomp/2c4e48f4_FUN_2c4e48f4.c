/* FUN_2c4e48f4 @ 0x2c4e48f4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4e48f4(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    FUN_2c4de6ca(param_1,0x54f1,0x53,1);
    uVar2 = 0x53;
    uVar1 = _LAB_2c4e496c;
  }
  else {
    if (*(code **)(param_1 + 0x44) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x2c4e496a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(param_1 + 0x44))(param_2,1,param_3,*(int *)(param_1 + 0x30));
      return uVar1;
    }
    FUN_2c4de6ca(param_1,0x54f1,0x54,1);
    uVar2 = 0x54;
    uVar1 = _LAB_2c4e497c;
  }
  FUN_2c4e0504(_LAB_2c4e4978,0,0,0,_LAB_2c4e4974,uVar2,_LAB_2c4e4970,0x1300,uVar1);
  return 0;
}


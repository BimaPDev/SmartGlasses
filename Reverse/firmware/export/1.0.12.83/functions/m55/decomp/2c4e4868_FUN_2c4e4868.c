/* FUN_2c4e4868 @ 0x2c4e4868 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4e4868(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    FUN_2c4de6ca(param_1,0x54f1,0x4d,1);
    uVar2 = 0x4d;
    uVar1 = _LAB_2c4e48e0;
  }
  else {
    if (*(code **)(param_1 + 0x3c) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x2c4e48de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(param_1 + 0x3c))(param_2,1,param_3,*(int *)(param_1 + 0x30));
      return uVar1;
    }
    FUN_2c4de6ca(param_1,0x54f1,0x4e,1);
    uVar2 = 0x4e;
    uVar1 = _LAB_2c4e48f0;
  }
  FUN_2c4e0504(_LAB_2c4e48ec,0,0,0,_LAB_2c4e48e8,uVar2,_LAB_2c4e48e4,0x1300,uVar1);
  return 0;
}


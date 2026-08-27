/* FUN_2c4e47e0 @ 0x2c4e47e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4e47e0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    FUN_2c4de6ca(param_1,0x54f1,0x47,1);
    uVar2 = 0x47;
    uVar1 = _LAB_2c4e4854;
  }
  else {
    if (*(code **)(param_1 + 0x48) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x2c4e4850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(param_1 + 0x48))(*(int *)(param_1 + 0x30));
      return uVar1;
    }
    FUN_2c4de6ca(param_1,0x54f1,0x48,1);
    uVar2 = 0x48;
    uVar1 = _LAB_2c4e4864;
  }
  FUN_2c4e0504(_LAB_2c4e4860,0,0,0,_LAB_2c4e485c,uVar2,_LAB_2c4e4858,0x1300,uVar1);
  return 0;
}


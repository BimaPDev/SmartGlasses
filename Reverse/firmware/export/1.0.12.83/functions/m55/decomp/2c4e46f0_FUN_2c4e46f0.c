/* FUN_2c4e46f0 @ 0x2c4e46f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4e46f0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1[0xc] == 0) {
    FUN_2c4de6ca(param_1,0x54f1,0x3c,1);
    uVar3 = 0x3c;
    uVar1 = _LAB_2c4e47c8;
  }
  else {
    if ((code *)param_1[0x13] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x2c4e473c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)param_1[0x13])(param_1[0xc]);
      return uVar1;
    }
    uVar1 = (**(code **)(*param_1 + 0x28))();
    iVar2 = (**(code **)(*param_1 + 0x20))(param_1,0,2);
    if (iVar2 != 0) {
      uVar3 = (**(code **)(*param_1 + 0x28))(param_1);
      iVar2 = (**(code **)(*param_1 + 0x20))(param_1,uVar1,0);
      if (iVar2 != 0) {
        return uVar3;
      }
      FUN_2c4de6ca(param_1,0x54f1,0x43,1);
      FUN_2c4e0504(_LAB_2c4e47d4,0,0,0,_LAB_2c4e47d0,0x43,_LAB_2c4e47cc,0x1300,_LAB_2c4e47dc);
      return 0;
    }
    FUN_2c4de6ca(param_1,0x54f1,0x41,1);
    uVar3 = 0x41;
    uVar1 = _LAB_2c4e47d8;
  }
  FUN_2c4e0504(_LAB_2c4e47d4,0,0,0,_LAB_2c4e47d0,uVar3,_LAB_2c4e47cc,0x1300,uVar1);
  return 0;
}


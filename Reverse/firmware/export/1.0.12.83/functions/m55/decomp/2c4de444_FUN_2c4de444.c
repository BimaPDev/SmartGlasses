/* FUN_2c4de444 @ 0x2c4de444 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4de444(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = 1;
  }
  else {
    piVar2 = (int *)FUN_2c4df9d2();
    if (piVar2 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x2c4de440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(*piVar2 + 0x18))(piVar2,param_2);
      return uVar1;
    }
    FUN_2c4de6ca(param_1,33999,0x2f,1);
    FUN_2c4e0504(_LAB_2c4de4a4,0,0,0,_LAB_2c4de4ac,0x2f,_LAB_2c4de4a8,0x1300,_LAB_2c4de4a0);
    uVar1 = 0;
  }
  return uVar1;
}


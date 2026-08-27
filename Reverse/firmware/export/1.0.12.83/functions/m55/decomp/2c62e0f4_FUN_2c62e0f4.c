/* FUN_2c62e0f4 @ 0x2c62e0f4 */

undefined4 FUN_2c62e0f4(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = param_1[1];
  if (iVar2 == 0) {
    *param_2 = 0;
    return 0xb;
  }
  if (*(code **)(iVar2 + 0x1c) == (code *)0x0) {
    uVar1 = 9;
    *param_2 = 0;
  }
  else {
    if (*(short *)(iVar2 + 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x2c62e11c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(iVar2 + 0x1c))(iVar2,*param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
    *param_2 = *(undefined4 *)(param_1[2] + 8);
  }
  return uVar1;
}


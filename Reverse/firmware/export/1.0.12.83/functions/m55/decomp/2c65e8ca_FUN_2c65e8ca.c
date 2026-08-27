/* FUN_2c65e8ca @ 0x2c65e8ca */

uint FUN_2c65e8ca(int *param_1)

{
  uint uVar1;
  
  if ((byte *)param_1[3] <= (byte *)param_1[2]) {
                    /* WARNING: Could not recover jumptable at 0x2c65e8d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x24))();
    return uVar1;
  }
  return (uint)*(byte *)param_1[2];
}


/* FUN_140d1852 @ 0x140d1852 */

uint FUN_140d1852(int *param_1)

{
  uint uVar1;
  
  if ((byte *)param_1[3] <= (byte *)param_1[2]) {
                    /* WARNING: Could not recover jumptable at 0x140d185e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x24))();
    return uVar1;
  }
  return (uint)*(byte *)param_1[2];
}


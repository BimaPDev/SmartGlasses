/* FUN_140c5536 @ 0x140c5536 */

uint FUN_140c5536(int *param_1,int param_2)

{
  uint uVar1;
  
  if ((char)param_1[7] == '\0') {
    FUN_140c4cba();
                    /* WARNING: Could not recover jumptable at 0x140c5550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x18))(param_1,param_2);
    return uVar1;
  }
  return (uint)*(byte *)((int)param_1 + param_2 + 0x1d);
}


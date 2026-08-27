/* FUN_140d1870 @ 0x140d1870 */

undefined4 FUN_140d1870(int *param_1)

{
  undefined4 uVar1;
  
  if ((undefined4 *)param_1[3] <= (undefined4 *)param_1[2]) {
                    /* WARNING: Could not recover jumptable at 0x140d187c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x24))();
    return uVar1;
  }
  return *(undefined4 *)param_1[2];
}


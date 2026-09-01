/* FUN_1009b000 @ 0x1009b000 */

void FUN_1009b000(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  if ((*DAT_1009b02c & 0x200ff) == 0x20000) {
    if (param_1 == 0) {
      piVar1 = (int *)FUN_1008bbb4();
      param_1 = *piVar1;
    }
    FUN_1009af58(*(undefined4 *)(param_1 + 0x4c),4,0,param_4);
    return;
  }
  return;
}


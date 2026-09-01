/* FUN_10127064 @ 0x10127064 */

void FUN_10127064(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  FUN_10125af4();
  while (iVar1 = FUN_10126fb4(param_1,0), iVar1 != 0) {
    FUN_1008af98(iVar1);
  }
  FUN_10126144(param_1,0,0,0,param_4);
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x14) = 0;
  }
  return;
}


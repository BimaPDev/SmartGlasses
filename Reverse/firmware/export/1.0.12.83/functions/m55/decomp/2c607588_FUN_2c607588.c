/* FUN_2c607588 @ 0x2c607588 */

undefined4 FUN_2c607588(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  short sVar2;
  int iVar3;
  
  sVar1 = FUN_2c6033b4(param_1,0,1,param_4,param_4);
  sVar2 = FUN_2c6033b4(param_1,0,4);
  if ((sVar1 != 0x27d1) && (sVar2 != 0x27d1)) {
    return 0;
  }
  *(byte *)(param_1 + 0x22) = *(byte *)(param_1 + 0x22) | 1;
  iVar3 = FUN_2c604178(param_1);
  *(byte *)(iVar3 + 0x22) = *(byte *)(iVar3 + 0x22) | 2;
  iVar3 = FUN_2c604188();
  if (*(int *)(iVar3 + 4) != 0) {
    FUN_2c62be4c();
    return 1;
  }
  return 1;
}


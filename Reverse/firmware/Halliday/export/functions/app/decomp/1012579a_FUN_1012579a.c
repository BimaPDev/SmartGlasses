/* FUN_1012579a @ 0x1012579a */

int FUN_1012579a(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_101254be();
  iVar2 = FUN_101254b2(param_1);
  iVar3 = FUN_101254a6(param_1);
  return iVar3 * -2 +
         ((((*(int *)(param_1 + 0x1c) + 1) - *(int *)(param_1 + 0x14)) - iVar1) - iVar2);
}


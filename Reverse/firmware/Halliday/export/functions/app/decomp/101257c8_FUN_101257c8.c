/* FUN_101257c8 @ 0x101257c8 */

int FUN_101257c8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_101254d6();
  iVar2 = FUN_101254ca(param_1);
  iVar3 = FUN_101254a6(param_1);
  return iVar3 * -2 +
         ((((*(int *)(param_1 + 0x20) + 1) - *(int *)(param_1 + 0x18)) - iVar1) - iVar2);
}


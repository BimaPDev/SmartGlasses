/* FUN_10059e18 @ 0x10059e18 */

undefined4 FUN_10059e18(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = **(int **)(DAT_10059e28 + 4);
  *(undefined4 *)(iVar1 + 0x14) = param_1;
  *(undefined4 *)(iVar1 + 0x18) = param_2;
  return 0;
}


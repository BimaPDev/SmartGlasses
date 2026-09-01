/* FUN_10134698 @ 0x10134698 */

undefined4 FUN_10134698(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  byte bVar2;
  
  bVar2 = 0;
  while( true ) {
    uVar1 = (uint)bVar2;
    bVar2 = bVar2 + 1;
    if (*(uint *)(param_3 + 4) <= uVar1) break;
    FUN_101327c8(param_1 + 8,*(undefined2 *)(*(int *)(param_3 + 8) + uVar1 * 2));
  }
  return 0;
}


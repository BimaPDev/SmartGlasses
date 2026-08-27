/* FUN_2c55e384 @ 0x2c55e384 */

bool FUN_2c55e384(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 4) + 4);
  iVar1 = FUN_2c6041fc(uVar2);
  iVar1 = FUN_2c6041dc(uVar2,iVar1 + -1);
  return *(int *)(param_1 + 4) == iVar1;
}


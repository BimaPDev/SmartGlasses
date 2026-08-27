/* FUN_2c4fe758 @ 0x2c4fe758 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4fe758(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(int *)(param_2 + 0x24) != 0) {
    FUN_2c62bea8();
    *(undefined4 *)(param_2 + 0x24) = 0;
    *(undefined4 *)(param_2 + 0x2c) = 0;
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    FUN_2c62bea8();
    *(undefined4 *)(param_2 + 0x28) = 0;
    *(undefined4 *)(param_2 + 0x30) = 0;
  }
  iVar1 = *(int *)(*(int *)(param_2 + 0x40) + 4);
  while (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 4);
    FUN_2c62bea8(iVar1);
    iVar1 = iVar3;
  }
  iVar1 = *(int *)(*(int *)(param_2 + 0x38) + 4);
  while (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 4);
    FUN_2c62bea8(iVar1);
    iVar1 = iVar3;
  }
  FUN_2c62e838(param_2,_LAB_2c4fe7b0);
  uVar2 = *(undefined4 *)(param_2 + 0x108);
  FUN_2c62c998(DAT_2c62be38,uVar2);
  *DAT_2c62be3c = 1;
  FUN_2c62bea8(uVar2);
  return;
}


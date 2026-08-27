/* FUN_2c65fbe0 @ 0x2c65fbe0 */

void FUN_2c65fbe0(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_2c64cf04(DAT_2c65fc10);
  if ((*(uint *)(*param_1 + 8) <= uVar1) ||
     (iVar2 = *(int *)(*(int *)(*param_1 + 4) + uVar1 * 4), iVar2 == 0)) {
    iVar2 = FUN_2c65866e();
  }
  iVar2 = FUN_2c664f2c(iVar2,DAT_2c65fc18,DAT_2c65fc14,0);
  if (iVar2 == 0) {
    FUN_2c664fde();
  }
  return;
}


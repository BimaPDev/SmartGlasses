/* FUN_2c51218c @ 0x2c51218c */

void FUN_2c51218c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_2c48e3b8(param_2);
  if (iVar1 == 0) {
    return;
  }
  iVar2 = FUN_2c48e424(iVar1,DAT_2c512204);
  if ((iVar2 != 0) && (iVar2 = FUN_2c518808(*(undefined4 *)(iVar2 + 0x14)), iVar2 == 1)) {
    iVar2 = FUN_2c48e424(iVar1,*DAT_2c512208);
    iVar3 = FUN_2c48e424(iVar1,*DAT_2c51220c);
    if ((iVar2 != 0) && ((iVar3 != 0 && (*(int *)(iVar2 + 0x14) - 5U < 2)))) {
      if (*(int *)(iVar2 + 0x14) == 5) {
        if (*(int *)(iVar3 + 0x14) == 1) {
          FUN_2c512090(param_1);
          goto LAB_2c5121ac;
        }
      }
      else if (*(int *)(iVar3 + 0x14) == 1) {
        FUN_2c5120dc(param_1);
        goto LAB_2c5121ac;
      }
      FUN_2c512128(param_1);
    }
  }
LAB_2c5121ac:
  FUN_2c48dea0(iVar1);
  return;
}


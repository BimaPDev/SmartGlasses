/* FUN_2c507b84 @ 0x2c507b84 */

void FUN_2c507b84(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_2c606abc(*(int *)(param_1 + 0x18),1);
  }
  uVar2 = FUN_2c504998();
  uVar1 = DAT_2c507bc8;
  FUN_2c504c98(uVar2,param_1 + 0x10);
  piVar3 = (int *)(param_1 + 0x28);
  do {
    piVar4 = piVar3 + 1;
    FUN_2c5eb89c(*(undefined4 *)(*piVar3 + 0x10),*(undefined4 *)(*piVar3 + 8),0,uVar1,param_1);
    piVar3 = piVar4;
  } while (piVar4 != (int *)(param_1 + 0x3c));
  return;
}


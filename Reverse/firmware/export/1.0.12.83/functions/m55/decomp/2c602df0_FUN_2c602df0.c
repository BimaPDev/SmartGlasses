/* FUN_2c602df0 @ 0x2c602df0 */

void FUN_2c602df0(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (*(undefined4 **)(param_1 + 0xc) != (undefined4 *)0x0) {
    uVar3 = **(undefined4 **)(param_1 + 0xc);
    uVar1 = FUN_2c602bd8();
    FUN_2c602340(uVar3,0xf,uVar1);
    FUN_2c607df0(**(undefined4 **)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  piVar2 = (int *)FUN_2c62ca10(param_1);
  while (piVar2 != (int *)0x0) {
    if (*(int *)(*piVar2 + 8) != 0) {
      *(undefined4 *)(*(int *)(*piVar2 + 8) + 8) = 0;
    }
    piVar2 = (int *)FUN_2c62ca20(param_1);
  }
  FUN_2c62c9e8(param_1);
  return;
}


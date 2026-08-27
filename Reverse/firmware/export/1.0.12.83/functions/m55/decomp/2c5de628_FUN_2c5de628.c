/* FUN_2c5de628 @ 0x2c5de628 */

undefined4 FUN_2c5de628(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)param_1[1];
  piVar2 = (int *)*param_1;
  while (piVar1 = piVar2, piVar1 != piVar4) {
    *(undefined1 *)(*piVar1 + 0x21) = 0xb;
    *(undefined1 *)(*piVar1 + 0x18) = 1;
    FUN_2c5df27c(param_1,*piVar1);
    iVar3 = FUN_2c5ddff8(param_1,*(undefined4 *)(*piVar1 + 0xc));
    piVar2 = piVar1 + 1;
    if (iVar3 != 0) {
      FUN_2c5de488(param_1,*(undefined4 *)(*piVar1 + 0xc));
    }
  }
  return 1;
}


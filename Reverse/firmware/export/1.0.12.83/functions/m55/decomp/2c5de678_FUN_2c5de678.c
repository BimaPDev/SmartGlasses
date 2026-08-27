/* FUN_2c5de678 @ 0x2c5de678 */

undefined4 FUN_2c5de678(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  uVar2 = DAT_2c5de6ec;
  piVar6 = (int *)param_1[1];
  piVar3 = (int *)*param_1;
  do {
    piVar1 = piVar3;
    if (piVar1 == piVar6) goto LAB_2c5de69e;
    iVar5 = *piVar1;
    iVar4 = FUN_2c66b624(*(undefined4 *)(iVar5 + 0xc),uVar2);
    piVar3 = piVar1 + 1;
  } while (iVar4 != 0);
  iVar4 = FUN_2c5def3c(iVar5);
  if (iVar4 != 0) {
    *(undefined1 *)(*piVar1 + 0x21) = 0xb;
    *(undefined1 *)(*piVar1 + 0x18) = 2;
    FUN_2c5df27c(param_1,*piVar1);
    iVar4 = FUN_2c5ddff8(param_1,*(undefined4 *)(*piVar1 + 0xc));
    if (iVar4 != 0) {
      FUN_2c5de488(param_1,*(undefined4 *)(*piVar1 + 0xc));
    }
  }
LAB_2c5de69e:
  FUN_2c595aac();
  FUN_2c5ee110();
  FUN_2c46e1b8(2);
  return 0;
}


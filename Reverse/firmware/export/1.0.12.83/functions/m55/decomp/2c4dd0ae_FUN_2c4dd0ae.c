/* FUN_2c4dd0ae @ 0x2c4dd0ae */

undefined4 FUN_2c4dd0ae(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  if (*(short *)(param_1 + 0x18) == 0) {
    uVar1 = 1;
  }
  else {
    if (*(int *)(param_1 + 4) != 0) {
      piVar2 = (int *)func_0x2c4de6dc();
      if (piVar2[1] == 0 && *piVar2 == 0) {
        func_0x2c4de6e0(*(undefined4 *)(param_1 + 4),param_1 + 0x18);
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}


/* FUN_2c4e4558 @ 0x2c4e4558 */

int FUN_2c4e4558(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    iVar1 = FUN_2c4e4018();
    if (iVar1 == 0) {
      FUN_2c4de6ca(param_1,0xa4c5,0x9e,1);
      FUN_2c4e0504(DAT_2c4e4124,0,0,0,DAT_2c4e412c,0x9e,DAT_2c4e4128,0x1300,DAT_2c4e4120);
    }
    else {
      *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x5c);
      uVar3 = *(uint *)(param_1 + 0x4c) & *(uint *)(param_1 + 0x5c);
      iVar2 = FUN_2c4e3f90(param_1,*(int *)(param_1 + 0x38) + uVar3,*(int *)(param_1 + 0x3c) - uVar3
                          );
      if (iVar2 == 0) {
        FUN_2c4e0504(DAT_2c4e4134,2,0,0,DAT_2c4e412c,0xa4,DAT_2c4e4128,0x1300,DAT_2c4e4130);
        iVar1 = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x5c);
      }
    }
    return iVar1;
  }
  FUN_2c4de6ca(param_1,0xa4c5,0xfb,1);
  FUN_2c4e0504(DAT_2c4e45a4,0,0,0,DAT_2c4e45ac,0xfb,DAT_2c4e45a8,0x1300,DAT_2c4e45a0);
  return 0;
}


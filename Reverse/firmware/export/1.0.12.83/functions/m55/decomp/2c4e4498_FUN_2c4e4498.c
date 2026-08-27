/* FUN_2c4e4498 @ 0x2c4e4498 */

int FUN_2c4e4498(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    FUN_2c4de6ca(param_1,0xa4c5,0xe7,1);
    FUN_2c4e0504(DAT_2c4e44fc,0,0,0,DAT_2c4e4504,0xe7,DAT_2c4e4500,0x1300,DAT_2c4e44f8);
    iVar2 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x50);
    if ((uVar1 < *(uint *)(param_1 + 0x58)) || (*(uint *)(param_1 + 0x54) <= uVar1)) {
      iVar2 = 0;
    }
    else {
      *param_2 = *(uint *)(param_1 + 0x54) - uVar1;
      iVar2 = *(int *)(param_1 + 0x38) + (*(uint *)(param_1 + 0x4c) & *(uint *)(param_1 + 0x50));
    }
  }
  return iVar2;
}


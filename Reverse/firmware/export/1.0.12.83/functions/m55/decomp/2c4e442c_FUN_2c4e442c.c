/* FUN_2c4e442c @ 0x2c4e442c */

int FUN_2c4e442c(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    FUN_2c4de6ca(param_1,0xa4c5,0xd7,1);
    FUN_2c4e0504(DAT_2c4e448c,0,0,0,DAT_2c4e4494,0xd7,DAT_2c4e4490,0x1300,DAT_2c4e4488);
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x50);
    if ((*(uint *)(param_1 + 0x58) <= uVar2) && (uVar2 < *(uint *)(param_1 + 0x54))) {
      iVar1 = *(uint *)(param_1 + 0x54) - uVar2;
      if (param_2 <= iVar1) {
        iVar1 = param_2;
      }
      *(uint *)(param_1 + 0x50) = uVar2 + iVar1;
      return iVar1;
    }
  }
  return 0;
}


/* FUN_2c4aa73c @ 0x2c4aa73c */

void FUN_2c4aa73c(int param_1,int param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_2c4a94d0();
  (**(code **)(param_1 + 0x330))(param_1,*(undefined1 *)(param_1 + 0x1cc),param_4);
  if (param_3 != 0) {
    uVar2 = param_3;
    do {
      iVar1 = (param_2 + param_3) - uVar2;
      uVar3 = uVar2 - 0x80;
      if (0x7f < uVar2) {
        uVar2 = 0x80;
      }
      (**(code **)(param_1 + 0x32c))(param_1,*(undefined1 *)(param_1 + 0x1d0),iVar1,uVar2 & 0xffff);
      uVar2 = uVar3;
    } while (param_3 - uVar3 < param_3);
  }
  FUN_2c4a94e0();
  return;
}


/* FUN_10045e9c @ 0x10045e9c */

void FUN_10045e9c(byte *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar3 = *(int *)PTR_DAT_10045f18;
  if ((param_1 != (byte *)0x0) && (param_2 != 0)) {
    uVar4 = (uint)*param_1;
    uVar5 = ((int)PTR_DAT_10045f1c - (int)PTR_DAT_10045f20) * 0x20 & 0xff00;
    if (uVar4 < 0x65) {
      FUN_100a5b78(DAT_10045f30 | uVar5,DAT_10045f2c,DAT_10045f34,uVar4,param_1,uVar4,param_3);
      (**(code **)(DAT_10045f38 + 0x18))(uVar4);
      iVar2 = (**(code **)(DAT_10045f3c + 8))();
      if (iVar2 == 0x65) {
        FUN_1004375c(0x65,0);
      }
      (**(code **)(DAT_10045f40 + 8))();
      FUN_10045c0c();
      uVar1 = 1;
      goto LAB_10045f04;
    }
    FUN_100a5b78(DAT_10045f24 | uVar5,DAT_10045f2c,DAT_10045f28,uVar4,param_1,param_2,param_3);
  }
  uVar1 = 0xffffffea;
LAB_10045f04:
  if (*(int *)PTR_DAT_10045f18 != iVar3) {
    FUN_1013cdc0(uVar1);
  }
  return;
}


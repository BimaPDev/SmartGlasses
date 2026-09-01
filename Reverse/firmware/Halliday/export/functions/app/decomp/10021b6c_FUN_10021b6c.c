/* FUN_10021b6c @ 0x10021b6c */

void FUN_10021b6c(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *DAT_10021b9c;
  uVar2 = 0;
  if (param_1 != 0) {
    uVar1 = FUN_1011ea10();
    if (uVar1 < 0x41) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  if (*DAT_10021b9c != iVar3) {
    FUN_1013cdc0(uVar2);
  }
  return;
}


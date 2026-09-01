/* FUN_10138cfa @ 0x10138cfa */

uint FUN_10138cfa(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_1011e920();
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    iVar1 = FUN_100ed8f8(0,param_1);
    if (iVar1 == 0) {
      uVar2 = FUN_100ed8f8(2,param_1);
    }
    else {
      uVar2 = 1;
    }
    uVar2 = uVar2 & 1;
  }
  return uVar2;
}


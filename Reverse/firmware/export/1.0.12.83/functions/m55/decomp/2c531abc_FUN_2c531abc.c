/* FUN_2c531abc @ 0x2c531abc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c531abc(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = *param_1;
  uVar3 = param_1[1];
  iVar1 = FUN_2c53195c(uVar4,uVar3,_LAB_2c531af8);
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = FUN_2c53195c(uVar4,uVar3,_LAB_2c531afc);
    if (iVar1 == 0) {
      return 1;
    }
    iVar1 = FUN_2c53195c(uVar4,uVar3,_LAB_2c531b00);
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    else {
      uVar2 = 0xfe;
    }
  }
  return uVar2;
}


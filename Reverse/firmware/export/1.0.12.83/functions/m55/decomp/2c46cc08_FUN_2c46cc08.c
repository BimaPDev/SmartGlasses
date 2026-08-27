/* FUN_2c46cc08 @ 0x2c46cc08 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c46cc08(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_2c46c580();
  if (iVar1 != 0) {
    uVar2 = FUN_2c46c7dc(param_1);
    FUN_2c46c5e8(iVar1,_LAB_2c46ccdc,uVar2);
    uVar2 = FUN_2c46c7dc(param_1 + 0x28);
    FUN_2c46c5e8(iVar1,_LAB_2c46cce0,uVar2);
    uVar2 = FUN_2c46c7dc(param_1 + 0x2a);
    FUN_2c46c5e8(iVar1,_LAB_2c46cce4,uVar2);
    uVar2 = FUN_2c46c7dc(param_1 + 0x32);
    FUN_2c46c5e8(iVar1,_LAB_2c46cce8,uVar2);
    uVar2 = FUN_2c46c7dc(param_1 + 0x34);
    FUN_2c46c5e8(iVar1,_LAB_2c46ccec,uVar2);
    iVar3 = FUN_2c46c580();
    if ((iVar3 != 0) && (*(int *)(param_1 + 0x5c) != 0)) {
      uVar2 = FUN_2c46c7dc(*(int *)(param_1 + 0x5c));
      FUN_2c46c5e8(iVar3,_LAB_2c46ccf0,uVar2);
    }
    FUN_2c46c5e8(iVar1,_LAB_2c46ccf4,iVar3);
    uVar2 = func_0x2c46c544(iVar1,2);
                    /* WARNING: Subroutine does not return */
    TRACE(4,0xb5,_LAB_2c46cd00,_LAB_2c46ccfc,_LAB_2c46ccf8,uVar2);
  }
  return 0xffffffff;
}


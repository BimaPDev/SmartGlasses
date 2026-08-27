/* FUN_2c5ca544 @ 0x2c5ca544 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5ca544(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_2c5c55d8();
  iVar1 = func_0x2c5c5b38();
  if (iVar1 == 0) {
    return;
  }
  if (*(char *)(iVar1 + 0x38) != '\x01') {
    FUN_2c48e424(param_1,_LAB_2c5ca6a8);
    uVar2 = FUN_2c48de10();
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5ca6b4,0xe1,_LAB_2c5ca6b0,_LAB_2c5ca6ac,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c5ca6b4,0xdd,_LAB_2c5ca6b0,_LAB_2c5ca6dc);
}


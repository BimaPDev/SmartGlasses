/* FUN_2c5c7184 @ 0x2c5c7184 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5c7184(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  FUN_2c5c55d8();
  iVar3 = FUN_2c5c6294();
  uVar1 = _LAB_2c5c71bc;
  if (iVar3 != 0) {
    uVar4 = FUN_2c5c561c();
    uVar2 = _LAB_2c5c71c0;
    *(undefined8 *)(param_1 + 0x4e8) = uVar4;
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5c71c4,0x323,uVar2,uVar1);
  }
  return;
}


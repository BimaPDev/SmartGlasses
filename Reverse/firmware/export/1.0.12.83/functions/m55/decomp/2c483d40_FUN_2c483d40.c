/* FUN_2c483d40 @ 0x2c483d40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c483d40(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((*_LAB_2c483df4 != 0) && (iVar1 = FUN_2c483590(), iVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x33,_LAB_2c483e00,_LAB_2c483dfc,_LAB_2c483e08,_LAB_2c483e04);
  }
  iVar1 = FUN_2c482fc8();
  if (iVar1 != 1) {
    iVar1 = FUN_2c482fc8();
    if ((iVar1 != 0) && (iVar1 = FUN_2c482c0c(), iVar1 != 0)) {
      return;
    }
    iVar1 = FUN_2c483590(param_1);
    if ((iVar1 != 0) || (iVar1 = func_0x2c483558(param_1), iVar1 != 0)) {
      uVar2 = FUN_2c483590(param_1);
      uVar3 = func_0x2c483558(param_1);
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x3f,_LAB_2c483e00,_LAB_2c483dfc,_LAB_2c483df8,uVar2,uVar3);
    }
    iVar1 = func_0x2c483574(param_1);
    if ((iVar1 != 0) && (iVar1 = func_0x2c4785f0(), iVar1 != 0)) {
      uVar2 = 0;
      goto FUN_2c483cf8;
    }
  }
  uVar2 = 1;
FUN_2c483cf8:
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x53,_LAB_2c483d3c,_LAB_2c483d38,_LAB_2c483d30,_LAB_2c483d34,uVar2);
}


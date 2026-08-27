/* FUN_2c478d24 @ 0x2c478d24 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c478d24(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  piVar1 = _LAB_2c478db8;
  iVar4 = *_LAB_2c478db4;
  iVar2 = FUN_2c478b68();
  *piVar1 = iVar2;
  if (iVar2 != 0) {
    uVar3 = (**(code **)(iVar2 + 0x24))();
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x85,_LAB_2c478dc8,_LAB_2c478dc4,_LAB_2c478dc0,_LAB_2c478dbc,uVar3);
  }
  if (*_LAB_2c478db4 == iVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}


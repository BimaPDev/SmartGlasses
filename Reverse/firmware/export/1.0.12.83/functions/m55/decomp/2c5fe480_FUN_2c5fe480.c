/* FUN_2c5fe480 @ 0x2c5fe480 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5fe480(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_c;
  
  puVar1 = _LAB_2c5fe4ec;
  uVar4 = _LAB_2c5fe4e8;
  iStack_c = *_LAB_2c5fe4e4;
  *_LAB_2c5fe4e0 = 0;
  uVar4 = FUN_2c64419c(uVar4,0);
  *puVar1 = uVar4;
  uStack_18 = 0;
  uStack_14 = 0;
  iVar5 = FUN_2c5e31b4(0x37,&uStack_18);
  uVar3 = _LAB_2c5fe4fc;
  uVar2 = _LAB_2c5fe4f8;
  uVar4 = _LAB_2c5fe4f0;
  if (iVar5 != 0) {
    *_LAB_2c5fe4f4 = uStack_18;
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x68,uVar3,uVar2,uVar4,uStack_18);
  }
  if (*_LAB_2c5fe4e4 == iStack_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}


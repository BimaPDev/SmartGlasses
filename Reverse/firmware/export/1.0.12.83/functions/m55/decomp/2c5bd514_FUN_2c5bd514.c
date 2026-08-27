/* FUN_2c5bd514 @ 0x2c5bd514 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5bd514(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int iStack_14;
  
  FUN_2c5bd474();
  FUN_2c5b8954();
  iStack_14 = *_LAB_2c5c50d8;
  uStack_20 = 0;
  uStack_1c = 0;
  iVar2 = FUN_2c5e31b4(5,&uStack_20);
  if (iVar2 == 0) {
    uVar4 = *_LAB_2c5c50dc;
  }
  else {
    *_LAB_2c5c50dc = uStack_20;
    uVar4 = uStack_20;
  }
  puVar1 = _LAB_2c5c50e0;
  uVar3 = FUN_2c5e8cb4(1);
  uVar4 = FUN_2c62bdd8(_LAB_2c5c50e4,uVar4,uVar3);
  *puVar1 = uVar4;
  FUN_2c62be70(uVar4,0xffffffff);
  FUN_2c62be40(*puVar1);
  uVar4 = FUN_2c5e8cb4(1);
  puVar1 = _LAB_2c5c50e8;
  uVar4 = FUN_2c62bdd8(_LAB_2c5c50ec,3000,uVar4);
  *puVar1 = uVar4;
  FUN_2c62be70(uVar4,0xffffffff);
  FUN_2c62be40(*puVar1);
  uVar4 = FUN_2c5e8cb4(1);
  puVar1 = _LAB_2c5c50f0;
  uVar4 = FUN_2c62bdd8(PTR_LAB_2c5d4d04_1_2c5c50f4,5000,uVar4);
  *puVar1 = uVar4;
  FUN_2c62be70(uVar4,0xffffffff);
  FUN_2c62be40(*puVar1);
  FUN_2c620f0c(0x3e81,PTR_LAB_2c5d5194_1_2c5c50f8,0);
  FUN_2c620f0c(0x3e82,PTR_LAB_2c5d4e14_1_2c5c50fc,0);
  FUN_2c620f0c(0x3e83,PTR_LAB_2c5d4e9c_1_2c5c5100,0);
  FUN_2c620f0c(0x3e84,PTR_LAB_2c5d44d8_1_2c5c5104,0);
  FUN_2c620f0c(0x3e85,PTR_LAB_2c5d4e6c_1_2c5c5108,0);
  func_0x2c63b4b8(PTR_LAB_2c5d4db0_1_2c5c510c);
  if (*_LAB_2c5c50d8 == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}


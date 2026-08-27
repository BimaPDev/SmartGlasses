/* FUN_2c5c6490 @ 0x2c5c6490 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5c6490(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_58 [4];
  undefined4 uStack_54;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_18;
  int iStack_14;
  
  uVar1 = FUN_2c48e738();
  uVar2 = registry_lookup(0x1054);
  FUN_2c48e5b4(uVar1,_LAB_2c5c6560,uVar2);
  uVar2 = registry_lookup(0x1055);
  FUN_2c48e5b4(uVar1,_LAB_2c5c6564,uVar2);
  FUN_2c48e518(0,uVar1,_LAB_2c5c6568);
  FUN_2c48e4c8(uVar1,_LAB_2c5c656c,0);
  uVar2 = FUN_2c48e738();
  FUN_2c48e5b4(uVar2,_LAB_2c5c6574,_LAB_2c5c6570);
  FUN_2c48e474(uVar2,_LAB_2c5c6578,uVar1);
  uVar1 = FUN_2c48e3e8(uVar2);
  uVar3 = FUN_2c5d78f0();
  FUN_2c5d7cfc(uVar3,uVar1,1);
  FUN_2c48e87c(uVar1);
  FUN_2c48dea0(uVar2);
  FUN_2c5c55d8();
  uVar1 = FUN_2c5c5b3c();
  iVar4 = FUN_2c66b624(uVar1,_LAB_2c5c657c);
  if (iVar4 == 0) {
    uStack_18 = _LAB_2c5c6580;
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5c6588,0x193,_LAB_2c5c6584);
  }
  iStack_14 = *_LAB_2c5d4f18;
  FUN_2c674268(auStack_58,0,0x44,0);
  uStack_44 = _LAB_2c5d4f20;
  uStack_40 = _LAB_2c5d4f1c;
  uStack_54 = FUN_2c5e2e8c(_LAB_2c5d4f24);
  uStack_30 = 1;
  uStack_34 = 0x1058;
  uStack_18._0_2_ = CONCAT11(1,(undefined1)uStack_18);
  uStack_3c = 0x1054;
  uStack_38 = 0x1055;
  uStack_2c = _LAB_2c5d4f28;
  FUN_2c5e8f4c(auStack_58);
  if (*_LAB_2c5d4f18 == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}


/* FUN_2c5c7664 @ 0x2c5c7664 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5c7664(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_58 [4];
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_20;
  undefined1 uStack_17;
  
  FUN_2c5c55d8();
  uVar1 = FUN_2c5c5b3c();
  iVar2 = FUN_2c66b624(uVar1,_LAB_2c5c76e0);
  if (iVar2 == 0) {
    uStack_20 = _LAB_2c5c76e4;
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5c76e8,0x178,_LAB_2c5c76ec);
  }
  iVar2 = *_LAB_2c5d4ea0;
  FUN_2c674268(auStack_58,0,0x44,0);
  uStack_44 = _LAB_2c5d4ea8;
  uStack_40 = _LAB_2c5d4ea4;
  uStack_54 = FUN_2c5e2e8c(_LAB_2c5d4eac);
  uStack_30 = 0;
  uStack_2c = _LAB_2c5d4eb0;
  uStack_50 = param_2;
  uStack_4c = param_3;
  uStack_48 = registry_lookup(0x1058);
  uStack_17 = 1;
  FUN_2c5e8f4c(auStack_58);
  if (*_LAB_2c5d4ea0 == iVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}


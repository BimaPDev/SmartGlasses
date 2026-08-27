/* FUN_2c59324c @ 0x2c59324c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c59324c(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined1 *puStack_6c;
  undefined4 uStack_68;
  undefined1 auStack_64 [16];
  undefined1 *puStack_54;
  undefined4 uStack_50;
  undefined1 auStack_4c [16];
  undefined1 *puStack_3c;
  undefined4 uStack_38;
  undefined1 auStack_34 [16];
  int iStack_24;
  
  uVar1 = _LAB_2c5932fc;
  iStack_24 = *_LAB_2c5932f4;
  uStack_70 = _LAB_2c5932fc;
  uStack_68 = 0;
  auStack_64[0] = 0;
  uStack_50 = 0;
  auStack_4c[0] = 0;
  uStack_38 = 0;
  auStack_34[0] = 0;
  puStack_6c = auStack_64;
  puStack_54 = auStack_4c;
  puStack_3c = auStack_34;
  FUN_2c52f5f4(&puStack_6c,*(int *)(param_3 + 4) + 0xbc,*(int *)(param_3 + 4),0);
  uStack_74 = *(undefined4 *)(param_2 + 4);
  uStack_78 = _LAB_2c5932f8;
  FUN_2c5931e0(param_1,&uStack_78,&uStack_70,param_4);
  uStack_70 = uVar1;
  if (puStack_3c != auStack_34) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (puStack_54 != auStack_4c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (puStack_6c != auStack_64) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (*_LAB_2c5932f4 == iStack_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}


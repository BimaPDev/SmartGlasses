/* FUN_2c521e10 @ 0x2c521e10 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c521e10(undefined4 param_1)

{
  undefined4 uVar1;
  uint in_fpscr;
  undefined8 uVar2;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 auStack_3c [32];
  int iStack_1c;
  
  iStack_1c = *_LAB_2c521ea8;
  uStack_44 = _DAT_2c521e9c;
  uStack_54 = _LAB_2c521ea4;
  uStack_50 = _LAB_2c521e98;
  uStack_4c = _LAB_2c521e98;
  uStack_48 = _LAB_2c521ea0;
  uVar1 = FUN_2c48e738(0);
  uVar2 = VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar2,uVar1,_LAB_2c521eac);
  FUN_2c5c55d8();
  FUN_2c5c561c();
  FUN_2c62c3b0(auStack_3c,0x20);
  FUN_2c62dbd4(auStack_3c,0x1f,_LAB_2c521eb0);
  FUN_2c48e5b4(uVar1,_LAB_2c521eb4,auStack_3c);
  uStack_40 = uVar1;
  FUN_2c4861f4(&uStack_54);
  if (*_LAB_2c521ea8 == iStack_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}


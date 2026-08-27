/* FUN_2c496b28 @ 0x2c496b28 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c496b28(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint in_fpscr;
  undefined8 uVar4;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 auStack_54 [32];
  undefined1 auStack_34 [32];
  int iStack_14;
  
  iStack_14 = *_LAB_2c496cec;
  uStack_5c = _LAB_2c496ce4;
  uStack_64 = _LAB_2c496ce0;
  uStack_60 = _LAB_2c496ce8;
  uStack_6c = _LAB_2c496ce0;
  uStack_68 = _LAB_2c496ce0;
  uVar1 = FUN_2c48e738(0);
  FUN_2c6742b8(auStack_54,0x20);
  FUN_2c48e5b4(uVar1,_LAB_2c496cf0,auStack_54);
  uVar2 = FUN_2c49d134();
  uVar4 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar4,uVar1,_LAB_2c496cf4);
  uVar2 = FUN_2c49d0d8();
  uVar4 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar4,uVar1,_LAB_2c496cf8);
  uStack_70 = 0xffffffff;
  iVar3 = FUN_2c49b954(&uStack_70);
  if (iVar3 == 0) {
    uVar4 = VectorSignedToFloat(uStack_70,(byte)(in_fpscr >> 0x16) & 3);
    FUN_2c48e518((int)uVar4,uVar1,_LAB_2c496d34);
  }
  uVar2 = FUN_2c496af0();
  FUN_2c66b450(auStack_34,0x20,_LAB_2c496cfc,uVar2,0);
  FUN_2c48e5b4(uVar1,_LAB_2c496d00,auStack_34);
  iVar3 = thunk_FUN_2c489a64();
  if (iVar3 == 0) {
    uVar2 = (undefined4)uRam2c496cd8;
  }
  else {
    uVar2 = FUN_2c489b44();
    uVar4 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
    uVar2 = (undefined4)uVar4;
  }
  FUN_2c48e518(uVar2,uVar1,_LAB_2c496d04);
  uVar2 = FUN_2c48ee94(1);
  uVar4 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar4,uVar1,_LAB_2c496d08);
  uVar2 = FUN_2c48ee94(2);
  uVar4 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar4,uVar1,_LAB_2c496d0c);
  uVar4 = VectorUnsignedToFloat(*_LAB_2c496d10,(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar4,uVar1,_LAB_2c496d14);
  uVar2 = FUN_2c63c57c();
  uVar4 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar4,uVar1,_LAB_2c496d18);
  uVar2 = func_0x2c674058(5,1);
  uVar4 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar4,uVar1,_LAB_2c496d1c);
  uVar2 = func_0x2c48a414();
  uVar4 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar4,uVar1,_LAB_2c496d20);
  uVar2 = func_0x2c48a408();
  uVar4 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar4,uVar1,_LAB_2c496d24);
  uVar2 = func_0x2c48a418();
  uVar4 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar4,uVar1,_LAB_2c496d28);
  uVar2 = func_0x2c48a410();
  uVar4 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar4,uVar1,_LAB_2c496d2c);
  uVar2 = FUN_2c4c1614();
  uVar4 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar4,uVar1,_LAB_2c496d30);
  uStack_58 = uVar1;
  FUN_2c4861f4(&uStack_6c);
  if (*_LAB_2c496cec == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}


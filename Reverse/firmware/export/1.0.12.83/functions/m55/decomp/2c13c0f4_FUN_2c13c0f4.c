/* FUN_2c13c0f4 @ 0x2c13c0f4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c13c0f4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint in_fpscr;
  undefined4 uStack_b8;
  undefined1 auStack_b4 [4];
  undefined4 uStack_b0;
  undefined4 auStack_ac [4];
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 auStack_74 [4];
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 auStack_3c [4];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_c;
  
  iStack_c = *_DAT_2c13c220;
  uStack_b8 = 0;
  FUN_2c13bf44(_DAT_2c13c224,&uStack_b8,param_3,0);
  FUN_2c13bf9c(_DAT_2c13c224,uStack_b8);
  FUN_2c13e9dc(auStack_b4,0,0x38);
  FUN_2c14486c();
  uVar1 = FUN_2c1448c4();
  uStack_b0 = VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
  puVar2 = auStack_ac;
  iVar3 = _DAT_2c13c228;
  do {
    uVar1 = VectorSignedToFloat(*(undefined4 *)(iVar3 + 4),(byte)(in_fpscr >> 0x16) & 3);
    iVar3 = iVar3 + 4;
    *puVar2 = uVar1;
    puVar2 = puVar2 + 1;
  } while (iVar3 != _DAT_2c13c228 + 0x18);
  uStack_98 = VectorUnsignedToFloat(uStack_b8,(byte)(in_fpscr >> 0x16) & 3);
  uStack_9c = 0;
  FUN_2c13ac68(auStack_b4);
  FUN_2c13e9dc(&uStack_78,0,0x34);
  uStack_7c = 1;
  FUN_2c14486c();
  uVar1 = FUN_2c1448c4();
  uStack_78 = VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
  puVar2 = auStack_74;
  iVar3 = _DAT_2c13c22c;
  do {
    uVar1 = VectorSignedToFloat(*(undefined4 *)(iVar3 + 4),(byte)(in_fpscr >> 0x16) & 3);
    iVar3 = iVar3 + 4;
    *puVar2 = uVar1;
    puVar2 = puVar2 + 1;
  } while (iVar3 != _DAT_2c13c22c + 0x18);
  uStack_60 = VectorUnsignedToFloat(uStack_b8,(byte)(in_fpscr >> 0x16) & 3);
  uStack_64 = 0;
  FUN_2c13ac68(&uStack_7c);
  FUN_2c13e9dc(&uStack_40,0,0x34);
  uStack_44 = 2;
  FUN_2c14486c();
  uVar1 = FUN_2c1448c4();
  uStack_40 = VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
  puVar2 = auStack_3c;
  iVar3 = _DAT_2c13c230;
  do {
    uVar1 = VectorSignedToFloat(*(undefined4 *)(iVar3 + 4),(byte)(in_fpscr >> 0x16) & 3);
    iVar3 = iVar3 + 4;
    *puVar2 = uVar1;
    puVar2 = puVar2 + 1;
  } while (iVar3 != _DAT_2c13c230 + 0x18);
  uStack_28 = VectorUnsignedToFloat(uStack_b8,(byte)(in_fpscr >> 0x16) & 3);
  uStack_2c = 0;
  FUN_2c13ac68(&uStack_44);
  if (*_DAT_2c13c220 == iStack_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c13424c();
}


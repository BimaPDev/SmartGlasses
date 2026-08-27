/* FUN_2c484f68 @ 0x2c484f68 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c484f68(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  uint in_fpscr;
  undefined8 uVar7;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 auStack_68 [8];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined2 uStack_58;
  undefined1 auStack_54 [17];
  undefined1 uStack_43;
  undefined1 auStack_40 [17];
  undefined1 uStack_2f;
  int iStack_2c;
  
  iStack_2c = *_LAB_2c4850c8;
  iVar1 = FUN_2c46de74();
  uVar2 = _LAB_2c48510c;
  puVar4 = (undefined1 *)(iVar1 + -1);
  puVar6 = auStack_68 + 6;
  do {
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + -1;
    *puVar6 = *puVar4;
  } while (puVar4 != (undefined1 *)(iVar1 + 5));
  puVar6 = auStack_54;
  puVar4 = auStack_68;
  do {
    puVar5 = puVar4 + 1;
    FUN_2c66b4b8(puVar6,uVar2,*puVar4);
    uVar3 = _LAB_2c48510c;
    puVar6[2] = 0x3a;
    puVar6 = puVar6 + 3;
    puVar4 = puVar5;
  } while (auStack_68 + 6 != puVar5);
  uStack_43 = 0;
  iVar1 = FUN_2c471604(1);
  puVar6 = (undefined1 *)(iVar1 + -1);
  puVar4 = auStack_40;
  do {
    puVar6 = puVar6 + 1;
    FUN_2c66b4b8(puVar4,uVar3,*puVar6);
    puVar4[2] = 0x3a;
    puVar4 = puVar4 + 3;
  } while ((undefined1 *)(iVar1 + 5) != puVar6);
  uStack_58 = 0;
  uStack_2f = 0;
  uStack_78 = _LAB_2c4850cc;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_74 = _LAB_2c4850d4;
  uStack_80 = _LAB_2c4850cc;
  uStack_7c = _LAB_2c4850cc;
  uStack_70 = _LAB_2c4850d8;
  FUN_2c66b4b8(&uStack_60,_LAB_2c4850d0,0x1003);
  uVar2 = FUN_2c48e738();
  FUN_2c48e5b4(uVar2,_LAB_2c4850dc,_LAB_2c4850e0);
  FUN_2c48e5b4(uVar2,_LAB_2c4850e4,&uStack_60);
  uVar3 = func_0x2c495ddc();
  FUN_2c48e5b4(uVar2,_LAB_2c4850e8,uVar3);
  FUN_2c48e5b4(uVar2,_LAB_2c4850ec,auStack_54);
  FUN_2c48e5b4(uVar2,_LAB_2c4850f0,auStack_40);
  uVar7 = VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar7,uVar2,_LAB_2c4850f4);
  FUN_2c48e5b4(uVar2,_LAB_2c4850f8,param_2);
  FUN_2c48e518((int)uRam2c4850c0,uVar2,_LAB_2c4850fc);
  FUN_2c48e5b4(uVar2,_LAB_2c485100,_LAB_2c4850e0);
  FUN_2c48e518((int)uRam2c4850c0,uVar2,_LAB_2c485104);
  FUN_2c48e518((int)uVar7,uVar2,_LAB_2c485108);
  uStack_6c = uVar2;
  FUN_2c4861f4(&uStack_80);
  if (*_LAB_2c4850c8 == iStack_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}


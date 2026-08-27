/* FUN_2c485110 @ 0x2c485110 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c485110(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  uint in_fpscr;
  undefined8 uVar7;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 auStack_60 [8];
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined2 uStack_50;
  undefined1 auStack_4c [17];
  undefined1 uStack_3b;
  undefined1 auStack_38 [17];
  undefined1 uStack_27;
  int iStack_24;
  
  iStack_24 = *_LAB_2c485260;
  iVar1 = FUN_2c46de74();
  uVar2 = _LAB_2c4852a0;
  puVar4 = (undefined1 *)(iVar1 + -1);
  puVar6 = auStack_60 + 6;
  do {
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + -1;
    *puVar6 = *puVar4;
  } while (puVar4 != (undefined1 *)(iVar1 + 5));
  puVar6 = auStack_4c;
  puVar4 = auStack_60;
  do {
    puVar5 = puVar4 + 1;
    FUN_2c66b4b8(puVar6,uVar2,*puVar4);
    uVar3 = _LAB_2c4852a0;
    puVar6[2] = 0x3a;
    puVar6 = puVar6 + 3;
    puVar4 = puVar5;
  } while (auStack_60 + 6 != puVar5);
  uStack_3b = 0;
  iVar1 = FUN_2c471604(1);
  puVar6 = (undefined1 *)(iVar1 + -1);
  puVar4 = auStack_38;
  do {
    puVar6 = puVar6 + 1;
    FUN_2c66b4b8(puVar4,uVar3,*puVar6);
    puVar4[2] = 0x3a;
    puVar4 = puVar4 + 3;
  } while ((undefined1 *)(iVar1 + 5) != puVar6);
  uStack_27 = 0;
  uStack_50 = 0;
  uStack_70 = _LAB_2c485264;
  uStack_6c = _LAB_2c485268;
  uStack_78 = _LAB_2c485264;
  uStack_74 = _LAB_2c485264;
  uStack_68 = _LAB_2c48526c;
  uStack_58 = 0;
  uStack_54 = 0;
  FUN_2c66b4b8(&uStack_58,_LAB_2c485270,0x1003);
  uVar2 = FUN_2c48e738();
  FUN_2c48e5b4(uVar2,_LAB_2c485274,_LAB_2c485278);
  FUN_2c48e5b4(uVar2,_LAB_2c48527c,&uStack_58);
  uVar3 = func_0x2c495ddc();
  FUN_2c48e5b4(uVar2,_LAB_2c485280,uVar3);
  FUN_2c48e5b4(uVar2,_LAB_2c485284,auStack_4c);
  FUN_2c48e5b4(uVar2,_LAB_2c485288,auStack_38);
  uVar7 = VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar7,uVar2,_LAB_2c48528c);
  uVar7 = VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar7,uVar2,_LAB_2c485290);
  FUN_2c48e518((int)uRam2c485258,uVar2,_LAB_2c485294);
  FUN_2c48e5b4(uVar2,_LAB_2c485298,_LAB_2c485278);
  FUN_2c48e518((int)uRam2c485258,uVar2,_LAB_2c48529c);
  uStack_64 = uVar2;
  FUN_2c4861f4(&uStack_78);
  if (*_LAB_2c485260 == iStack_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}


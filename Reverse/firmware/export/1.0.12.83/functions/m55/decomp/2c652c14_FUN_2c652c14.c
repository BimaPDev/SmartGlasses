/* FUN_2c652c14 @ 0x2c652c14 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_2c652c14(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            byte param_5,int param_6,byte param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 *puVar5;
  int *piVar6;
  undefined8 in_d0;
  undefined4 auStack_b0 [2];
  undefined8 uStack_a8;
  undefined1 auStack_a0 [64];
  int iStack_60;
  uint uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 auStack_4c [4];
  undefined1 *apuStack_48 [2];
  undefined1 auStack_40 [20];
  
  uStack_5c = (uint)param_5;
  uStack_58 = param_3;
  uStack_54 = param_4;
  func_0x2c64cde0(auStack_4c,param_6 + 0x6c);
  uVar3 = FUN_2c659524(auStack_4c);
  piVar6 = auStack_b0;
  apuStack_48[0] = (undefined1 *)FUN_2c64ce10();
  puVar5 = auStack_a0;
  auStack_b0[0] = 0;
  iStack_60 = FUN_2c65233c(apuStack_48,puVar5,0x40,_LAB_2c652d20);
  if (0x3f < iStack_60) {
    uVar4 = iStack_60 + 8;
    iStack_60 = iStack_60 + 1;
    iVar1 = -(uVar4 & 0xfffffff8);
    piVar6 = (int *)((int)auStack_b0 + iVar1);
    apuStack_48[0] = (undefined1 *)FUN_2c64ce10();
    iVar2 = iStack_60;
    puVar5 = auStack_a0 + iVar1;
    *(undefined4 *)((int)auStack_b0 + iVar1) = 0;
    *(undefined8 *)((int)&uStack_a8 + iVar1) = in_d0;
    iStack_60 = FUN_2c65233c(apuStack_48,puVar5,iVar2,_LAB_2c652d20);
  }
  apuStack_48[0] = auStack_40;
  FUN_2c65e9fa(apuStack_48,iStack_60,0);
  FUN_2c6523d4(uVar3,puVar5,puVar5 + iStack_60,apuStack_48[0]);
  if (uStack_5c == 0) {
    piVar6[1] = (uint)param_7;
    piVar6[2] = (int)apuStack_48;
    *piVar6 = param_6;
    FUN_2c6529e2(param_1,param_2,uStack_58,uStack_54);
  }
  else {
    piVar6[1] = (uint)param_7;
    piVar6[2] = (int)apuStack_48;
    *piVar6 = param_6;
    FUN_2c6527b0(param_1,param_2,uStack_58,uStack_54);
  }
  FUN_2c65e94c(apuStack_48);
  FUN_2c64cebc(auStack_4c);
  return param_1;
}


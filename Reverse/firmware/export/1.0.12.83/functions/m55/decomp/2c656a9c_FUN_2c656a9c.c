/* FUN_2c656a9c @ 0x2c656a9c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_2c656a9c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            char param_5,int param_6,int param_7)

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
  undefined1 auStack_a0 [68];
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 auStack_4c [4];
  undefined1 *apuStack_48 [2];
  undefined1 auStack_40 [20];
  
  uStack_58 = param_3;
  uStack_54 = param_4;
  func_0x2c64cde0(auStack_4c,param_6 + 0x6c);
  uVar3 = FUN_2c65faf0(auStack_4c);
  piVar6 = auStack_b0;
  apuStack_48[0] = (undefined1 *)FUN_2c64ce10();
  puVar5 = auStack_a0;
  auStack_b0[0] = 0;
  iStack_5c = FUN_2c65233c(apuStack_48,puVar5,0x40,_LAB_2c656b90);
  if (0x3f < iStack_5c) {
    uVar4 = iStack_5c + 8;
    iStack_5c = iStack_5c + 1;
    iVar1 = -(uVar4 & 0xfffffff8);
    piVar6 = (int *)((int)auStack_b0 + iVar1);
    apuStack_48[0] = (undefined1 *)FUN_2c64ce10();
    iVar2 = iStack_5c;
    puVar5 = auStack_a0 + iVar1;
    *(undefined4 *)((int)auStack_b0 + iVar1) = 0;
    *(undefined8 *)((int)&uStack_a8 + iVar1) = in_d0;
    iStack_5c = FUN_2c65233c(apuStack_48,puVar5,iVar2,_LAB_2c656b90);
  }
  apuStack_48[0] = auStack_40;
  func_0x2c664954(apuStack_48,iStack_5c,0);
  FUN_2c6565d4(uVar3,puVar5,puVar5 + iStack_5c,apuStack_48[0]);
  piVar6[2] = (int)apuStack_48;
  piVar6[1] = param_7;
  *piVar6 = param_6;
  if (param_5 == '\0') {
    FUN_2c65685c(param_1,param_2,uStack_58,uStack_54);
  }
  else {
    FUN_2c65661c();
  }
  FUN_2c6648a4(apuStack_48);
  FUN_2c64cebc(auStack_4c);
  return param_1;
}


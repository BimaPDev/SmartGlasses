/* FUN_2c660850 @ 0x2c660850 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_2c660850(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            char param_5,int param_6,int param_7)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 *puVar5;
  int *piVar6;
  undefined8 in_d0;
  undefined4 auStack_a0 [2];
  undefined8 uStack_98;
  undefined1 auStack_90 [68];
  undefined1 *puStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  undefined4 auStack_34 [2];
  
  uStack_48 = param_3;
  uStack_44 = param_4;
  func_0x2c64cde0(auStack_38,param_6 + 0x6c);
  uVar3 = FUN_2c65faf0(auStack_38);
  piVar6 = auStack_a0;
  auStack_34[0] = FUN_2c64ce10();
  puVar5 = auStack_90;
  auStack_a0[0] = 0;
  puStack_4c = (undefined1 *)FUN_2c65233c(auStack_34,puVar5,0x40,_LAB_2c660950);
  if (0x3f < (int)puStack_4c) {
    uVar4 = (int)puStack_4c + 8;
    puStack_4c = (undefined1 *)((int)puStack_4c + 1);
    iVar1 = -(uVar4 & 0xfffffff8);
    piVar6 = (int *)((int)auStack_a0 + iVar1);
    auStack_34[0] = FUN_2c64ce10();
    puVar2 = puStack_4c;
    puVar5 = auStack_90 + iVar1;
    *(undefined4 *)((int)auStack_a0 + iVar1) = 0;
    *(undefined8 *)((int)&uStack_98 + iVar1) = in_d0;
    puStack_4c = (undefined1 *)FUN_2c65233c(auStack_34,puVar5,puVar2,_LAB_2c660950);
  }
  FUN_2c651558(auStack_34,puStack_4c,0,auStack_3c);
  puStack_4c = puVar5 + (int)puStack_4c;
  FUN_2c65169c(auStack_34);
  FUN_2c6565d4(uVar3,puVar5,puStack_4c,auStack_34[0]);
  piVar6[2] = (int)auStack_34;
  piVar6[1] = param_7;
  *piVar6 = param_6;
  if (param_5 == '\0') {
    FUN_2c6605fc(param_1,param_2,uStack_48,uStack_44);
  }
  else {
    FUN_2c6603a8();
  }
  FUN_2c6515c0(auStack_34);
  FUN_2c64cebc(auStack_38);
  return param_1;
}


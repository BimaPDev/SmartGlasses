/* FUN_2c65a2d4 @ 0x2c65a2d4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_2c65a2d4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            byte param_5,int param_6,byte param_7)

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
  undefined1 auStack_90 [64];
  undefined1 *puStack_50;
  uint uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  undefined4 auStack_34 [2];
  
  uStack_4c = (uint)param_5;
  uStack_48 = param_3;
  uStack_44 = param_4;
  func_0x2c64cde0(auStack_38,param_6 + 0x6c);
  uVar3 = FUN_2c659524(auStack_38);
  piVar6 = auStack_a0;
  auStack_34[0] = FUN_2c64ce10();
  puVar5 = auStack_90;
  auStack_a0[0] = 0;
  puStack_50 = (undefined1 *)FUN_2c65233c(auStack_34,puVar5,0x40,_LAB_2c65a3e8);
  if (0x3f < (int)puStack_50) {
    uVar4 = (int)puStack_50 + 8;
    puStack_50 = (undefined1 *)((int)puStack_50 + 1);
    iVar1 = -(uVar4 & 0xfffffff8);
    piVar6 = (int *)((int)auStack_a0 + iVar1);
    auStack_34[0] = FUN_2c64ce10();
    puVar2 = puStack_50;
    puVar5 = auStack_90 + iVar1;
    *(undefined4 *)((int)auStack_a0 + iVar1) = 0;
    *(undefined8 *)((int)&uStack_98 + iVar1) = in_d0;
    puStack_50 = (undefined1 *)FUN_2c65233c(auStack_34,puVar5,puVar2,_LAB_2c65a3e8);
  }
  FUN_2c650df8(auStack_34,puStack_50,0,auStack_3c);
  puStack_50 = puVar5 + (int)puStack_50;
  FUN_2c650f64(auStack_34);
  FUN_2c6523d4(uVar3,puVar5,puStack_50,auStack_34[0]);
  if (uStack_4c == 0) {
    piVar6[1] = (uint)param_7;
    piVar6[2] = (int)auStack_34;
    *piVar6 = param_6;
    FUN_2c65a080(param_1,param_2,uStack_48,uStack_44);
  }
  else {
    piVar6[1] = (uint)param_7;
    piVar6[2] = (int)auStack_34;
    *piVar6 = param_6;
    FUN_2c659e2c(param_1,param_2,uStack_48,uStack_44);
  }
  FUN_2c650e60(auStack_34);
  FUN_2c64cebc(auStack_38);
  return param_1;
}


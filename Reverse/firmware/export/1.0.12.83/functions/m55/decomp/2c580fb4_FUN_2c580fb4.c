/* FUN_2c580fb4 @ 0x2c580fb4 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c580fb4(int param_1,int param_2,undefined4 param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  undefined4 uStack_1a4;
  int iStack_1a0;
  int iStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  uint *puStack_184;
  int iStack_180;
  uint auStack_17c [4];
  undefined4 uStack_16c;
  uint *puStack_168;
  int iStack_164;
  uint auStack_160 [4];
  undefined1 uStack_150;
  undefined4 uStack_14c;
  undefined1 uStack_148;
  undefined2 uStack_146;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 *puStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined1 uStack_130;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined1 *puStack_10c;
  undefined4 uStack_108;
  undefined1 auStack_104 [16];
  undefined4 uStack_f4;
  undefined1 *puStack_f0;
  undefined4 uStack_ec;
  undefined1 auStack_e8 [16];
  undefined1 uStack_d8;
  undefined1 *puStack_d4;
  undefined4 uStack_d0;
  undefined1 auStack_cc [16];
  undefined1 *puStack_bc;
  undefined4 uStack_b8;
  undefined1 auStack_b4 [16];
  undefined1 *puStack_a4;
  undefined4 uStack_a0;
  undefined1 auStack_9c [16];
  undefined1 *puStack_8c;
  undefined4 uStack_88;
  undefined1 auStack_84 [16];
  undefined1 *puStack_74;
  undefined4 uStack_70;
  undefined1 auStack_6c [16];
  undefined1 *puStack_5c;
  undefined4 uStack_58;
  undefined1 auStack_54 [16];
  undefined1 *puStack_44;
  undefined4 uStack_40;
  undefined1 auStack_3c [16];
  undefined4 uStack_2c;
  
  uStack_2c = *_LAB_2c581264;
  puStack_13c = &uStack_134;
  uStack_16c = _LAB_2c58126c;
  puStack_10c = auStack_104;
  iStack_164 = 0;
  puStack_74 = auStack_6c;
  auStack_160[0] = auStack_160[0] & 0xffffff00;
  puStack_5c = auStack_54;
  uStack_150 = 0;
  puStack_44 = auStack_3c;
  uStack_14c = 0;
  uStack_108 = 0;
  auStack_104[0] = 0;
  uStack_114 = 0;
  uStack_130 = 0;
  iStack_19c = 0;
  uStack_124 = _LAB_2c581268;
  uStack_198 = _LAB_2c581268;
  uStack_190 = 0;
  uStack_148 = 0xb;
  uStack_144 = 0xffffffff;
  uStack_146 = 0x67;
  uStack_140 = _LAB_2c581270;
  uStack_134 = _LAB_2c581274;
  uStack_138 = 4;
  uStack_11c = 0;
  uStack_118 = 0;
  uStack_18c = 0;
  uStack_188 = 0;
  uStack_1a4 = 0;
  iStack_1a0 = 0;
  uStack_110 = _LAB_2c581278;
  puStack_f0 = auStack_e8;
  uStack_ec = 0;
  auStack_e8[0] = 0;
  uStack_d0 = 0;
  auStack_cc[0] = 0;
  uStack_b8 = 0;
  auStack_b4[0] = 0;
  uStack_a0 = 0;
  auStack_9c[0] = 0;
  uStack_88 = 0;
  auStack_84[0] = 0;
  uStack_70 = 0;
  auStack_6c[0] = 0;
  uStack_58 = 0;
  auStack_54[0] = 0;
  uStack_40 = 0;
  auStack_3c[0] = 0;
  puStack_d4 = auStack_cc;
  puStack_bc = auStack_b4;
  puStack_a4 = auStack_9c;
  puStack_8c = auStack_84;
  iVar3 = *(int *)(*(int *)(param_1 + 0x10) + param_2 * 4);
  uStack_194 = param_3;
  puStack_168 = auStack_160;
  FUN_2c52f5f4(&puStack_10c,iVar3 + 4);
  uStack_f4 = *(undefined4 *)(iVar3 + 0x1c);
  FUN_2c52f5f4(&puStack_f0,iVar3 + 0x20);
  uStack_d8 = *(undefined1 *)(iVar3 + 0x38);
  FUN_2c52f5f4(&puStack_d4,iVar3 + 0x3c);
  FUN_2c52f5f4(&puStack_bc,iVar3 + 0x54);
  FUN_2c52f5f4(&puStack_a4,iVar3 + 0x6c);
  FUN_2c52f5f4(&puStack_8c,iVar3 + 0x84);
  FUN_2c52f5f4(&puStack_74,iVar3 + 0x9c);
  FUN_2c52f5f4(&puStack_5c,iVar3 + 0xb4);
  FUN_2c52f5f4(&puStack_44,iVar3 + 0xcc);
  if (iStack_1a0 == iStack_19c) {
    FUN_2c580500(&uStack_1a4,iStack_1a0,&uStack_110);
  }
  else {
    FUN_2c57ff38(iStack_1a0,&uStack_110);
    iStack_1a0 = iStack_1a0 + 0xe4;
  }
  func_0x2c580d90(&uStack_190,&uStack_1a4);
  uStack_120 = uStack_194;
  func_0x2c580d90(&uStack_11c,&uStack_190);
  FUN_2c58c9d8(&puStack_184,&uStack_140);
  uVar2 = auStack_160[0];
  puVar1 = puStack_168;
  if (puStack_184 == auStack_17c) {
    if (iStack_180 != 0) {
      if (iStack_180 == 1) {
        *(undefined1 *)puStack_168 = (undefined1)auStack_17c[0];
      }
      else {
        FUN_2c674668(puStack_168,auStack_17c);
      }
    }
    *(undefined1 *)((int)puStack_168 + iStack_180) = 0;
    iStack_164 = iStack_180;
  }
  else {
    bVar4 = puStack_168 != auStack_160;
    puStack_168 = puStack_184;
    if (bVar4) {
      iStack_164 = iStack_180;
      auStack_160[0] = auStack_17c[0];
      if (puVar1 != (uint *)0x0) {
        auStack_17c[0] = uVar2;
        puStack_184 = puVar1;
        goto LAB_2c58114c;
      }
    }
    auStack_160[0] = auStack_17c[0];
    iStack_164 = iStack_180;
    puStack_184 = auStack_17c;
  }
LAB_2c58114c:
  iStack_180 = 0;
  *(undefined1 *)puStack_184 = 0;
  if (puStack_184 == auStack_17c) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680();
}


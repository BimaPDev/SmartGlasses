/* FUN_2c5748dc @ 0x2c5748dc */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5748dc(int param_1,int param_2,undefined4 param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  undefined4 uStack_1b4;
  int iStack_1b0;
  int iStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  uint *puStack_194;
  int iStack_190;
  uint auStack_18c [4];
  undefined4 uStack_17c;
  uint *puStack_178;
  int iStack_174;
  uint auStack_170 [4];
  undefined1 uStack_160;
  undefined4 uStack_15c;
  undefined1 uStack_158;
  undefined2 uStack_156;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 *puStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined1 uStack_13c;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined4 uStack_118;
  undefined1 auStack_114 [16];
  undefined1 *puStack_104;
  undefined4 uStack_100;
  undefined1 auStack_fc [16];
  undefined1 *puStack_ec;
  undefined4 uStack_e8;
  undefined1 auStack_e4 [16];
  undefined1 *puStack_d4;
  undefined4 uStack_d0;
  undefined1 auStack_cc [20];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined4 uStack_a4;
  undefined1 auStack_a0 [16];
  undefined1 *puStack_90;
  undefined4 uStack_8c;
  undefined1 auStack_88 [16];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_2c;
  
  uStack_2c = *_LAB_2c574b90;
  puStack_14c = &uStack_144;
  uStack_17c = _LAB_2c574b98;
  uStack_13c = 0;
  puStack_11c = auStack_114;
  iStack_174 = 0;
  puStack_d4 = auStack_cc;
  auStack_170[0] = auStack_170[0] & 0xffffff00;
  puStack_a8 = auStack_a0;
  uStack_160 = 0;
  puStack_90 = auStack_88;
  uStack_15c = 0;
  uStack_124 = 0;
  iStack_1ac = 0;
  uStack_134 = _LAB_2c574b9c;
  uStack_1a8 = _LAB_2c574b9c;
  uStack_1a0 = 0;
  uStack_158 = 0xb;
  uStack_154 = 0xffffffff;
  uStack_156 = 0x67;
  uStack_144 = *_LAB_2c574b94;
  uStack_140 = _LAB_2c574b94[1];
  uStack_150 = _LAB_2c574ba0;
  uStack_12c = 0;
  uStack_128 = 0;
  uStack_19c = 0;
  uStack_198 = 0;
  uStack_1b4 = 0;
  iStack_1b0 = 0;
  uStack_148 = 8;
  uStack_118 = 0;
  auStack_114[0] = 0;
  uStack_100 = 0;
  auStack_fc[0] = 0;
  uStack_e8 = 0;
  auStack_e4[0] = 0;
  uStack_d0 = 0;
  auStack_cc[0] = 0;
  uStack_a4 = 0;
  auStack_a0[0] = 0;
  uStack_8c = 0;
  auStack_88[0] = 0;
  puStack_104 = auStack_fc;
  puStack_ec = auStack_e4;
  uStack_120 = _LAB_2c574ba4;
  iVar3 = *(int *)(*(int *)(param_1 + 0x10) + param_2 * 4);
  uStack_1a4 = param_3;
  puStack_178 = auStack_170;
  FUN_2c52f5f4(&puStack_11c,iVar3 + 4);
  FUN_2c52f5f4(&puStack_104,iVar3 + 0x1c);
  FUN_2c52f5f4(&puStack_d4,iVar3 + 0x4c);
  FUN_2c52f5f4(&puStack_ec,iVar3 + 0x34);
  FUN_2c52f5f4(&puStack_a8,iVar3 + 0x78);
  FUN_2c52f5f4(&puStack_90,iVar3 + 0x90);
  uStack_b8 = *(undefined8 *)(iVar3 + 0x68);
  uStack_60 = *(undefined4 *)(iVar3 + 0xc0);
  uStack_5c = *(undefined4 *)(iVar3 + 0xc4);
  uStack_68 = *(undefined4 *)(iVar3 + 0xb8);
  uStack_64 = *(undefined4 *)(iVar3 + 0xbc);
  uStack_b0 = *(undefined8 *)(iVar3 + 0x70);
  uStack_78 = *(undefined8 *)(iVar3 + 0xa8);
  uStack_70 = *(undefined8 *)(iVar3 + 0xb0);
  uStack_58 = *(undefined4 *)(iVar3 + 200);
  uStack_54 = *(undefined4 *)(iVar3 + 0xcc);
  uStack_50 = *(undefined4 *)(iVar3 + 0xd0);
  uStack_4c = *(undefined4 *)(iVar3 + 0xd4);
  uStack_48 = *(undefined4 *)(iVar3 + 0xd8);
  uStack_44 = *(undefined4 *)(iVar3 + 0xdc);
  uStack_40 = *(undefined4 *)(iVar3 + 0xe0);
  uStack_3c = *(undefined4 *)(iVar3 + 0xe4);
  uStack_38 = *(undefined4 *)(iVar3 + 0xe8);
  uStack_34 = *(undefined4 *)(iVar3 + 0xec);
  if (iStack_1b0 == iStack_1ac) {
    FUN_2c573e14(&uStack_1b4,iStack_1b0,&uStack_120);
  }
  else {
    FUN_2c573370(iStack_1b0,&uStack_120);
    iStack_1b0 = iStack_1b0 + 0xf0;
  }
  func_0x2c5745ec(&uStack_1a0,&uStack_1b4);
  uStack_130 = uStack_1a4;
  func_0x2c5745ec(&uStack_12c,&uStack_1a0);
  FUN_2c58c9d8(&puStack_194,&uStack_150);
  uVar2 = auStack_170[0];
  puVar1 = puStack_178;
  if (puStack_194 == auStack_18c) {
    if (iStack_190 != 0) {
      if (iStack_190 == 1) {
        *(undefined1 *)puStack_178 = (undefined1)auStack_18c[0];
      }
      else {
        FUN_2c674668(puStack_178,auStack_18c);
      }
    }
    *(undefined1 *)((int)puStack_178 + iStack_190) = 0;
    iStack_174 = iStack_190;
  }
  else {
    bVar4 = puStack_178 != auStack_170;
    puStack_178 = puStack_194;
    if (bVar4) {
      iStack_174 = iStack_190;
      auStack_170[0] = auStack_18c[0];
      if (puVar1 != (uint *)0x0) {
        auStack_18c[0] = uVar2;
        puStack_194 = puVar1;
        goto LAB_2c574aa2;
      }
    }
    auStack_170[0] = auStack_18c[0];
    iStack_174 = iStack_190;
    puStack_194 = auStack_18c;
  }
LAB_2c574aa2:
  iStack_190 = 0;
  *(undefined1 *)puStack_194 = 0;
  if (puStack_194 == auStack_18c) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680();
}


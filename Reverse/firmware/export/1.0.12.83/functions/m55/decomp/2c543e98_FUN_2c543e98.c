/* FUN_2c543e98 @ 0x2c543e98 */

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_2c543e98(int param_1,int param_2,undefined4 param_3)

{
  short sVar1;
  int *piVar2;
  uint uVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint *puVar8;
  undefined4 uVar9;
  uint local_280;
  int *local_27c;
  uint *local_278;
  int local_274;
  uint local_270 [4];
  undefined4 local_260;
  uint *local_25c;
  int local_258;
  uint local_254 [4];
  undefined1 local_244;
  undefined4 local_240;
  undefined1 local_23c;
  undefined2 local_23a;
  undefined4 local_238;
  undefined4 local_234;
  byte local_230;
  undefined1 *local_22c;
  uint local_228;
  undefined1 local_224 [20];
  undefined1 *local_210;
  uint local_20c;
  undefined1 local_208 [16];
  undefined4 local_1f8;
  byte *local_1f4;
  uint local_1f0;
  byte local_1ec [16];
  byte *local_1dc;
  uint local_1d8;
  byte local_1d4 [16];
  byte *local_1c4;
  uint local_1c0;
  byte local_1bc [16];
  byte *local_1ac;
  uint local_1a8;
  byte local_1a4 [16];
  byte *local_194;
  uint local_190;
  byte local_18c [16];
  uint *local_17c;
  undefined4 local_178;
  uint local_174;
  uint uStack_170;
  undefined4 local_16c;
  uint local_168;
  uint uStack_164;
  undefined2 local_160;
  byte *local_15c;
  uint local_158;
  byte local_154 [16];
  undefined4 local_144;
  uint *local_140;
  undefined1 *local_13c;
  uint local_138;
  undefined1 local_134 [16];
  undefined2 local_124;
  undefined1 local_122;
  char local_121;
  undefined4 local_120;
  undefined4 local_11c;
  undefined1 *local_118;
  undefined4 local_114;
  undefined1 local_110 [16];
  undefined4 local_100;
  undefined1 *local_fc;
  undefined4 local_f8;
  undefined1 local_f4 [16];
  undefined4 local_e4;
  undefined1 *local_e0;
  undefined4 local_dc;
  undefined1 local_d8 [16];
  undefined1 *local_c8;
  undefined4 local_c4;
  undefined1 local_c0 [16];
  undefined1 *local_b0;
  undefined4 uStack_ac;
  undefined1 local_a8 [16];
  undefined1 *local_98;
  undefined4 local_94;
  undefined1 local_90 [16];
  undefined1 *local_80;
  undefined4 local_7c;
  undefined1 local_78 [16];
  undefined4 *local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  undefined1 *local_48;
  undefined4 local_44;
  undefined1 local_40 [16];
  undefined4 local_30;
  int local_2c;
  
  puVar8 = DAT_2c544194;
  sVar1 = *(short *)(param_2 + 0x26);
  local_2c = *DAT_2c544178;
  local_228 = 0;
  if (sVar1 == 6) {
LAB_2c54408c:
    local_138 = 0;
    local_134[0] = 0;
    local_140 = DAT_2c544194;
    local_13c = local_134;
    iVar5 = FUN_2c5561c4(*(undefined4 *)(param_2 + 4),&local_140,param_3,local_228);
    if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,DAT_2c544744,0x2f,DAT_2c544748,DAT_2c54474c,DAT_2c544748);
    }
    if (local_121 == '\0') {
      FUN_2c547edc(&local_280,*(undefined4 *)(param_1 + 4));
      FUN_2c55e8cc(local_280,3);
      piVar2 = local_27c;
    }
    else {
      FUN_2c547edc(&local_280,*(undefined4 *)(param_1 + 4));
      FUN_2c55e8cc(local_280,4);
      piVar2 = local_27c;
    }
    if ((piVar2 != (int *)0x0) && (iVar5 = piVar2[1], piVar2[1] = iVar5 + -1, iVar5 + -1 == 0)) {
      (**(code **)(*piVar2 + 8))(piVar2);
      iVar5 = piVar2[2];
      piVar2[2] = iVar5 + -1;
      if (iVar5 + -1 == 0) {
        (**(code **)(*piVar2 + 0xc))(piVar2);
      }
    }
    local_140 = puVar8;
    if (local_13c != local_134) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if ((char)local_124 != '\x01') {
LAB_2c543f58:
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,DAT_2c544184,0x4d,DAT_2c54417c,DAT_2c544188,DAT_2c54417c,
                   *(int *)(*(int *)(param_1 + 4) + 0xcc) - *(int *)(*(int *)(param_1 + 4) + 200) >>
                   2);
    }
  }
  else {
    local_224[0] = sVar1 == 0x6a;
    local_228 = (uint)(byte)local_224[0];
    if (local_228 == 0) {
      if (sVar1 != 4) {
LAB_2c54463e:
        uVar9 = 0xffffffff;
        goto LAB_2c543f28;
      }
      uVar9 = *(undefined4 *)(param_1 + 4);
      local_22c = local_224;
      local_210 = local_208;
      local_234 = DAT_2c544198;
      local_20c = local_228;
      local_208[0] = local_224[0];
      iVar5 = FUN_2c5557f4(*(undefined4 *)(param_2 + 4),&local_234);
      uVar3 = local_228;
      puVar4 = local_22c;
      if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(4,DAT_2c544184,0x71,DAT_2c54417c,DAT_2c544180,DAT_2c54417c);
      }
      local_140 = &local_138;
      if ((local_22c + local_228 != (undefined1 *)0x0) && (local_22c == (undefined1 *)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_2c658674(DAT_2c544768);
      }
      local_280 = local_228;
      if (local_228 < 0x10) {
        if (local_228 == 1) {
          local_138 = CONCAT31(local_138._1_3_,*local_22c);
        }
        else if (local_228 != 0) goto LAB_2c544080;
      }
      else {
        local_140 = (uint *)FUN_2c54345c(&local_280,0);
        local_138 = local_280;
LAB_2c544080:
        FUN_2c674668(local_140,puVar4,uVar3);
      }
      *(undefined1 *)((int)local_140 + local_280) = 0;
      local_13c = (undefined1 *)local_280;
      FUN_2c548220(uVar9,&local_140);
      uVar3 = local_20c;
      if (local_140 != &local_138) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      local_1f0 = (uint)local_230;
      if (local_1f0 != 0) {
        FUN_2c59a4e0();
        iVar5 = FUN_2c547b70(uVar9);
        if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_2c62c82c(4,DAT_2c544184,0x79,DAT_2c54417c,DAT_2c544190,DAT_2c54417c);
        }
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(4,DAT_2c544744,0x7c,DAT_2c54417c,DAT_2c544740,DAT_2c54417c);
      }
      local_1ec[0] = local_230;
      local_1d4[0] = local_230;
      local_1bc[0] = local_230;
      local_1a4[0] = local_230;
      local_18c[0] = local_230;
      local_160 = CONCAT11(local_160._1_1_,local_230);
      local_154[0] = local_230;
      local_16c = 0x3f800000;
      local_1f8 = DAT_2c5444ac;
      local_1f4 = local_1ec;
      local_1dc = local_1d4;
      local_1c4 = local_1bc;
      local_1ac = local_1a4;
      local_194 = local_18c;
      local_17c = &uStack_164;
      local_178 = 1;
      local_15c = local_154;
      local_1d8 = local_1f0;
      local_1c0 = local_1f0;
      local_1a8 = local_1f0;
      local_190 = local_1f0;
      local_174 = local_1f0;
      uStack_170 = local_1f0;
      local_168 = local_1f0;
      uStack_164 = local_1f0;
      local_158 = local_1f0;
      if (((local_20c - 1 < 5) &&
          (iVar5 = FUN_2c66960c(local_210,DAT_2c54475c,local_20c), iVar5 == 0)) && (uVar3 == 5)) {
        uVar7 = *(undefined4 *)(DAT_2c544760 + 4);
        uVar6 = FUN_2c66c4ec(uVar7);
        FUN_2c539348(&local_194,0,0,uVar7,uVar6);
      }
      else {
        uVar7 = *(undefined4 *)(DAT_2c5444b0 + 4);
        uVar6 = FUN_2c66c4ec(uVar7);
        FUN_2c539348(&local_194,0,0,uVar7,uVar6);
      }
      local_13c = local_134;
      local_260 = DAT_2c5444b4;
      local_25c = local_254;
      local_e4 = DAT_2c5444ac;
      local_138 = 0;
      local_23c = 0xb;
      local_134[0] = 0;
      local_238 = 0xffffffff;
      local_124 = 0;
      local_23a = 5;
      local_122 = 0;
      local_140 = DAT_2c5444b8;
      local_11c = 0;
      local_120 = DAT_2c5444bc;
      local_118 = local_110;
      local_114 = 0;
      local_110[0] = 0;
      local_100 = 2000;
      local_fc = local_f4;
      local_f8 = 0;
      local_e0 = local_d8;
      local_f4[0] = 0;
      local_c8 = local_c0;
      local_dc = 0;
      local_b0 = local_a8;
      local_d8[0] = 0;
      local_c4 = 0;
      local_c0[0] = 0;
      local_258 = 0;
      local_254[0] = local_254[0] & 0xffffff00;
      local_244 = 0;
      local_240 = 0;
      uStack_ac = 0;
      local_a8[0] = 0;
      local_94 = 0;
      local_90[0] = 0;
      local_7c = 0;
      local_78[0] = 0;
      local_4c = (ushort)local_4c._1_1_ << 8;
      local_44 = 0;
      local_40[0] = 0;
      local_58 = 0x3f800000;
      local_60 = 0;
      uStack_5c = 0;
      local_54 = 0;
      uStack_50 = 0;
      local_98 = local_90;
      local_80 = local_78;
      local_68 = &uStack_50;
      local_64 = 1;
      local_48 = local_40;
      FUN_2c52f5f4(&local_e0,&local_1f4);
      FUN_2c52f5f4(&local_c8,&local_1dc);
      FUN_2c52f5f4(&local_b0,&local_1c4);
      FUN_2c52f5f4(&local_98,&local_1ac);
      FUN_2c52f5f4(&local_80,&local_194);
      FUN_2c543d78(&local_68,&local_17c);
      local_4c = local_160;
      FUN_2c52f5f4(&local_48,&local_15c);
      local_30 = local_144;
      FUN_2c58c9d8(&local_278,&local_140);
      uVar3 = local_254[0];
      puVar8 = local_25c;
      if (local_278 == local_270) {
        if (local_274 != 0) {
          if (local_274 == 1) {
            *(undefined1 *)local_25c = (undefined1)local_270[0];
          }
          else {
            FUN_2c674668(local_25c,local_270);
          }
        }
        *(undefined1 *)((int)local_25c + local_274) = 0;
        local_258 = local_274;
      }
      else {
        local_25c = local_278;
        if (puVar8 != local_254) {
          local_258 = local_274;
          local_254[0] = local_270[0];
          if (puVar8 != (uint *)0x0) {
            local_270[0] = uVar3;
            local_278 = puVar8;
            goto LAB_2c544368;
          }
        }
        local_254[0] = local_270[0];
        local_258 = local_274;
        local_278 = local_270;
      }
LAB_2c544368:
      local_274 = 0;
      *(undefined1 *)local_278 = 0;
      if (local_278 != local_270) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680();
      }
      FUN_2c548178(uVar9);
      FUN_2c547f34(uVar9);
      FUN_2c547edc(&local_280,uVar9);
      FUN_2c55e6d4(local_280,1);
      if ((local_27c != (int *)0x0) &&
         (iVar5 = local_27c[1], local_27c[1] = iVar5 + -1, iVar5 + -1 == 0)) {
        (**(code **)(*local_27c + 8))();
        iVar5 = local_27c[2];
        local_27c[2] = iVar5 + -1;
        if (iVar5 + -1 == 0) {
          (**(code **)(*local_27c + 0xc))();
        }
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (sVar1 == 6) goto LAB_2c54408c;
    if (*(char *)(param_2 + 0x24) != '\x03') {
      if (*(char *)(param_2 + 0x24) == '\x04') goto LAB_2c543f58;
      goto LAB_2c54463e;
    }
  }
  uVar9 = *(undefined4 *)(param_1 + 4);
  FUN_2c548188(uVar9,0);
  *(undefined1 *)(param_1 + 0x20) = 1;
  FUN_2c547f70(uVar9);
  iVar5 = FUN_2c5945b8();
  if (iVar5 != 0) {
    FUN_2c59a4e0();
  }
  uVar9 = 0;
  FUN_2c620fa4(0x1390);
LAB_2c543f28:
  if (*DAT_2c544178 == local_2c) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}


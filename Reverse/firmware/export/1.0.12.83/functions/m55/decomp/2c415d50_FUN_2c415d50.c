/* FUN_2c415d50 @ 0x2c415d50 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c415dec) */

undefined8
FUN_2c415d50(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4)

{
  undefined2 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  uint unaff_r4;
  int unaff_r5;
  undefined4 uVar7;
  int iVar8;
  int unaff_r6;
  int iVar9;
  undefined1 *unaff_r7;
  int iVar10;
  undefined4 unaff_lr;
  char in_NG;
  bool in_ZR;
  char in_OV;
  int *piVar11;
  int in_stack_0000030c;
  undefined1 auStack_2ac [308];
  undefined1 auStack_178 [8];
  undefined1 *puStack_170;
  undefined1 *puStack_16c;
  undefined1 auStack_2c [20];
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [8];
  
  puVar4 = auStack_18;
  puVar3 = param_2;
  iVar5 = unaff_r6;
  if ((in_ZR || in_NG != in_OV) || (puVar2 = param_1, unaff_r7 == (undefined1 *)0x0)) {
    if ((in_ZR || in_NG != in_OV) || (unaff_r7 == (undefined1 *)0x0)) {
      if (in_ZR || in_NG != in_OV) {
        return CONCAT44(param_2,param_1);
      }
      uVar1 = SUB42(param_1,0);
      if (in_ZR || in_NG != in_OV) {
        *(undefined2 *)(param_2 + 0x2e) = uVar1;
        *(undefined2 *)(param_2 + 0x3e) = uVar1;
      }
      else {
        *(undefined2 *)(param_2 + 0xe) = uVar1;
        *(undefined2 *)(param_2 + 0x1e) = uVar1;
      }
      puVar2 = (undefined1 *)(uint)*(ushort *)(param_2 + 0x3e);
      puVar3 = &stack0x00000308;
      param_4 = &stack0x00000308;
      iVar5 = unaff_r5;
      goto LAB_2c415d8a;
    }
LAB_2c415dcc:
    *(short *)(puVar3 + 0xe) = (short)unaff_r4;
LAB_2c415dce:
    param_1 = param_4;
    if (iVar5 != 0) {
      param_2 = (undefined1 *)((uint)puVar3 & 0xff);
      if (param_2 != (undefined1 *)0x0) {
        puVar4 = auStack_2c;
        puVar6 = param_3;
LAB_2c415dd6:
        *(undefined4 *)(puVar4 + -4) = unaff_lr;
        *(undefined1 **)(puVar4 + -8) = unaff_r7;
        *(undefined1 **)(puVar4 + -0xc) = param_2;
        *(undefined1 **)(puVar4 + -0x10) = param_1;
        *(undefined1 **)(puVar4 + -0x14) = puVar6;
        *(undefined1 **)(puVar4 + -0x18) = puVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (unaff_r7 == (undefined1 *)0x0) {
        puVar3 = &stack0x000001ec;
        puStack_16c = &stack0x000001ec;
        if (&stack0x00000000 == (undefined1 *)0xfffffe14) goto LAB_2c415ee8;
        if (&stack0x00000000 != (undefined1 *)0xfffffe14) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
LAB_2c415f2a:
        if (puVar3 != (undefined1 *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        software_bkpt(0xd5);
        uVar1 = SUB42(unaff_r7,0);
        if (in_ZR || in_NG != in_OV) {
          *(undefined2 *)(unaff_r7 + 6) = uVar1;
          *(undefined2 *)(unaff_r7 + 0x16) = uVar1;
        }
        else {
          *(undefined2 *)(unaff_r7 + 0xe) = uVar1;
          *(undefined2 *)(unaff_r7 + 0x1e) = uVar1;
        }
        *(undefined2 *)(unaff_r7 + 0x26) = uVar1;
        *(undefined2 *)(unaff_r7 + 0x2e) = uVar1;
        *(undefined2 *)(unaff_r7 + 0x36) = uVar1;
        uVar7 = 0x2c41630c;
        *(undefined2 *)(unaff_r7 + 0x16) = uVar1;
        puVar3 = (undefined1 *)0x0;
        puStack_170 = unaff_r7;
        puVar2 = auStack_178;
        puVar4 = (undefined1 *)0x0;
      }
      else {
        if (((uint)unaff_r7 & 0xff) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
LAB_2c415ee8:
        if (unaff_r7 == (undefined1 *)0x0) {
          puVar3 = &stack0x000001f4;
          puStack_16c = &stack0x000001f4;
          if (puVar3 != (undefined1 *)0x0) goto LAB_2c415f2a;
        }
        else if (unaff_r7 != (undefined1 *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        puVar3 = &stack0x000001fc;
        puVar4 = &stack0x000001fc;
        puVar6 = &stack0x000001fc;
        unaff_r7 = &stack0x000001fc;
        puStack_16c = &stack0x000001fc;
        puVar2 = auStack_2ac;
        piVar11 = (int *)auStack_2ac;
        uVar7 = 0;
        if (&stack0x00000000 != (undefined1 *)0xfffffe04) {
          iVar5 = 0;
          puVar3 = puVar4;
          if (((uint)puVar6 & 0xff) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          goto LAB_2c416004;
        }
      }
      *(undefined1 **)(puVar2 + -4) = puStack_16c;
      *(undefined1 **)(puVar2 + -8) = unaff_r7;
      *(undefined4 *)(puVar2 + -0xc) = uVar7;
      *(undefined1 **)(puVar2 + -0x10) = puVar4;
      *(undefined1 **)(puVar2 + -0x14) = puStack_16c;
      *(undefined1 **)(puVar2 + -0x18) = unaff_r7;
      *(undefined4 *)(puVar2 + -0x1c) = uVar7;
      *(undefined1 **)(puVar2 + -0x20) = puVar4;
      *(undefined1 **)(puVar2 + -0x24) = puStack_16c;
      *(undefined1 **)(puVar2 + -0x28) = unaff_r7;
      *(undefined4 *)(puVar2 + -0x2c) = uVar7;
      *(undefined1 **)(puVar2 + -0x30) = puVar4;
      *(undefined1 **)(puVar2 + -0x34) = puStack_16c;
      *(undefined1 **)(puVar2 + -0x38) = unaff_r7;
      *(undefined4 *)(puVar2 + -0x3c) = uVar7;
      *(undefined1 **)(puVar2 + -0x40) = puVar4;
      iVar5 = (int)puVar3 << 2;
      *(undefined1 **)(puVar2 + -0x44) = puStack_16c;
      *(undefined1 **)(puVar2 + -0x48) = unaff_r7;
      *(int *)(puVar2 + -0x4c) = iVar5;
      *(undefined1 **)(puVar2 + -0x50) = puVar4;
      iVar9 = (int)puVar3 << 2;
      *(undefined1 **)(puVar2 + -0x54) = puStack_16c;
      *(int *)(puVar2 + -0x58) = iVar9;
      *(int *)(puVar2 + -0x5c) = iVar5;
      *(undefined1 **)(puVar2 + -0x60) = puVar4;
      iVar10 = (int)puVar3 << 2;
      *(int *)(puVar2 + -100) = iVar10;
      *(int *)(puVar2 + -0x68) = iVar9;
      *(int *)(puVar2 + -0x6c) = iVar5;
      *(undefined1 **)(puVar2 + -0x70) = puVar4;
      *(int *)(puVar2 + -0x74) = iVar10;
      *(int *)(puVar2 + -0x78) = iVar9;
      *(int *)(puVar2 + -0x7c) = iVar5;
      *(undefined1 **)(puVar2 + -0x80) = puVar4;
      iVar8 = (int)puVar4 << 2;
      *(int *)(puVar2 + -0x84) = iVar10;
      *(int *)(puVar2 + -0x88) = iVar9;
      *(int *)(puVar2 + -0x8c) = iVar5;
      *(int *)(puVar2 + -0x90) = iVar8;
      *(int *)(puVar2 + -0x94) = iVar10;
      *(int *)(puVar2 + -0x98) = iVar9;
      *(int *)(puVar2 + -0x9c) = iVar5;
      *(int *)(puVar2 + -0xa0) = iVar8;
      *(int *)(puVar2 + -0xa4) = iVar10;
      *(int *)(puVar2 + -0xa8) = iVar9;
      *(int *)(puVar2 + -0xac) = iVar5;
      *(int *)(puVar2 + -0xb0) = iVar8;
      *(int *)(puVar2 + -0xb4) = iVar10;
      *(int *)(puVar2 + -0xb8) = iVar9;
      *(int *)(puVar2 + -0xbc) = iVar5;
      *(int *)(puVar2 + -0xc0) = iVar8;
      iVar5 = (int)puVar4 << 4;
      *(int *)(puVar2 + -0xc4) = iVar10;
      *(int *)(puVar2 + -200) = iVar9;
      *(int *)(puVar2 + -0xcc) = iVar5;
      *(int *)(puVar2 + -0xd0) = iVar8;
      unaff_r7 = (undefined1 *)((int)puVar4 << 4);
      *(int *)(puVar2 + -0xd4) = iVar10;
      *(undefined1 **)(puVar2 + -0xd8) = unaff_r7;
      *(int *)(puVar2 + -0xdc) = iVar5;
      *(int *)(puVar2 + -0xe0) = iVar8;
      puStack_16c = (undefined1 *)((int)puVar4 << 4);
      *(undefined1 **)(puVar2 + -0xe4) = puStack_16c;
      *(undefined1 **)(puVar2 + -0xe8) = unaff_r7;
      *(int *)(puVar2 + -0xec) = iVar5;
      *(int *)(puVar2 + -0xf0) = iVar8;
      *(undefined1 **)(puVar2 + -0xf4) = puStack_16c;
      *(undefined1 **)(puVar2 + -0xf8) = unaff_r7;
      *(int *)(puVar2 + -0xfc) = iVar5;
      *(int *)(puVar2 + -0x100) = iVar8;
      puVar3 = (undefined1 *)((int)puVar4 << 6);
      *(undefined1 **)(puVar2 + -0x104) = puStack_16c;
      *(undefined1 **)(puVar2 + -0x108) = unaff_r7;
      *(int *)(puVar2 + -0x10c) = iVar5;
      piVar11 = (int *)(puVar2 + -0x110);
      *piVar11 = (int)puVar3;
      puVar6 = (undefined1 *)((int)puVar4 << 6);
LAB_2c416004:
      piVar11[-1] = (int)puStack_16c;
      piVar11[-2] = (int)unaff_r7;
      piVar11[-3] = iVar5;
      piVar11[-4] = (int)puVar3;
      piVar11[-5] = (int)puStack_16c;
      piVar11[-6] = (int)unaff_r7;
      piVar11[-7] = iVar5;
      piVar11[-8] = (int)puVar3;
      piVar11[-9] = (int)puStack_16c;
      piVar11[-10] = (int)unaff_r7;
      piVar11[-0xb] = iVar5;
      piVar11[-0xc] = (int)puVar3;
      iVar8 = (int)puVar6 << 2;
      piVar11[-0xd] = (int)puStack_16c;
      piVar11[-0xe] = (int)unaff_r7;
      piVar11[-0xf] = iVar8;
      piVar11[-0x10] = (int)puVar3;
      iVar9 = (int)puVar6 << 2;
      piVar11[-0x11] = (int)puStack_16c;
      piVar11[-0x12] = iVar9;
      piVar11[-0x13] = iVar8;
      piVar11[-0x14] = (int)puVar3;
      iVar10 = (int)puVar6 << 2;
      piVar11[-0x15] = iVar10;
      piVar11[-0x16] = iVar9;
      piVar11[-0x17] = iVar8;
      piVar11[-0x18] = (int)puVar3;
      piVar11[-0x19] = iVar10;
      piVar11[-0x1a] = iVar9;
      piVar11[-0x1b] = iVar8;
      piVar11[-0x1c] = (int)puVar3;
      iVar5 = (int)puVar6 << 4;
      piVar11[-0x1d] = iVar10;
      piVar11[-0x1e] = iVar9;
      piVar11[-0x1f] = iVar8;
      piVar11[-0x20] = iVar5;
      piVar11[-0x21] = iVar10;
      piVar11[-0x22] = iVar9;
      piVar11[-0x23] = iVar8;
      piVar11[-0x24] = iVar5;
      piVar11[-0x25] = iVar10;
      piVar11[-0x26] = iVar9;
      piVar11[-0x27] = iVar8;
      piVar11[-0x28] = iVar5;
      piVar11[-0x29] = iVar10;
      piVar11[-0x2a] = iVar9;
      piVar11[-0x2b] = iVar8;
      piVar11[-0x2c] = iVar5;
      iVar8 = (int)puVar6 << 6;
      piVar11[-0x2d] = iVar10;
      piVar11[-0x2e] = iVar9;
      piVar11[-0x2f] = iVar8;
      piVar11[-0x30] = iVar5;
      iVar9 = (int)puVar6 << 6;
      piVar11[-0x31] = iVar10;
      piVar11[-0x32] = iVar9;
      piVar11[-0x33] = iVar8;
      piVar11[-0x34] = iVar5;
      iVar10 = (int)puVar6 << 6;
      piVar11[-0x35] = iVar10;
      piVar11[-0x36] = iVar9;
      piVar11[-0x37] = iVar8;
      piVar11[-0x38] = iVar5;
      piVar11[-0x39] = iVar10;
      piVar11[-0x3a] = iVar9;
      piVar11[-0x3b] = iVar8;
      piVar11[-0x3c] = iVar5;
      iVar5 = (int)puVar6 << 8;
      piVar11[-0x3d] = iVar10;
      piVar11[-0x3e] = iVar9;
      piVar11[-0x3f] = iVar8;
      piVar11[-0x40] = iVar5;
      piVar11[-0x41] = iVar10;
      piVar11[-0x42] = iVar9;
      piVar11[-0x43] = iVar8;
      piVar11[-0x44] = iVar5;
      piVar11[-0x45] = iVar10;
      piVar11[-0x46] = iVar9;
      piVar11[-0x47] = iVar8;
      piVar11[-0x48] = iVar5;
      piVar11[-0x49] = iVar10;
      piVar11[-0x4a] = iVar9;
      piVar11[-0x4b] = iVar8;
      piVar11[-0x4c] = iVar5;
      piVar11[-0x4d] = iVar10;
      piVar11[-0x4e] = iVar9;
      piVar11[-0x4f] = (int)puVar6 << 10;
      piVar11[-0x50] = iVar5;
      piVar11[-0x51] = (int)puVar6 << 10;
      piVar11[-0x52] = iVar9;
      piVar11[-0x53] = (int)puVar6 << 10;
      piVar11[-0x54] = iVar5;
      iVar5 = (int)puVar6 * 0x100;
      iVar8 = (int)puVar6 * 0x100;
      uVar1 = *(undefined2 *)(iVar8 + 0x3e);
      piVar11[-0x55] = (int)puVar6 << 10;
      piVar11[-0x56] = iVar9;
      piVar11[-0x57] = iVar8;
      software_bkpt(0xd0);
      *(undefined2 *)(iVar5 + 0xe) = uVar1;
      *(undefined2 *)(iVar5 + 0x16) = uVar1;
      *(undefined2 *)(iVar5 + 0x16) = uVar1;
      iVar5 = piVar11[0x93];
      *(short *)(iVar8 + 0x1e) = (short)iVar5;
      *(short *)(iVar8 + 0x1e) = (short)iVar5;
      uVar1 = (undefined2)((int)puVar6 << 10);
      *(undefined2 *)(iVar8 + 0x1e) = uVar1;
      *(undefined2 *)(iVar8 + 0x1e) = uVar1;
      *(undefined2 *)(iVar8 + 0x1e) = uVar1;
      iVar5 = (int)puVar6 * 0x1000;
      *(undefined2 *)(iVar5 + 0x1e) = uVar1;
      *(undefined2 *)(iVar5 + 0x1e) = uVar1;
      *(undefined2 *)(iVar5 + 0x1e) = uVar1;
      *(undefined2 *)(iVar5 + 0x1e) = uVar1;
      *(undefined2 *)(iVar5 + 0x1e) = uVar1;
      *(undefined2 *)(iVar5 + 0x1e) = 0;
      *(undefined2 *)(iVar5 + 0x1e) = 0;
      *(undefined2 *)(iVar5 + 0x1e) = 0;
      iVar5 = (int)puVar6 * 0x10000;
      *(undefined2 *)(iVar5 + 0x1e) = 0;
      *(undefined2 *)(iVar5 + 0x1e) = 0;
      *(undefined2 *)(iVar5 + 0x1e) = 0;
      *(undefined2 *)(iVar5 + 0x1e) = 0;
      *(undefined2 *)(iVar5 + 0x1e) = 0;
      *(undefined2 *)(iVar5 + 0x1e) = 0;
      *(undefined2 *)(iVar5 + 0x1e) = 0;
      *(undefined2 *)(iVar5 + 0x1e) = 0;
      iVar5 = (int)puVar6 * 0x40000;
      *(undefined2 *)(iVar5 + 0x1e) = 0;
      *(undefined2 *)(iVar5 + 0x1e) = 0;
      *(undefined2 *)(iVar5 + 0x1e) = 0;
      *(undefined2 *)(iVar5 + 0x1e) = 0;
      *(undefined2 *)(iVar5 + 0x1e) = 0;
      *(undefined2 *)(iVar5 + 0x1e) = 0;
      *(undefined2 *)(iVar5 + 0x1e) = 0;
      *(undefined2 *)(iVar5 + 0x1e) = 0;
      iVar5 = (int)puVar6 * 0x400000;
      *(undefined2 *)(iVar5 + 0x1e) = 0;
      *(undefined2 *)(iVar5 + 0x1e) = 0;
      *(undefined2 *)(iVar5 + 0x1e) = 0;
      *(undefined2 *)(iVar5 + 0x1e) = 0;
      *(undefined2 *)(iVar5 + 0x1e) = 0;
      *(undefined2 *)(iVar5 + 0x1e) = 0;
      *(undefined2 *)(iVar5 + 0x1e) = 0;
      *(undefined2 *)(iVar5 + 0x1e) = 0;
      iVar5 = (int)puVar6 * 0x4000000;
      *(undefined2 *)(iVar5 + 0x1e) = 0;
      *(undefined2 *)(iVar5 + 0x1e) = 0;
      *(undefined2 *)(iVar5 + 0x1e) = 0;
      *(undefined2 *)(iVar5 + 0x1e) = 0;
      *(undefined2 *)(iVar5 + 0x1e) = 0;
      *(undefined2 *)(iVar5 + 0x1e) = 0;
      *(undefined2 *)(iVar5 + 0x1e) = 0;
      *(undefined2 *)(iVar5 + 0x1e) = 0;
      *(undefined2 *)(iVar5 + 0x1e) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
LAB_2c415d8a:
    unaff_r7 = &stack0x00000308;
    if (puVar2 != (undefined1 *)0x0) {
      if (puVar2 == (undefined1 *)0x0) goto LAB_2c415e06;
      if (param_3 != (undefined1 *)0x0) {
        puVar4 = &stack0xfffffff4;
        puVar6 = (undefined1 *)0x0;
        unaff_r7 = param_3;
        if (in_stack_0000030c == 0) goto LAB_2c415dd6;
        *(short *)(puVar3 + 0x16) = (short)puVar3;
        *(short *)(puVar2 + 6) = (short)(unaff_r4 << 2);
        *(short *)(puVar3 + 0x3e) = (short)puVar3;
        puVar3 = (undefined1 *)
                 (uint)*(ushort *)
                        (*(ushort *)(*(ushort *)(*(ushort *)(puVar3 + 0xe) + 0x1e) + 0x2e) + 0x3e);
        if (unaff_r4 << 2 != 0) {
          return CONCAT44(unaff_r6,puVar2);
        }
        if (unaff_r4 << 2 != 0) {
          if (unaff_r4 << 2 == 0) {
            *(short *)(puVar3 + 0xe) = (short)auStack_14 + 0x344;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        software_bkpt(0xce);
        uVar1 = SUB42(param_3,0);
        *(undefined2 *)(puVar3 + 0xe) = uVar1;
        *(undefined2 *)(puVar3 + 0x1e) = uVar1;
        *(undefined2 *)(puVar3 + 0x26) = uVar1;
        *(undefined2 *)(puVar3 + 0x2e) = uVar1;
        *(undefined2 *)(puVar3 + 0x36) = uVar1;
        *(undefined2 *)(puVar3 + 0x3e) = uVar1;
        goto LAB_2c415dfe;
      }
      goto LAB_2c415dce;
    }
    unaff_r7 = (undefined1 *)(uint)*(ushort *)(puVar3 + 0x36);
    if (iVar5 == 0) {
      unaff_r4 = (uint)*(ushort *)(puVar3 + 6);
      goto LAB_2c415dcc;
    }
LAB_2c415dfe:
    unaff_r7 = (undefined1 *)(uint)*(ushort *)(puVar3 + 0x1e);
    *(ushort *)(puVar3 + 0x2e) = *(ushort *)(puVar3 + 0x1e);
  }
  unaff_r4 = (uint)*(ushort *)(puVar3 + 6);
LAB_2c415e06:
  *(short *)(puVar3 + 0xe) = (short)unaff_r4;
  *(short *)(puVar3 + 0x1e) = (short)unaff_r7;
  *(undefined1 **)(puVar4 + 0x33c) = unaff_r7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


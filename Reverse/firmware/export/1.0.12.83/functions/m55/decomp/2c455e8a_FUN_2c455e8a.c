/* FUN_2c455e8a @ 0x2c455e8a */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c455e8a(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  ushort uVar1;
  int extraout_r1;
  uint uVar2;
  int extraout_r3;
  undefined1 *puVar3;
  int unaff_r4;
  undefined2 *puVar4;
  undefined2 *unaff_r5;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint unaff_r7;
  int iVar8;
  int unaff_lr;
  undefined4 in_cr7;
  undefined4 in_cr14;
  int in_stack_000001f0;
  undefined4 *puVar9;
  
  iVar5 = (int)*(short *)(unaff_r7 + (int)param_1);
  uVar2 = (uint)*(byte *)((int)unaff_r5 + 0xf);
  if (unaff_r4 == 0) {
    puVar3 = (undefined1 *)0x0;
    puVar4 = unaff_r5;
    iVar8 = iVar5;
    puVar9 = param_4;
    while( true ) {
      iVar6 = iVar8;
      *param_1 = unaff_r5;
      param_1[1] = puVar3;
      param_1[2] = puVar4;
      param_1[3] = iVar6;
      param_1[4] = unaff_r7;
      if (param_4 != (undefined4 *)0x0) break;
      *unaff_r5 = (short)iVar6;
      uVar2 = (uint)DAT_0000000a;
      iVar8 = func_0x2d305bb8(param_1 + 5,(int)(param_1 + 5) >> 0xe,&stack0x00000080,0,param_2,
                              puVar9,iVar5);
      *(char *)(iVar8 * 2) = (char)iVar6;
      puVar3 = &LAB_2c455e54;
      iVar8 = func_0x2c652d38();
      *(int *)(extraout_r3 * 2) = iVar8;
      func_0x2d253246(iVar8 << 2);
      *(undefined1 *)(*(ushort *)(extraout_r1 + 0x1c) + 0x15) = 0x54;
      *(undefined1 *)((uVar2 - 6 >> 9) + 0x1f) = 0x54;
      param_4 = (undefined4 *)(extraout_r1 * 0x800000 + -3);
      iVar8 = _LAB_2c45595c;
      if (_Reserved6 < 0x7d) {
        iVar8 = (_Reserved6 - 0x7d) * 0x4000;
      }
      param_1 = *(undefined4 **)(iVar8 + 0x60);
      puVar4 = (undefined2 *)(iVar8 << 3);
      unaff_r5 = _PendSV;
      unaff_r7 = _LAB_2c455a7c;
      in_stack_000001f0 = iVar6;
    }
    puVar4[3] = (short)unaff_r5;
    FUN_2c606e38();
    FUN_2c606e20(puVar4,unaff_r7,0);
    FUN_2c607048(puVar4,0x2064,0x27d1);
    FUN_2c606e5c(puVar4,1,0);
    FUN_2c606da8(0x2c45613c,1,0);
    FUN_2c606d9c(0x2c45613c,1,0);
    FUN_2c606d84(0x2c45613c,unaff_r7,0);
    FUN_2c606d30(0x2c45613c,2,0);
    FUN_2c606d3c(0x2c45613c,2,0);
    FUN_2c606d18(0x2c45613c,2,0);
    FUN_2c606d24(0x2c45613c,2,0,param_2);
    return;
  }
  uVar1 = *(ushort *)(unaff_r4 + 0x3e);
  iVar5 = iVar5 + 0xf5;
  *(undefined1 *)(unaff_r4 + 0x4a) = 0x4a;
  *param_4 = 0x128;
  param_4[1] = 0x13c;
  param_4[2] = iVar5;
  param_4[3] = (uint)uVar1;
  puVar9 = param_4 + 4;
  *(short *)((int)param_4 + 0x16) = (short)puVar9;
  *(undefined2 *)(uVar2 - 0x8d) = 0x13c;
  software_bkpt(0xfe);
  iVar8 = (int)puVar9 >> 3;
  *(short *)(iVar8 + 0xe) = (short)iVar8;
  coprocessor_moveto(0xe,0,5,0x13c,in_cr7,in_cr14);
  *puVar9 = 0x25000;
  param_4[5] = 0x13c;
  param_4[6] = iVar5;
  *(short *)(iVar8 + 6) = (short)iVar8;
  puVar7 = (uint *)(uint)*(ushort *)(unaff_lr + (uVar2 - 199));
  if (!SBORROW4(iVar5,0xfe)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)(uVar2 - 0xa7) = 0;
  uVar2 = _LAB_2c4569d0;
  *puVar7 = (uint)*(byte *)((int)puVar7 + 5);
  puVar7[1] = uVar2;
  *(byte *)((unaff_r7 >> 0x14) + 6) = *(byte *)((int)puVar7 + 5);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


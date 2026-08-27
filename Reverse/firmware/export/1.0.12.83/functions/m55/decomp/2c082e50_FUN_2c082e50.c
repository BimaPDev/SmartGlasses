/* FUN_2c082e50 @ 0x2c082e50 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c083dd4) */
/* WARNING: Removing unreachable block (ram,0x2c083e8a) */
/* WARNING: Removing unreachable block (ram,0x2c083d92) */
/* WARNING: Removing unreachable block (ram,0x2c083dda) */
/* WARNING: Removing unreachable block (ram,0x2c083db4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c082e50(undefined2 *param_1,undefined4 param_2,undefined2 param_3,int param_4)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int unaff_r5;
  uint uVar9;
  int unaff_r6;
  int unaff_r7;
  uint uVar10;
  undefined4 unaff_lr;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr2;
  undefined4 in_cr4;
  undefined4 in_cr8;
  undefined4 in_cr9;
  undefined4 in_cr10;
  undefined4 in_cr11;
  undefined8 unaff_d14;
  undefined1 in_q15 [16];
  ushort in_stack_00000396;
  
  *param_1 = param_3;
  uVar8 = unaff_r7 * 0x400;
  uVar5 = 0x5f;
  puVar2 = (uint *)(unaff_r6 >> 0xc);
  uVar10 = unaff_r7 * 0x4000;
  *(undefined1 *)((int)puVar2 + 0x1e) = 0x5f;
  coprocessor_moveto(3,1,7,unaff_lr,in_cr11,in_cr2);
  uVar9 = (uint)*(byte *)(unaff_r5 + 7);
  coprocessor_moveto(8,7,6,uVar10,in_cr1,in_cr1);
  _DAT_00000091 = SUB42(puVar2,0);
  VectorAdd(in_q15,unaff_d14,1,1);
  uVar1 = puVar2[unaff_r7 * 0x100] >> 6;
  uVar3 = _DAT_2c083e78;
  if (uVar1 == 0) {
    uRam0000005f = CONCAT13((char)puVar2,(undefined3)uRam0000005f);
    *(uint **)(unaff_r6 + 0x60) = puVar2;
    puVar4 = (uint *)(param_4 >> 0x18);
    *puVar4 = (uint)*(byte *)(unaff_r6 + 1);
    puVar4[1] = uVar9;
    puVar4[2] = uVar10;
    puVar2 = puVar4 + 3 + unaff_r7 * 0x100;
    uVar1 = (uint)*(ushort *)(param_4 + 0x36);
    uVar5 = (uint)*(byte *)((int)puVar2 * 2);
    if ((int)puVar2 * 0x40 == 0) {
      uVar3 = *(uint *)(param_4 + 0x40);
      uVar1 = uVar3 >> 0x14;
      if ((uVar3 >> 0x13 & 1) == 0 || uVar1 == 0) {
        *(uint *)(uVar9 + 0x18) = uVar1;
        *(uint *)(uVar10 + uVar3 * 0x20000) = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      coprocessor_function2(0xb,0xd,5,in_cr2,in_cr8,in_cr1);
      *(uint *)(iRam2c084108 + 0x40) = (uint)(*(ushort *)(param_4 + 0x36) >> 7);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar3 = uVar9;
    if ((int)puVar2 * 0x40 < 0 != SCARRY4((int)(puVar4 + 3),uVar8)) {
      coprocessor_moveto(1,7,5,unaff_lr,in_cr9,in_cr11);
      *(char *)(param_4 + 3) = (char)in_stack_00000396;
      *(short *)(uVar8 + 2) = (short)&stack0xfffffff8 + 0x39c;
      uVar6 = *(undefined4 *)(uVar8 + 4);
      iVar7 = *(int *)(uVar8 + 8);
      *(undefined4 *)(in_stack_00000396 + 0x18) = uVar6;
      coprocessor_function2(1,0,2,in_cr10,in_cr4,in_cr0);
      *(short *)(iVar7 + 4) = (short)uVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  *puVar2 = (uint)puVar2;
  puVar2[1] = uVar5;
  puVar2[2] = uVar8;
  puVar2[3] = uVar3;
  coprocessor_moveto(1,0,4,uVar1,in_cr2,in_cr2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


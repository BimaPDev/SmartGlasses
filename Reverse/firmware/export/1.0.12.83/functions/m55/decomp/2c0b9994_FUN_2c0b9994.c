/* FUN_2c0b9994 @ 0x2c0b9994 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c0b9994(uint *param_1,uint param_2,uint param_3,uint param_4)

{
  undefined2 uVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  ushort *unaff_r4;
  uint unaff_r5;
  uint unaff_r6;
  uint uVar8;
  uint unaff_r7;
  int in_r12;
  undefined4 *unaff_lr;
  char in_NG;
  char in_ZR;
  bool in_CY;
  bool bVar9;
  bool bVar10;
  undefined4 in_cr9;
  undefined4 in_cr10;
  undefined4 in_stack_000001bc;
  int in_stack_000003fc;
  
  if ((in_NG == '\0') ||
     (unaff_r4 = (ushort *)(((unaff_r5 + 2) - param_3) - (uint)!in_CY), in_ZR == '\0')) {
    if (in_NG == '\0') {
      unaff_r7 = unaff_r7 - 0x73;
    }
    software_bkpt(0xaa);
    func_0x2ce63cac(&stack0x00000110,(int)*(char *)(unaff_r7 + (int)unaff_r4));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar5 = (undefined4 *)(param_2 >> (param_3 & 0xff));
  uVar8 = unaff_r6 + 0x59;
  if ((0xffffffa6 < unaff_r6) || (uVar7 = param_4, unaff_r4 == (ushort *)0x0)) {
    if (0xffffffa6 < unaff_r6) {
      *puVar5 = param_1;
      puVar5[1] = param_3;
      puVar5[2] = uVar8;
      puVar5 = puVar5 + 3;
    }
    else {
      unaff_r4 = unaff_r4 + 0x76;
      unaff_r7 = unaff_r7 - 0xc6;
    }
    if (uVar8 != 0) {
      uVar7 = param_4 << 0x1e;
      if (SCARRY4(unaff_r6,0x59)) {
        uVar7 = (uint)*unaff_r4;
        uVar8 = unaff_r6 - 0x82;
      }
      uVar6 = uVar7 + 0x76;
      bVar9 = uVar6 == 0;
      *param_1 = (uint)puVar5;
      param_1[1] = uVar6;
      param_1[2] = unaff_r5;
      param_1[3] = uVar8;
      param_1[4] = unaff_r7;
      uVar4 = (uint)*(ushort *)(puVar5 + 0xe);
      if (0xffffff89 < uVar7 && !bVar9) {
        uVar4 = (uint)*(byte *)(param_4 + uVar8);
      }
      else {
        bVar9 = (unaff_r5 & (uint)unaff_r4) == 0;
      }
      if (0xffffff89 >= uVar7 || bVar9) {
        unaff_r7 = uVar8 << 0x1b;
      }
      uVar7 = unaff_r7 & (uint)unaff_r4;
      puVar2 = (uint *)((uint)puVar5 >> (uVar7 & 0x1f) | (int)puVar5 << 0x20 - (uVar7 & 0x1f));
      software_bkpt(0xe4);
      uVar6 = uVar6 & (uint)unaff_r4;
      coprocessor_moveto(0xe,7,7,param_4,in_cr9,in_cr10);
      uVar8 = (int)unaff_r4 << (uVar6 & 0xff);
      bVar9 = (uVar8 & 0x8000000) == 0;
      bVar10 = (uVar8 & 0x7ffffff) == 0;
      if (bVar9 || bVar10) {
        *(uint *)(uVar4 + 0x2b) = uVar4 + 0x2b;
        *(uint **)(uVar4 + 0x2f) = puVar2;
        *(uint *)(uVar4 + 0x33) = uVar6;
        *(uint *)(uVar4 + 0x37) = param_4;
        *(int *)(uVar4 + 0x3b) = (int)puVar2 >> 0x14;
      }
      if (bVar9 || bVar10) {
        *(uint *)(uVar6 + uVar7) = uVar7;
        uVar7 = uVar7 - 0xe5;
      }
      *puVar2 = uVar6;
      puVar2[1] = 0x2c0b9bbc;
      puVar2[2] = uVar8;
      puVar2[3] = uVar7;
      uVar3 = _DAT_2c0b9b58;
      *unaff_lr = param_1;
      unaff_lr[1] = param_4;
      unaff_lr[2] = uVar3;
      *(uint *)(((*(uint *)(param_4 + in_stack_000003fc) & (int)(char)((char)unaff_lr + '\f')) -
                0x88) + unaff_r5 + in_r12) = param_4 << 0xc;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar7 = param_4 + 0x12;
    *(uint *)(param_3 + 0x60) = unaff_r7;
    *(short *)(param_4 + 0x50) = (short)uVar7;
    uVar1 = *(undefined2 *)(unaff_r5 + uVar7);
    *param_1 = (uint)param_1;
    param_1[1] = (uint)puVar5;
    param_1[2] = uVar7;
    param_1[3] = (uint)unaff_r4;
    param_1[4] = unaff_r7 - 0x4d;
    software_bkpt(0xfe);
    unaff_r7 = uVar7 + (int)puVar5;
    *(char *)(unaff_r5 + 0x1f) = ((char)uVar1 - (char)puVar5) - !CARRY4(uVar7,(uint)puVar5);
  }
  *(char *)(((int)(unaff_r7 - 0x98) + ((undefined4 *)(unaff_r7 - 0x98) <= puVar5) + uVar7 >> 9) -
           0x7d) = (char)uVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* FUN_2c45ea84 @ 0x2c45ea84 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c45ea84(int param_1,uint param_2,uint *param_3,int param_4)

{
  code *pcVar1;
  byte bVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  uint unaff_r4;
  uint uVar9;
  undefined4 uVar10;
  uint unaff_r5;
  int unaff_r6;
  int unaff_r10;
  undefined4 in_r12;
  int iVar11;
  char in_NG;
  char in_OV;
  undefined4 in_cr4;
  undefined4 in_cr6;
  undefined4 in_cr11;
  undefined4 in_cr12;
  uint uStack0000001c;
  
  if (in_NG != in_OV) {
    *(char *)(unaff_r6 + 0xc) = (char)param_4;
    uVar8 = param_3[7];
    param_2 = param_4 - param_2;
    puVar4 = (undefined4 *)(param_1 + 0xb2);
    *(int *)(uVar8 * 2) = param_4;
    *(uint *)(uVar8 + (int)puVar4) = uVar8;
    uVar5 = param_2 >> 2;
    uVar10 = *puVar4;
    iVar6 = *(int *)(param_1 + 0xb6);
    if (SBORROW4(uVar8,uVar5)) {
      *(char *)puVar4 = (char)param_2;
      *(short *)(uVar5 + 0x3e) = (short)puVar4;
      *(short *)(uVar8 + (int)puVar4) = (short)uVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *puVar4 = puVar4;
    *(uint *)(param_1 + 0xb6) = uVar5;
    *(undefined4 *)(param_1 + 0xba) = uVar10;
    *(uint *)(param_1 + 0xbe) = param_2;
    *(int *)(param_1 + 0xc2) = iVar6;
    *(undefined4 *)(param_1 + 0xc6) = 199;
    *(short *)(iVar6 + 8) = (short)iVar6;
    *(char *)(uVar8 + 4) = (char)uVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar3 = unaff_r5 >> 5;
  *(short *)(uVar3 + 0x24) = (short)unaff_r5;
  *(char *)((int)param_3 + 10) = (char)param_3;
  uVar5 = _LAB_2c45ebd2_2;
  bVar2 = *(byte *)(unaff_r5 + 0xc);
  uVar8 = param_2;
  uVar9 = unaff_r4;
  if (param_3 != (uint *)0x6e) {
    uVar8 = *param_3;
    uVar9 = param_3[1];
  }
  if (bVar2 < 0xffffff6f) {
    if (uVar3 == 0) {
      iVar6 = *(int *)(unaff_r4 + 8);
      *(char *)(iVar6 + 6) = (char)iVar6;
      if (iVar6 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(2,0x2c45ef56);
      uStack0000001c = param_2;
      (*pcVar1)();
    }
    puVar7 = *(uint **)((uVar8 | ~((int)uVar9 >> 0x1a)) + 800);
    coprocessor_store(0xb,in_cr6,unaff_r10 + -0x194);
    software_bkpt(5);
    *puVar7 = uVar3;
    puVar7[1] = (uint)puVar7;
    puVar7[2] = uVar5;
    iVar11 = coprocessor_movefromRt(10,2,3,in_cr12,in_cr4);
    *(undefined1 *)(*(int *)(iVar11 + 0x328) + 0x11) = *(undefined1 *)(bVar2 + 0xa2);
    coprocessor_loadlong(9,in_cr11,in_r12);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


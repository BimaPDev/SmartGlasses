/* FUN_2c082eb0 @ 0x2c082eb0 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c082860) */
/* WARNING: Removing unreachable block (ram,0x2c08277e) */
/* WARNING: Removing unreachable block (ram,0x2c082ee0) */

void FUN_2c082eb0(undefined2 *param_1,int param_2,undefined2 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int *unaff_r6;
  int iVar9;
  undefined4 in_cr2;
  undefined4 in_cr11;
  
  *param_1 = param_3;
  *(undefined1 *)(param_2 + 0x16) = 0x5f;
  coprocessor_moveto(7,1,7,param_1,in_cr11,in_cr2);
  iVar5 = *unaff_r6;
  iVar7 = unaff_r6[2];
  if (0xfffa7ef9 < (uint)unaff_r6[3]) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)(iVar7 + iVar5) = 0x9e;
  iVar8 = *(int *)(iVar7 + 4);
  iVar9 = *(int *)(iVar7 + 0xc);
  *(short *)(iVar9 + 0x3e) = (short)*(undefined4 *)(iVar7 + 8);
  uVar4 = uRam2c082a00;
  uVar3 = uRam2c0829fc;
  uVar2 = uRam2c0829f8;
  uVar1 = uRam2c0829f4;
  if (iVar9 == 0) {
    puVar6 = *(undefined4 **)(iVar5 + 0x68);
    if (*(int *)(iVar8 + 0x14) >> 0xb < 0) {
      *puVar6 = uRam2c0829f0;
      puVar6[1] = puVar6;
      puVar6[2] = uVar1;
      puVar6[3] = uVar2;
      puVar6[4] = uVar3;
      puVar6[5] = uVar4;
      software_bkpt(0xe0);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* FUN_2c1572d0 @ 0x2c1572d0 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c1574e0) */
/* WARNING: Removing unreachable block (ram,0x2c157216) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c1572d0(int param_1,int param_2,int param_3,int param_4)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint unaff_r4;
  int iVar7;
  uint uVar8;
  int unaff_r5;
  undefined1 *puVar9;
  int unaff_r6;
  int iVar10;
  undefined4 unaff_r7;
  undefined4 unaff_pc;
  undefined4 in_cr0;
  undefined4 in_cr3;
  undefined4 in_cr15;
  
  if (param_2 != 0) {
    if (unaff_r4 == 0x4e) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xd5,0x2c1572f0);
    (*pcVar1)();
  }
  if (0x4d < (int)unaff_r4) {
    if (unaff_r4 < 0x4e) {
      coprocessor_loadlong(0xc,in_cr3,unaff_r4 + 0x48);
      *(int *)(unaff_r4 + 0x40) = unaff_r5;
      *(int *)(param_1 + 0x50) = param_1;
      *(char *)(unaff_r6 + 9) = (char)param_3;
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined4 *)(unaff_r5 + 0x44) = unaff_r7;
      *(int *)(unaff_r4 + 0x34) = unaff_r5;
      iVar6 = param_3 + -0x3a;
      uRam00000001 = (undefined1)unaff_r7;
      puVar9 = *(undefined1 **)(unaff_r4 + 100);
      *puVar9 = (char)param_1;
      *(undefined1 *)(unaff_r4 + 9) = 0;
      iVar7 = unaff_r4 * 2;
      iVar4 = *(int *)(iVar7 + 0x10);
      iVar10 = *(int *)(puVar9 + 0x14);
      *(int *)(iVar10 + iVar4) = iVar7;
      *(char *)(iVar7 + 9) = (char)iVar4;
      uVar5 = *(undefined4 *)(iVar7 + 0x54);
      *puVar9 = (char)param_1;
      *(char *)(iVar7 + 9) = (char)uVar5;
      uVar5 = *(undefined4 *)(unaff_r4 * param_4 + 4);
      SVCall = 0x2c;
      iVar4 = *(int *)(iVar7 + 0x54);
      iVar3 = (int)*(short *)(iVar7 + 0x2c);
      *(int *)(iVar10 + 0x14) = iVar6;
      *(int *)(iVar10 + 0x54) = iVar7;
      uVar8 = unaff_r4 * 4;
      *(undefined1 *)(iVar10 + 1) = 0x3d;
      *(uint *)(uVar8 + 0x14) = uVar8;
      *(uint *)(iVar10 + 0x54) = uVar8;
      *(int *)(param_3 + -0x26) = iVar3;
      *(int *)(iVar10 + 0x14) = iVar6;
      *(undefined4 *)(iVar4 + 0x34) = uVar5;
      iVar4 = iRam000000de;
      iVar7 = *(int *)(uVar8 + 0x44);
      iVar10 = iVar7 + -0x73;
      _DAT_0000008e = iVar3;
      *(int *)(uVar8 + 0x40) = iVar10;
      cVar2 = (char)iVar10;
      *(char *)(iVar4 + 1) = cVar2;
      *(uint *)(uVar8 + 0x14) = uVar8;
      *(uint *)(iVar4 + 0x54) = uVar8;
      *(int *)(param_3 + -0x26) = iVar3;
      *(int *)(iVar4 + 0x14) = iVar6;
      *(char *)(uVar8 + 9) = cVar2;
      iVar4 = 0x72 >> (uVar8 & 0xff);
      iVar7 = *(int *)(iVar4 * (iVar7 + -0x94) + 0x74);
      iVar3 = *(int *)(uVar8 + 100);
      *(char *)(iVar3 + 0x15) = (char)uRam2c1575d8;
      uVar5 = *(undefined4 *)(uVar8 + 4);
      *(undefined4 *)(uVar8 + 0x20) = 0x74;
      *(char *)(iVar3 + 0x11) = (char)iVar4 * cVar2;
      uRam000000c4 = 0x74;
      *(char *)(iVar7 + 9) = (char)iVar6;
      *(char *)(iVar3 + 9) = (char)uVar5;
      *(undefined4 *)(uVar8 + 0x70) = 0x3d;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar8 = coprocessor_movefromRt(0xf,1,7,in_cr0,in_cr15);
  if ((uVar8 >> 0x1d & 1) == 0 || param_1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  coprocessor_moveto(0xf,1,7,unaff_pc,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,2,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,2,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,2,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,2,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,2,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,2,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,2,7,in_cr0,in_cr15);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


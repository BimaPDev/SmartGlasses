/* FUN_2c43fc38 @ 0x2c43fc38 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c440382) */
/* WARNING: Removing unreachable block (ram,0x2c440380) */
/* WARNING: Removing unreachable block (ram,0x2c43eb7c) */
/* WARNING: Removing unreachable block (ram,0x2c43ef72) */
/* WARNING: Removing unreachable block (ram,0x2c43eeb6) */
/* WARNING: Removing unreachable block (ram,0x2c43ef84) */
/* WARNING: Removing unreachable block (ram,0x2c43ef8e) */
/* WARNING: Removing unreachable block (ram,0x2c43f5ba) */
/* WARNING: Removing unreachable block (ram,0x2c43f5bc) */
/* WARNING: Removing unreachable block (ram,0x2c43f58a) */
/* WARNING: Removing unreachable block (ram,0x2c43f62c) */
/* WARNING: Removing unreachable block (ram,0x2c440386) */
/* WARNING: Removing unreachable block (ram,0x2c43f538) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c43fc38(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  byte bVar1;
  ushort uVar2;
  int *piVar3;
  int *piVar4;
  int extraout_r2;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  code *unaff_r10;
  undefined4 *puVar10;
  int unaff_lr;
  char in_OV;
  char cVar11;
  undefined4 in_cr1;
  undefined4 in_cr10;
  undefined4 in_cr15;
  undefined8 uVar12;
  undefined4 in_stack_00000178;
  undefined4 uStack_38;
  uint uStack_34;
  undefined1 *puStack_30;
  
  iVar8 = iRam2c43ffb8;
  iVar6 = _LAB_2c43ff60;
  puStack_30 = &stack0x00000128;
  puVar10 = &uStack_38;
  uStack_38 = 0x2c43fe78;
  iVar9 = *(int *)(param_1 + 0x54);
  uVar5 = param_4 >> 0xc;
  coprocessor_loadlong(4,in_cr10,unaff_lr + _LAB_2c43fe70 + -0x15c);
  if (in_OV != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (uVar5 == 0) {
    bVar1 = *(byte *)(param_4 + iVar9);
    piVar4 = *(int **)(_LAB_2c43ff60 + 0x44);
    iVar8 = coprocessor_movefromRt(0,3,4,in_cr15,in_cr1);
    uVar2 = *(ushort *)(iVar8 + 0x3c);
    software_bkpt(0xdf);
    *piVar4 = _LAB_2c43ff60;
    piVar4[1] = 0;
    piVar4[2] = param_4;
    piVar4[3] = (uint)uVar2;
    piVar4[4] = iVar9;
    piVar4 = piVar4 + 5;
    iVar8 = 0;
    uStack_34 = param_4;
    while( true ) {
      *(int *)(iVar6 + 0x24) = iVar8;
      puVar7 = _LAB_2c43ecd8;
      if (iVar6 >> 0x15 != 0) {
        uRam00000052 = (uint)*(ushort *)(iVar6 + 0x28);
        uRam00000056 = 0x30;
        uRam0000005a = 0;
        _DAT_0000004e = iVar6;
        *_LAB_2c43ecd8 = 0xc0;
        puVar7[1] = 0xc000;
        puRam0000c000 = puVar7 + 2;
        uRam0000c004 = 0xc0;
        uRam0000c008 = (uint)bRam0000011e;
        uRam0000c00c = 0x30;
        uRam0000c010 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      cVar11 = SBORROW4(iVar8,(int)piVar4);
      uVar12 = (*(code *)0x2c43f830)();
      piVar4 = (int *)((ulonglong)uVar12 >> 0x20);
      piVar3 = (int *)uVar12;
      iVar6 = *piVar3;
      puVar7 = (undefined4 *)piVar3[1];
      iVar8 = piVar3[2];
      if (cVar11 != '\0') break;
      puVar10[0xa9] = piVar4;
      if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar2 = *(ushort *)(bVar1 + 0x30);
      *puVar7 = 0x47;
      puVar7[1] = piVar4;
      puVar7[2] = (uint)uVar2;
      puVar7[3] = puVar7;
      puVar7[4] = iVar8;
      puVar10[0x30] = iVar8;
      puVar10[0x2f] = (uint)bVar1;
      puVar10[0x2e] = iVar6 + 0x71;
      puVar10[0x2d] = extraout_r2;
      puVar10[0x2c] = piVar4;
      puVar10 = puVar10 + 0x2b;
      *puVar10 = 0x47;
      bVar1 = *(byte *)((int)piVar4 + (int)puVar7);
      iVar6 = 0x12e;
      iVar8 = extraout_r2;
    }
    *(int **)(extraout_r2 + 0x38) = piVar4;
    (*unaff_r10)();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((int)puStack_30 >> 9 < 0) {
    *(short *)(uVar5 + 0x22) = (short)iVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined4 *)(_LAB_2c43fd4c + uVar5) = 0x2c43ffb0;
  uRam2c43ffcd = (undefined1)iVar8;
  *(undefined4 *)(iVar8 + 0x14) = 0;
  uRam0000003a = 9;
  uRam00000022 = 0;
  if ((iRamffffff7c >> 0x14 & 1U) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


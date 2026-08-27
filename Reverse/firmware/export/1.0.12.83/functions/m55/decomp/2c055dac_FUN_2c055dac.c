/* FUN_2c055dac @ 0x2c055dac */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c055f4e) */
/* WARNING: Removing unreachable block (ram,0x2c055f2e) */
/* WARNING: Removing unreachable block (ram,0x2c055f30) */
/* WARNING: Removing unreachable block (ram,0x2c093390) */
/* WARNING: Removing unreachable block (ram,0x2c055fbc) */
/* WARNING: Removing unreachable block (ram,0x2c055fe6) */
/* WARNING: Removing unreachable block (ram,0x2c055fce) */
/* WARNING: Removing unreachable block (ram,0x2c055fde) */
/* WARNING: Removing unreachable block (ram,0x2c055f64) */
/* WARNING: Removing unreachable block (ram,0x2c055f66) */
/* WARNING: Removing unreachable block (ram,0x2c055e7a) */
/* WARNING: Removing unreachable block (ram,0x2c055f74) */
/* WARNING: Removing unreachable block (ram,0x2c055f78) */
/* WARNING: Removing unreachable block (ram,0x2c055f8e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c055dac(undefined4 param_1,int *param_2,undefined4 param_3,uint param_4)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  ushort uVar4;
  ushort *puVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  int unaff_r7;
  int unaff_r9;
  int unaff_lr;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr1;
  
  uVar4 = _Reserved3;
  if (in_ZR || in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar12 = *(undefined4 **)(unaff_r7 + 4);
  puVar5 = (ushort *)(uint)_Reserved3;
  *puVar5 = _Reserved3;
  if ((param_4 & 0x3ffffff) == 0) {
    uVar2 = *(ushort *)(puVar12 + 7);
    iVar9 = -((int)puVar12 >> 0x1f);
    software_bkpt(0xe9);
    *(short *)(iVar9 + 0x20) = (short)iVar9;
    if (((uint)puVar12 >> 0x1e & 1) == 0 || iVar9 == 0) {
      *(short *)((int)puVar12 + 2) = (short)puVar12;
      *puVar12 = puVar5;
      puVar12[1] = param_4 * 0x40;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(ushort *)(uVar2 + 0x16) = uVar4;
    software_bkpt(0xe0);
    uRam2c056064 = 100;
    software_interrupt(0x1e);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar9 = *(int *)puVar5;
  iVar6 = *(int *)(puVar5 + 2);
  piVar7 = *(int **)(puVar5 + 4);
  iVar8 = *(int *)(puVar5 + 6);
  iVar10 = *(int *)(puVar5 + 8);
  iVar11 = *(int *)(puVar5 + 10);
  sVar3 = *(short *)(*(int *)(puVar5 + 0xc) + iVar10);
  *(char *)((int)piVar7 + 0x1f) = (char)iVar9;
  *piVar7 = iVar9;
  piVar7[1] = (int)piVar7;
  piVar7[2] = iVar10;
  *(short *)(iVar8 + 10) = (short)iVar11;
  *piVar7 = iVar9;
  piVar7[1] = iVar6;
  piVar7[2] = (int)piVar7;
  piVar7[3] = iVar8;
  piVar7[4] = iVar10;
  piVar7[5] = (int)sVar3;
  iVar6 = (int)piVar7 * 0x800;
  bVar1 = *(byte *)(iVar11 + 0x1c);
  *(ushort *)(iVar9 + 0x1e) = (ushort)bVar1;
  *(char *)(iVar9 + 0x1b) = (char)iVar9;
  *(short *)(iVar9 + 0x12) = (short)iVar6;
  *(short *)(unaff_lr + -0x47) = (short)iVar11;
  *param_2 = iVar9;
  param_2[1] = (int)param_2;
  param_2[2] = (uint)bVar1;
  param_2[3] = iVar6;
  param_2[4] = unaff_r7;
  *(int *)(iVar6 + 0x398) = unaff_lr + -99;
  *(int *)(iVar6 + 0x39c) = iVar10;
  *(short *)(iVar11 + 0x38) = (short)iVar10;
  coprocessor_load(4,in_cr1,unaff_r9 + -0x2a4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


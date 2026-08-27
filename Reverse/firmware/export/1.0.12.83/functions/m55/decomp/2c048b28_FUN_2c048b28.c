/* FUN_2c048b28 @ 0x2c048b28 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c048bde) */
/* WARNING: Removing unreachable block (ram,0x2c048be2) */
/* WARNING: Removing unreachable block (ram,0x2c048be8) */
/* WARNING: Removing unreachable block (ram,0x2c048bee) */
/* WARNING: Removing unreachable block (ram,0x2c048bf0) */
/* WARNING: Removing unreachable block (ram,0x2c048ae4) */
/* WARNING: Removing unreachable block (ram,0x2c048af0) */
/* WARNING: Removing unreachable block (ram,0x2c048af8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c048b28(int param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *unaff_r4;
  int unaff_r6;
  int unaff_r7;
  
  iVar2 = iRam2c048ba4;
  *(int *)param_2 = param_2;
  *(int *)(param_2 + 4) = param_3;
  *(int *)(param_2 + 8) = iVar2;
  _MasterStackPointer = (undefined2)param_3;
  *(undefined2 *)(param_1 * 0x1000) = _MasterStackPointer;
  iVar2 = iVar2 + 1;
  *(int *)((undefined2 *)(param_1 * 0x1000) + 0x30) = unaff_r6;
  *(int *)param_2 = param_2;
  *(int *)(param_2 + 4) = param_3;
  *(int *)(param_2 + 8) = iVar2;
  uVar1 = (undefined1)param_3;
  *(undefined1 *)(param_2 + param_3) = uVar1;
  *(undefined2 *)(param_1 * 0x1000000) = _MasterStackPointer;
  *(int *)((undefined2 *)(param_1 * 0x1000000) + 0x30) = unaff_r6;
  *(int *)param_2 = param_2;
  *(int *)(param_2 + 4) = param_3;
  *(int *)(param_2 + 8) = iVar2;
  *(undefined1 *)(param_2 + param_3) = uVar1;
  iRam00000060 = unaff_r6;
  *(int *)param_2 = param_2;
  *(int *)(param_2 + 4) = param_3;
  *(int *)(param_2 + 8) = iVar2;
  *(undefined1 *)(param_2 + param_3) = uVar1;
  *unaff_r4 = 0;
  *(int *)(unaff_r6 * 5) = unaff_r6;
  if (unaff_r7 + -0x2d3 == -1 || -1 < unaff_r7 + -0x2d3 != SBORROW4(unaff_r7 + -0x1e2,0xf1)) {
    *unaff_r4 = 0;
    *(int *)(unaff_r6 * 5) = unaff_r6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (unaff_r4 != (undefined1 *)0x9b) {
    *(int *)(param_2 + 0x74) = unaff_r6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(int *)(param_2 + 0x74) = unaff_r6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


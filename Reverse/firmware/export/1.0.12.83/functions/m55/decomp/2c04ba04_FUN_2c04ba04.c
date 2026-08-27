/* FUN_2c04ba04 @ 0x2c04ba04 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c04baba) */
/* WARNING: Removing unreachable block (ram,0x2c04babe) */
/* WARNING: Removing unreachable block (ram,0x2c04bac4) */
/* WARNING: Removing unreachable block (ram,0x2c04baca) */
/* WARNING: Removing unreachable block (ram,0x2c04bacc) */
/* WARNING: Removing unreachable block (ram,0x2c04b9c0) */
/* WARNING: Removing unreachable block (ram,0x2c04b9cc) */
/* WARNING: Removing unreachable block (ram,0x2c04b9d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c04ba04(int param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *unaff_r4;
  int unaff_r6;
  int unaff_r7;
  
  iVar2 = iRam2c04ba80;
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


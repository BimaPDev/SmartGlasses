/* FUN_2c460284 @ 0x2c460284 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c460354) */
/* WARNING: Removing unreachable block (ram,0x2c460356) */
/* WARNING: Removing unreachable block (ram,0x2c460266) */
/* WARNING: Removing unreachable block (ram,0x2c4601c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c460284(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int *unaff_r4;
  uint unaff_r5;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int unaff_lr;
  undefined4 in_cr2;
  undefined4 in_cr6;
  int iStack00000010;
  int in_stack_00000174;
  int iStack_18;
  
  uVar9 = uRam2c4602a0;
  uVar3 = unaff_r5 >> 0x1a;
  iStack_18 = in_stack_00000174;
  iVar4 = unaff_r5 + (int)unaff_r4;
  iVar5 = (int)param_3 * 8;
  *param_3 = (int *)(uVar3 + 0x9e);
  coprocessor_load(0xe,in_cr2,unaff_lr);
  param_3[0xf] = iVar5;
  uVar7 = _LAB_2c460520;
  if (SCARRY4(uVar3 + 5,0x99)) {
    *(int *)(uVar3 + 0x9e) = param_1;
    *(undefined4 *)(uVar3 + 0xa2) = uVar7;
    *(int **)(uVar3 + 0xa6) = unaff_r4;
    *(int *)(uVar3 + 0xaa) = iVar4;
    *(char *)(uVar3 + 0xae + iVar5) = (char)uVar7;
    return uVar9;
  }
  iStack00000010 = param_1;
  if (uVar3 + 5 < 0xffffff67) {
    coprocessor_store(7,in_cr6,iVar4 + 0x2e4);
    software_bkpt(0x84);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_2c532266:
  *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 4;
  unaff_r4 = (int *)*unaff_r4;
  do {
    if (unaff_r4 == (int *)0x0) {
      if (*DAT_2c532318 == unaff_lr) {
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
    FUN_2c48e424(unaff_r4,&LAB_2c46048c);
    iVar1 = FUN_2c48e82c(unaff_r4);
    if ((iVar1 == 0) && (iVar1 = FUN_2c48e424(unaff_r4,&LAB_2c46048c), iVar1 != 0)) {
      uVar9 = *(undefined4 *)(iVar1 + 0x10);
    }
    else {
      uVar9 = 0;
    }
    iVar1 = FUN_2c48e82c(unaff_r4);
    if ((iVar1 == 0) && (iVar1 = FUN_2c48e424(unaff_r4), iVar1 != 0)) {
      uVar7 = *(undefined4 *)(iVar1 + 0x10);
      iVar1 = FUN_2c48e82c(unaff_r4);
      uVar8 = uVar7;
      if (iVar1 != 0) goto LAB_2c5322a6;
LAB_2c532212:
      iVar1 = FUN_2c48e424(unaff_r4,DAT_2c532320);
      uVar8 = uVar7;
      if (iVar1 == 0) goto LAB_2c5322a6;
      pcVar6 = *(char **)(iVar1 + 0x10);
    }
    else {
      uVar7 = 0;
      iVar1 = FUN_2c48e82c(unaff_r4);
      uVar8 = 0;
      if (iVar1 == 0) goto LAB_2c532212;
LAB_2c5322a6:
      pcVar6 = (char *)0x0;
      uVar7 = uVar8;
    }
    iVar1 = FUN_2c48e82c(unaff_r4);
    if (iVar1 == 0) {
      FUN_2c48e424(unaff_r4,DAT_2c532324);
    }
    iVar1 = FUN_2c48e82c(unaff_r4);
    if (iVar1 == 0) {
      FUN_2c48e424(unaff_r4,DAT_2c532328);
    }
    iStack_18 = iVar5;
    if ((pcVar6 == (char *)0x0) || (*pcVar6 == '\0')) {
      param_1 = FUN_2c53159c(uVar7,uVar9);
      piVar2 = *(int **)(iVar4 + 4);
      iStack_18 = param_1;
      if (piVar2 != *(int **)(iVar4 + 8)) break;
    }
    else {
      param_1 = FUN_2c53159c(uVar7,pcVar6);
      piVar2 = *(int **)(iVar4 + 4);
      iStack_18 = param_1;
      if (piVar2 != *(int **)(iVar4 + 8)) break;
    }
    param_1 = FUN_2c530f1c(iVar4,piVar2,&iStack_18);
    unaff_r4 = (int *)*unaff_r4;
  } while( true );
  *piVar2 = param_1;
  iStack_18 = param_1;
  goto LAB_2c532266;
}


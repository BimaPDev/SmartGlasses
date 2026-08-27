/* FUN_2c449efe @ 0x2c449efe */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c449efe(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *extraout_r2;
  int *unaff_r4;
  int unaff_r6;
  code *unaff_lr;
  char cVar3;
  int in_stack_0000003c;
  int in_stack_000000f0;
  
  *(int *)(param_2 + 0x48) = param_3 + -0x9e;
  if (0x9d < param_3) {
    *(undefined1 *)(in_stack_000000f0 * 2) = 0;
    return;
  }
  if (SBORROW4(param_3,0x9e)) {
    *unaff_r4 = param_2;
    unaff_r4[1] = param_4;
    unaff_r4[2] = (int)unaff_r4;
    unaff_r4[3] = in_stack_000000f0;
    unaff_r4[4] = unaff_r6;
    iVar1 = param_4;
  }
  else {
    iVar1 = *(int *)(unaff_r6 + 4);
  }
  cVar3 = _LAB_2c449950 + 0x20 == 0;
  uVar2 = (*unaff_lr)(-in_stack_0000003c,_LAB_2c449950 + 0x20,*(undefined4 *)(param_2 + 0x34),iVar1,
                      param_1,param_4);
  if (cVar3 == '\0') {
    *(int **)(((int)unaff_r4 >> 10) + 8) = extraout_r2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined4 *)(*extraout_r2 + 0x60) = uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


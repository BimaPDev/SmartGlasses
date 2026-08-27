/* FUN_2c11f1f2 @ 0x2c11f1f2 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c11f1f2(int param_1,undefined4 param_2,char *param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  char unaff_r4;
  uint uVar3;
  char unaff_r11;
  undefined4 *in_stack_0000036c;
  
  uVar3 = (uint)*(byte *)(param_1 + 0xf);
  param_3[3] = unaff_r4;
  *(undefined4 *)(uVar3 + 0x96) = param_2;
  *(char **)(uVar3 + 0x9a) = param_3;
  *(undefined4 **)(uVar3 + 0x9e) = in_stack_0000036c;
  iVar2 = (int)in_stack_0000036c * 0x1000;
  if (iVar2 < 0) {
    *(char *)(iVar2 + 0x1f) = (char)in_stack_0000036c;
    *param_3 = (unaff_r11 + -0x1f) - (uVar3 < 0xffffff6a);
    uVar1 = _DAT_2c11f350;
    *(int *)(param_4 + -7) = iVar2;
    *(char **)(param_4 + -3) = param_3;
    *(undefined4 *)(param_4 + 1) = uVar1;
    *(int *)(param_4 + 5) = (int)param_3 >> 0x1e;
    *(int **)(param_4 + 9) = (int *)(param_4 + -7);
    software_interrupt(0x7b);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iRam000000a8 = (int)*(short *)((int)in_stack_0000036c + param_4);
  *(char *)((int)in_stack_0000036c + 0x1b) = (char)param_4;
  *in_stack_0000036c = 0x18;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


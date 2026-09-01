/* FUN_10130214 @ 0x10130214 */

void FUN_10130214(int param_1)

{
  undefined4 uVar1;
  short extraout_r2;
  short sVar2;
  bool bVar3;
  short *in_stack_00000000;
  uint in_stack_00000004;
  char in_stack_00000008;
  
  if ((in_stack_00000008 == '\x10') && (8 < in_stack_00000004)) {
    FUN_1011dbf4(param_1 + 0x7c,0xffffffff);
    uVar1 = FUN_10061948();
    *(undefined4 *)(param_1 + 0x74) = 0;
    *(undefined4 *)(param_1 + 0x70) = uVar1;
    bVar3 = *(char *)(param_1 + 0xcb) == '\n';
    sVar2 = extraout_r2;
    if (bVar3) {
      sVar2 = *in_stack_00000000;
    }
    if (bVar3) {
      sVar2 = *(short *)(param_1 + 0x6c) + sVar2;
    }
    else {
      sVar2 = *(short *)(param_1 + 0x6c) + 1;
    }
    *(short *)(param_1 + 0x6c) = sVar2;
    FUN_10113e2c(param_1 + 0x7c);
    return;
  }
  return;
}


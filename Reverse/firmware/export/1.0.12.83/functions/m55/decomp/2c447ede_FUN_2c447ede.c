/* FUN_2c447ede @ 0x2c447ede */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c447ede(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int unaff_r4;
  undefined1 unaff_r5;
  int unaff_r7;
  int in_stack_00000498;
  
  *(undefined4 *)(unaff_r4 + 0x24) = param_3;
  uVar1 = *(undefined1 *)(*(ushort *)(unaff_r7 + 0x1c) + 8);
  *(int *)(in_stack_00000498 + 0x20) = unaff_r4;
  *(undefined1 *)(unaff_r4 + 0x12) = uVar1;
  *(undefined1 *)(unaff_r4 + 3) = unaff_r5;
  uVar2 = *(undefined4 *)(in_stack_00000498 + -1);
  *(undefined4 *)(*(int *)(in_stack_00000498 + 3) + 0xc) = uVar2;
  cRam002c4484 = (char)uVar2 + '\x04';
  uRam002c447f = 0x7f;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


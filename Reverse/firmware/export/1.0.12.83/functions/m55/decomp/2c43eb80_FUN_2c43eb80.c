/* FUN_2c43eb80 @ 0x2c43eb80 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c43eb80(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int unaff_r5;
  int unaff_r9;
  int in_stack_000001a0;
  
  iVar4 = *(int *)(unaff_r5 + 0x4c);
  *(char *)(iVar4 + unaff_r5) = (char)iVar4;
  *(short *)(iVar4 + unaff_r9 + 0xc) = (short)(iVar4 + unaff_r9);
  *(undefined2 *)(in_stack_000001a0 + 4) = 0x33;
  puVar3 = _LAB_2c43f2b0;
  uVar2 = uRam0000003f;
  uVar1 = uRam00000037;
  *_LAB_2c43f2b0 = uRam00000033;
  puVar3[1] = puVar3;
  puVar3[2] = uVar1;
  puVar3[3] = uVar2;
  software_interrupt(0xba);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


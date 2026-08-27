/* FUN_2c0556ce @ 0x2c0556ce */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c0556c2) */
/* WARNING: Removing unreachable block (ram,0x2c0556c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c0556ce(void)

{
  undefined4 uVar1;
  int extraout_r1;
  undefined4 *puVar2;
  int unaff_r4;
  undefined4 uVar3;
  int iVar4;
  undefined2 uVar5;
  int unaff_r9;
  int extraout_r12;
  undefined4 in_cr1;
  int in_stack_00000064;
  ushort in_stack_00000254;
  
  func_0x2c186f52();
  uVar5 = SUB42(&stack0x00000218,0);
  (*(code *)0x2c0556e0)(extraout_r1 << 0x11);
  iVar4 = _DAT_2c05576c;
  coprocessor_load(5,in_cr1,unaff_r9 + -0x120);
  uRam0000003e = (undefined2)(_DAT_2c05576c << 2);
  puVar2 = (undefined4 *)(unaff_r4 + -0xa1 >> 0x16);
  uVar1 = 0;
  uVar3 = 0x6a;
  *(undefined4 *)(uint)in_stack_00000254 = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    *(char *)((undefined4 *)(uint)in_stack_00000254 + 6) = (char)(in_stack_00000254 >> 4);
    uVar1 = *(undefined4 *)(extraout_r12 + -0xb8);
    puVar2 = (undefined4 *)((int)&stack0x000002e4 * 0x40000);
    uVar3 = 0xa8;
    iVar4 = iRamffffff4c;
  }
  if (iVar4 == 0) {
    *puVar2 = uVar1;
    puVar2[1] = puVar2;
    puVar2[2] = 0;
    puVar2[3] = uVar3;
    uVar5 = 0x347;
    puVar2 = (undefined4 *)0x0;
  }
  *(char *)(in_stack_00000064 + 0x18) = (char)puVar2;
  uRam00000094 = uVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


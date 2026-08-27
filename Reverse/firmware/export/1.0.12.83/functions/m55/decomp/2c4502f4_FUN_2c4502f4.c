/* FUN_2c4502f4 @ 0x2c4502f4 */

/* WARNING: Control flow encountered bad instruction data */

bool FUN_2c4502f4(undefined4 param_1,uint *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined1 unaff_r5;
  uint *puVar5;
  uint uVar6;
  int *unaff_r7;
  char in_OV;
  int in_stack_000001c0;
  
  uVar6 = uRam2c45044c;
  iVar2 = *unaff_r7;
  uVar3 = unaff_r7[1];
  iVar4 = unaff_r7[2];
  puVar5 = (uint *)(uVar3 >> 0xd);
  *puVar5 = uRam2c45044c;
  puVar5[1] = uVar3;
  puVar5[2] = (uint)(unaff_r7 + 4);
  param_2[0x15] = uVar6;
  *(undefined1 *)(iVar2 + 0x16) = unaff_r5;
  *(short *)(iVar4 + 0x2a) = (short)param_2;
  if (puVar5 == (uint *)0x0 || in_OV != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar1 = *(byte *)(iVar4 + 0x13);
  uVar6 = *(uint *)((int)(uint)bVar1 >> 1);
  if ((bVar1 & 1) == 0) {
    *param_2 = uVar3;
    param_2[1] = (uint)bVar1;
    param_2[2] = uVar6;
    *(char *)(in_stack_000001c0 + 0xe) = (char)in_stack_000001c0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return *(int *)((int)puVar5 + (0x18 - iVar2)) == 0;
}


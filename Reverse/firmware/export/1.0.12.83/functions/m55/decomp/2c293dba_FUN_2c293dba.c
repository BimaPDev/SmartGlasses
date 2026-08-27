/* FUN_2c293dba @ 0x2c293dba */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c293dba(undefined4 param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  int unaff_r4;
  int unaff_r6;
  int *piVar4;
  undefined1 unaff_r11;
  int unaff_pc;
  char in_OV;
  undefined4 in_cr0;
  
  puVar3 = (undefined2 *)(param_3 * 0x20000);
  if (unaff_r4 != 0 && unaff_r4 < 0 == (bool)in_OV) {
    if (unaff_r4 == 0 || unaff_r4 < 0 != (bool)in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    coprocessor_loadlong(0,in_cr0,unaff_pc + 0x348);
  }
  uVar2 = (undefined2)unaff_r6;
  *puVar3 = uVar2;
  *puVar3 = uVar2;
  coprocessor_loadlong(0,in_cr0,unaff_pc);
  *puVar3 = uVar2;
  *(char *)((int)puVar3 + 1) = (char)unaff_r6;
  uRam00000101 = (undefined1)param_3;
  piVar4 = (int *)(((int)puVar3 >> 10) * 2);
  bVar1 = *(byte *)(*piVar4 + 0x1e);
  *(undefined1 *)piVar4[2] = unaff_r11;
  piVar4[7] = unaff_r6 + -3;
  *(byte *)((uint)bVar1 * 2) = bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


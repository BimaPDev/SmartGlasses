/* FUN_2c098bd6 @ 0x2c098bd6 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c098bd6(undefined1 *param_1,undefined4 param_2,undefined1 param_3)

{
  byte bVar1;
  undefined1 *puVar2;
  int unaff_r4;
  int unaff_r5;
  uint unaff_r6;
  int iVar3;
  int *piVar4;
  int unaff_r7;
  undefined4 unaff_r9;
  undefined4 unaff_lr;
  char in_OV;
  
  *param_1 = param_3;
  iVar3 = (int)unaff_r6 >> (unaff_r6 & 0xff);
  bVar1 = *(byte *)(*(short *)((int)param_1 * 2) + 0x10);
  if (in_OV == '\0') {
    *(undefined1 *)(unaff_r4 + unaff_r5) = 0xb3;
    *(undefined2 *)(bVar1 + 0xb3) = 0xb3;
  }
  *(int *)(iVar3 + 0x10) = iVar3;
  puVar2 = (undefined1 *)(int)*(short *)(iVar3 << 4);
  software_bkpt(0xe0);
  piVar4 = (int *)(((((int)puVar2 << 3) >> 8) + 0x200000) - (int)puVar2);
  iVar3 = *piVar4;
  *puVar2 = (char)piVar4;
  if (puVar2 == (undefined1 *)0x0) {
    uRam00200012 = 0x2b;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  VectorTableLookup(unaff_lr,unaff_r9,4);
  *(undefined1 *)(unaff_r7 + 0x14) = puVar2[iVar3];
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


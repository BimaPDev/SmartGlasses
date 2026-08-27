/* FUN_2c3967d6 @ 0x2c3967d6 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c3967d6(void)

{
  bool bVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  int *piVar6;
  int unaff_r5;
  int iVar7;
  undefined4 unaff_r6;
  undefined1 *puVar8;
  undefined4 in_cr13;
  undefined4 in_cr14;
  
  iVar4 = 0xb;
  puVar5 = &stack0xfffffff8;
  do {
    puVar8 = puVar5;
    iVar2 = iVar4 * 2;
    *(undefined4 *)(iVar2 + 100) = unaff_r6;
    puVar3 = *(undefined2 **)(puVar8 + 0x224);
    puVar5 = puVar8 + 0x2a8;
    if (puVar5 != (undefined1 *)0x0) goto code_r0x2c396caa;
    piVar6 = *(int **)(puVar8 + 0xc);
    iVar4 = *piVar6;
    iVar7 = piVar6[3];
    bVar1 = unaff_r5 <= iVar2;
    unaff_r5 = iVar7;
    puVar5 = puVar8 + 0x18;
  } while (bVar1);
  coprocessor_function(0xe,0xd,7,in_cr14,in_cr14,in_cr14);
  coprocessor_moveto(0xd,7,6,puVar8 + 0x18,in_cr14,in_cr13);
  piVar6 = *(int **)(piVar6[2] + 4);
  iVar4 = *piVar6;
  puVar3 = (undefined2 *)piVar6[1];
  iVar2 = piVar6[3];
  if (piVar6[2] == 0) {
    puVar5 = puVar8 + 0x2c4;
    puVar3 = *(undefined2 **)(puVar8 + 0x27c);
    *(short *)((ushort)puVar3[2] + 0x3c) = (short)iVar2;
    *(char *)(iVar2 + 0x1d) = (char)iVar2;
    puVar5[iVar7] = (char)iVar7;
    *puVar3 = (short)puVar5;
code_r0x2c396caa:
    iVar4 = (int)puVar5 << 2;
  }
  *puVar3 = (short)puVar3;
  *(int *)iVar4 = iVar4;
  *(undefined2 **)(iVar4 + 4) = puVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


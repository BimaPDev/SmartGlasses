/* FUN_2c154d72 @ 0x2c154d72 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c154d72(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  undefined4 unaff_r4;
  int iVar10;
  undefined4 *unaff_r5;
  int iVar11;
  int unaff_r6;
  int iVar12;
  int unaff_r7;
  
  *(short *)(unaff_r5 + 10) = (short)param_1;
  *unaff_r5 = unaff_r4;
  unaff_r5[1] = unaff_r5;
  bVar1 = *(byte *)(param_4 + 6);
  bVar2 = *(byte *)(param_1 + 0x18);
  *(undefined4 *)(uint)*(ushort *)(unaff_r7 + 0x24) = *(undefined4 *)(unaff_r6 + (int)unaff_r5);
  piVar7 = *(int **)((uint)bVar1 + (uint)bVar2);
  iVar8 = piVar7[1];
  piVar9 = (int *)piVar7[2];
  iVar11 = piVar7[4];
  iVar12 = piVar7[5];
  iVar10 = *(int *)(iVar11 + *piVar7);
  *piVar9 = iVar8;
  piVar9[1] = iVar10;
  piVar9[2] = iVar11;
  iVar11 = (int)(char)(&stack0x00000244)[iVar12];
  bVar1 = *(byte *)(iVar11 + 4);
  cVar3 = *(char *)(iVar12 + iVar10);
  piVar7 = (int *)(int)*(char *)(iVar10 + cVar3);
  *piVar7 = (int)&stack0x00000244;
  piVar7[1] = iVar8;
  piVar7[2] = (int)piVar7;
  piVar7[3] = iVar12;
  cVar4 = (&stack0x00000244)[*(char *)((int)piVar7 * 2)];
  *(ushort *)(cVar3 + 0xe) = (ushort)bVar1;
  cVar3 = *(char *)(iVar12 + (uint)bVar1);
  *(char *)(iVar10 + iVar12) = (char)(iVar11 + 0x32);
  uVar5 = SUB41(&stack0x00000244,0);
  *(undefined1 *)((int)cVar3 + iVar11 + 0x32) = uVar5;
  uVar6 = (undefined1)iVar10;
  *(undefined1 *)(iVar10 + 0x2c154cb0) = uVar6;
  *(undefined1 *)(iVar10 + 0x2c154cb0) = uVar6;
  software_interrupt(0xd0);
  (&stack0x00000244)[cVar3] = uVar5;
  *(char *)(iVar12 + 0x2c154cb0) = (char)iVar12;
  (&stack0x00000290)[iVar11] = uVar6;
  *(char *)(iVar10 + (uint)bVar1) = cVar3 + 'P';
  *(short *)(&stack0x0000013c + iVar12) = (short)cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


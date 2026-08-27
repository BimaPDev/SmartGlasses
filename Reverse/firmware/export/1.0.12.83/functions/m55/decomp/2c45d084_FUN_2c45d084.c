/* FUN_2c45d084 @ 0x2c45d084 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c45d084(undefined4 param_1,int *param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  uint unaff_r11;
  
  puVar5 = (undefined4 *)*param_2;
  uVar6 = param_2[1];
  iVar8 = param_2[2];
  iVar10 = param_2[3];
  uVar12 = param_2[4];
  bVar1 = *(byte *)(iVar10 + 6);
  uVar9 = (uint)bVar1;
  if (uVar9 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (-4 < param_3) {
    *(short *)(uVar9 + 0x1c) = (short)param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_3 + 3 < 0) {
    piVar7 = (int *)(param_3 + (int)puVar5);
    *piVar7 = (int)puVar5;
    piVar7[1] = uVar9;
    piVar7[2] = iVar10;
    piVar7[3] = uVar12;
    cVar3 = (char)puVar5 + '\x10';
    *(undefined4 *)(&stack0x0000019c + iVar8) = *puVar5;
    bVar1 = *(byte *)(uVar6 + 0xe);
    *(char *)(piVar7 + 9) = cVar3;
    *(char *)(bVar1 + 0x13) = cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar10 = *(int *)(&stack0x000001ac + iVar8);
  software_interrupt(0x54);
  if (!SCARRY4(param_3,3)) {
    *(byte *)((int)puVar5 + 6) = bVar1;
    uVar4 = uRam00000107;
    uVar9 = uRam000000fb;
    uVar2 = *(ushort *)(iVar10 + 0x38);
    bVar1 = *(byte *)(iRam00000103 + 0x12);
    *(short *)(iRam000000ff + 0x30) = (short)uRam00000107;
    puVar11 = (uint *)((uint)uVar2 + (unaff_r11 >> 0x1a) + (uint)(0xa3 < bVar1));
    puVar11[0x10] = (uint)puVar11;
    *(undefined4 *)(&stack0x00000360 + iVar8) = 0;
    uVar6 = puVar11[6];
    *(undefined4 *)(*(int *)(&stack0x00000350 + iVar8) + 0x3c) = uVar4;
    *puVar11 = uVar9 & uVar12;
    puVar11[1] = (uint)puVar11;
    puVar11[2] = (uint)(byte)uVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(uVar9 + 0xe) = (char)(uVar6 >> 0xf);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


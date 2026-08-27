/* FUN_2c455bda @ 0x2c455bda */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c456238) */
/* WARNING: Removing unreachable block (ram,0x2c4562aa) */
/* WARNING: Removing unreachable block (ram,0x2c45623a) */
/* WARNING: Removing unreachable block (ram,0x2c456164) */
/* WARNING: Removing unreachable block (ram,0x2c456172) */
/* WARNING: Removing unreachable block (ram,0x2c455cb2) */
/* WARNING: Removing unreachable block (ram,0x2c4561ee) */
/* WARNING: Removing unreachable block (ram,0x2c45619a) */
/* WARNING: Removing unreachable block (ram,0x2c4561f8) */
/* WARNING: Removing unreachable block (ram,0x2c45624a) */
/* WARNING: Removing unreachable block (ram,0x2c45625c) */
/* WARNING: Removing unreachable block (ram,0x2c45622c) */
/* WARNING: Removing unreachable block (ram,0x2c4561fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c455bda(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  int unaff_r4;
  undefined4 *unaff_r5;
  int iVar8;
  int iVar9;
  uint unaff_r6;
  undefined4 *puVar10;
  ushort *unaff_r7;
  uint *puVar11;
  int unaff_r9;
  int unaff_r10;
  int unaff_r11;
  int iVar12;
  int in_r12;
  undefined4 unaff_pc;
  bool bVar13;
  bool bVar14;
  uint in_fpscr;
  undefined4 in_cr2;
  undefined4 in_cr5;
  undefined4 in_cr8;
  undefined4 in_cr9;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr15;
  float fVar15;
  float fVar16;
  undefined8 in_d23;
  undefined8 in_d25;
  undefined8 in_d26;
  undefined4 *puStack00000074;
  int in_stack_000000e0;
  int in_stack_000001f4;
  int in_stack_000002f4;
  uint in_stack_000003bc;
  int iStack_48;
  
  puVar10 = (undefined4 *)(unaff_r6 * 8);
  *(short *)(param_2 + unaff_r4) = (short)unaff_r4;
  puVar6 = (uint *)(uint)*unaff_r7;
  *unaff_r5 = puVar6;
  unaff_r5[1] = unaff_r4;
  unaff_r5[2] = unaff_r7;
  puStack00000074 = unaff_r5 + 3;
  uVar5 = *puVar6;
  uVar7 = (uVar5 >> 0x10) << 0x18 | (uVar5 >> 0x18) << 0x10 | (uVar5 & 0xff) << 8 |
          uVar5 >> 8 & 0xff;
  *(short *)(uVar5 + 0xe) = (short)puVar6[1];
  coprocessor_store(10,in_cr8,unaff_r9 + 0x8c);
  *(short *)(unaff_r5[0x22] + 0x10) = (short)uVar7;
  if ((unaff_r6 & 0x20000000) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (puVar10 == (undefined4 *)0x0) {
    unaff_r5[0x13] = param_1;
    coprocessor_store(8,in_cr9,uVar7 - 0x290);
    iVar8 = (int)in_stack_000003bc >> 2;
    disableDataAbortInterrupts();
    software_interrupt(0xe3);
    *(int *)(uVar7 + ((int)in_stack_000003bc >> 5) * 2) = in_stack_000001f4;
    *(short *)(in_stack_000001f4 + 0x74) = (short)iVar8;
    *(int *)(in_stack_000003bc + 0x70) = iVar8;
    *(uint *)(in_stack_000003bc + 0x78) = in_stack_000003bc;
    VectorRoundShiftLeft(in_d26,0x3f,0x40,0);
    uRam00000080 = (undefined1)iVar8;
                    /* WARNING: Could not recover jumptable at 0x2c4561d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(in_r12 + -4))
                      (*(undefined4 *)(in_r12 + -0x28),*(undefined4 *)(in_r12 + -0x24),
                       (int)in_stack_000003bc >> 5,*(undefined4 *)(in_r12 + -0x20));
    return uVar4;
  }
  *(uint *)(in_stack_000002f4 + 0x54) = uVar5;
  puVar6 = (uint *)(in_stack_000002f4 + -7);
  iVar12 = unaff_r11 + 0xc0;
  coprocessor_storelong(4,in_cr5,iVar12);
  coprocessor_moveto2(0,0xc,uVar5,puVar6,in_cr11);
  *(short *)(in_stack_000002f4 + 0xd) = (short)in_stack_000002f4;
  uRam2c455d08 = uVar5 + 0x2c455c & in_stack_000003bc;
  bVar14 = 0xfffffffc < uVar5;
  iVar8 = uVar5 + 3;
  bVar13 = iVar8 == 0;
  if (bVar14 && !bVar13) {
    *(char *)(in_stack_000003bc + 0x1c) = (char)in_stack_000003bc;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *puVar6 = uVar5;
  *(undefined4 *)(in_stack_000002f4 + -3) = 0x2c455ce0;
  *(uint **)(in_stack_000002f4 + 1) = puVar6;
  *(uint *)(in_stack_000002f4 + 5) = in_stack_000003bc;
  *(undefined4 **)(in_stack_000002f4 + 9) = puStack00000074;
  if ((!bVar14 || bVar13) && (!SCARRY4(uVar5,3))) {
    func_0x2c8fff68(in_stack_000003bc - ((int)in_stack_000003bc >> 6),uVar5,*puVar10,puVar10[1]);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar10 = puStack00000074;
  if (bVar14 && !bVar13) {
    puVar10 = (undefined4 *)(uint)bRam2c455cfa;
  }
  if (bVar13) {
    *(char *)(in_stack_000002f4 + *(char *)(in_stack_000002f4 * 2)) = (char)puVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined4 *)(unaff_r10 + 0xf0) = unaff_pc;
  *(undefined4 **)(unaff_r10 + 0xf4) = puVar10;
  *(short *)(in_stack_000000e0 + 0x74) = (short)uVar5;
  puVar11 = puVar6 + iVar8 * 0x40;
  *(short *)(puVar10 + 3) = (short)puVar6;
  if (puVar11 == (uint *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar9 = (in_stack_000000e0 + 0x4e) * 0x40000;
  *(undefined2 *)((int)puVar10 * 0x2000000 + 4) = 0;
  *(undefined1 *)(iVar8 * 0x100 + 0x12) = 0;
  pbVar3 = _LAB_2c4ba520;
  iVar2 = _LAB_2c4ba4e8;
  if (((uint)puVar10 & 0x80) == 0 || iVar8 * 0x100 == 0) {
    iVar8 = (in_stack_000000e0 + 0x4e) * 0x4000;
    uVar5 = iVar8 >> 0x1f;
    *(uint **)(uVar5 + 0xc) = puVar11;
    *(int *)(uVar5 + 0x18) = iVar8 >> 10;
    iVar9 = iRam00016237;
    iVar2 = iRam00016233;
    iVar8 = iRam0001622b;
    coprocessor_store(3,in_cr2,iRam0001622b);
    *(int *)(iRam0001622b + 8) = iRam00016233;
    *(int *)(iVar9 + iVar2) = iVar9;
    if ((uVar5 & 0x4000) == 0) {
      *(char *)(iVar9 + 0x12) = (char)iVar2;
      *(int *)(iVar8 + 0x40) = iVar8;
      iVar2 = uVar5 * -0x40000;
      if (uVar5 * 0x40000 == 0 && iVar2 != 0) {
        software_bkpt(0x4b);
        VectorShiftLeft(in_d23,in_d25,2,1);
        software_hlt(0x36);
        coprocessor_store(1,in_cr15,0x1623b);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(undefined2 *)(iVar2 + 0x20) = 0;
      coprocessor_store(0,in_cr12,unaff_r10);
      *(uint *)((int)puVar11 + uVar5) = uVar5 * 0x40000;
      *(short *)(iVar2 + 0xe) = (short)iVar8 * 0x4000 + -0x8e;
    }
    coprocessor_loadlong(0xd,in_cr9,iVar12);
    *(uint *)(iVar9 + 0xc) = uVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((-1 < *(int *)(in_stack_000002f4 + 0x7b9) << 0x16) ||
     ((uint)*_LAB_2c4ba520 != (int)puVar10 * 0x2000000)) {
    *_LAB_2c4ba520 = 0;
    *(uint *)(iVar2 + 0x7c0) = *(uint *)(iVar2 + 0x7c0) & 0xfffffdff;
    FUN_2c673b08(2);
    uVar5 = puVar11[(uint)*pbVar3 * 4 + 1];
    uVar4 = FUN_2c674348();
    iVar8 = _LAB_2c4ba4e8;
    fVar16 = (float)VectorUnsignedToFloat(uVar5,(byte)(in_fpscr >> 0x16) & 3);
    fVar15 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
    if (4.0 <= fVar16 / fVar15) {
      uVar4 = 0xffffffff;
    }
    else {
      uVar4 = VectorFloatToUnsigned((fVar16 / fVar15) * fRam2c4ba518,3);
    }
    *(undefined4 *)(_LAB_2c4ba4e8 + 0x7cc) = uVar4;
    FUN_2c673b08(2);
    *(uint *)(iVar8 + 0x7c0) = *(uint *)(iVar8 + 0x7c0) | 0x200;
  }
  uVar5 = 0;
  if ((*(uint *)(iVar9 + 0xc) & 1) != 0) {
    uVar5 = 0x40;
  }
  if ((int)(*(uint *)(iVar9 + 0xc) << 0x1e) < 0) {
    uVar5 = uVar5 | 0x80;
  }
  *(uint *)(_LAB_2c4ba4e8 + 0x7c0) = *(uint *)(_LAB_2c4ba4e8 + 0x7c0) & 0xffffff3f | uVar5;
  iVar8 = FUN_2c674568();
  if (iVar8 == 0) {
    FUN_2c4b649c(unaff_r9 + 0x8c,iVar12);
    FUN_2c4b7b04(iStack_48 << 1);
  }
  iVar8 = _LAB_2c4ba654;
  if (*(int *)(_LAB_2c4ba4e8 + 0x7a8) << 0x13 < 0) {
    uVar5 = *(uint *)(iVar9 + 4);
    if (_LAB_2c4ba508 < uVar5) {
      uVar5 = 0xa000;
    }
    else if (_LAB_2c4ba50c < uVar5) {
      uVar5 = 0x8000;
    }
    else if (_LAB_2c4ba510 < uVar5) {
      uVar5 = 0x6000;
    }
    else if (uVar5 < 0xac44) {
      uVar5 = (uint)(0x5621 < uVar5) << 0xd;
    }
    else {
      uVar5 = 0x4000;
    }
    *(uint *)(_LAB_2c4ba654 + 0x7a8) = *(uint *)(_LAB_2c4ba654 + 0x7a8) & 0xffff1fff | uVar5;
    *(uint *)(iVar8 + 0x7ac) = *(uint *)(iVar8 + 0x7ac) & 0xffff1fff | uVar5;
  }
  cVar1 = *(char *)((int)puVar11 + in_stack_000000e0 + 0x58);
  if (cVar1 == '\x02') {
    uVar5 = 0;
  }
  else if (cVar1 == '\x03') {
    uVar5 = 0x40;
  }
  else if (cVar1 == '\x04') {
    uVar5 = 0x80;
  }
  else if (cVar1 == '\x06') {
    uVar5 = 0xc0;
  }
  else {
    if (cVar1 != '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_2c673ca8(_LAB_2c4ba674,_LAB_2c4ba670);
    }
    uVar5 = 0x100;
  }
  cVar1 = *(char *)((int)puVar11 + in_stack_000000e0 + 0x59);
  *(uint *)(_LAB_2c4ba654 + 0x798) = *(uint *)(_LAB_2c4ba654 + 0x798) & 0xfffffe3f | uVar5;
  uVar5 = 0;
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      uVar5 = 8;
    }
    else if (cVar1 == '\x02') {
      uVar5 = 0x18;
    }
    else {
      if (cVar1 != '\x03') {
                    /* WARNING: Subroutine does not return */
        FUN_2c673ca8(_LAB_2c4ba66c,_LAB_2c4ba668);
      }
      uVar5 = 0x38;
    }
  }
  *(uint *)(_LAB_2c4ba654 + 0x798) = *(uint *)(_LAB_2c4ba654 + 0x798) & 0xffffffc7 | uVar5;
  if (-1 < *(int *)(iVar9 + 0x14) << 0x1b) {
    return 0;
  }
  uVar4 = FUN_2c4bfdb8(*(byte *)(iVar9 + 0x10) >> 1);
  FUN_2c4b797c(3,uVar4);
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x1bcf,DAT_2c4ba4e4,DAT_2c4ba4e0,DAT_2c4ba4f4,*(byte *)(iVar9 + 0x10) >> 1,uVar4);
}


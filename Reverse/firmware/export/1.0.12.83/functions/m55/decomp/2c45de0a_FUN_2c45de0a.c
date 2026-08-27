/* FUN_2c45de0a @ 0x2c45de0a */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c099fe6) */
/* WARNING: Removing unreachable block (ram,0x2c099fee) */
/* WARNING: Removing unreachable block (ram,0x2c099578) */
/* WARNING: Removing unreachable block (ram,0x2c0995a0) */
/* WARNING: Removing unreachable block (ram,0x2c09969a) */
/* WARNING: Removing unreachable block (ram,0x2c0995a8) */
/* WARNING: Removing unreachable block (ram,0x2c0995c0) */
/* WARNING: Removing unreachable block (ram,0x2c0995d2) */
/* WARNING: Removing unreachable block (ram,0x2c0995d4) */
/* WARNING: Removing unreachable block (ram,0x2c0995de) */
/* WARNING: Removing unreachable block (ram,0x2c09960c) */
/* WARNING: Removing unreachable block (ram,0x2c0996c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c45de0a(void)

{
  undefined4 uVar1;
  code *pcVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  undefined4 *unaff_r4;
  int unaff_r5;
  uint uVar6;
  uint unaff_r6;
  undefined1 unaff_r7;
  int iVar7;
  uint uVar8;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr12;
  undefined8 in_d5;
  undefined8 in_d19;
  undefined4 uStack00000034;
  
  *(undefined1 *)(unaff_r5 + 0x11) = unaff_r7;
  uStack00000034 = *unaff_r4;
  iVar7 = unaff_r4[4];
  bVar3 = *(byte *)(iVar7 + 0xd);
  uVar6 = unaff_r6 >> 0xb;
  if (uVar6 != 0xfffffffa && !SCARRY4(uVar6,6)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  software_interrupt(0x1e);
  bVar4 = *(byte *)(uVar6 + iVar7 + 0x5c);
  uVar8 = iVar7 + 0x148;
  cVar5 = *(char *)(uVar6 + 0x2c45e772);
  if (unaff_r6 == 0) {
    _NMI = 0;
    iVar7 = (int)_MasterStackPointer;
    software_bkpt(0xe0);
    *(int *)(int)cVar5 = iVar7;
    ((int *)(int)cVar5)[1] = uVar8;
    *(ushort *)((uint)bVar3 + iVar7) = (ushort)bVar4;
    uRam0000000f = 0xffffffff;
    *(undefined1 *)(bVar4 + 0xff) = 0xff;
    coprocessor_moveto(0,7,4,(uVar8 >> 0x1f) << 2,in_cr0,in_cr1);
    iVar7 = *(int *)(*(int *)(-((int)uVar8 >> 0x1f) + 0x7d) + -((int)uVar8 >> 0x1f) + 0x11);
    *(int *)(_DAT_2c09a2d0 + 0x10) = _DAT_2c09a2d0;
    uVar1 = VectorGetElement(in_d5,2,2,0);
    VectorMultiplyAccumulate(in_d19,uVar1,2,1);
    coprocessor_moveto(0,7,4,(iVar7 >> 0x10) << 1,in_cr0,in_cr12);
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xe0,0x2c09955e);
    (*pcVar2)();
  }
  *(undefined2 *)(bVar4 + 4) = 0x98c4;
                    /* WARNING: Does not return */
  pcVar2 = (code *)software_udf(0xa5,0x2c0998cc);
  (*pcVar2)();
}


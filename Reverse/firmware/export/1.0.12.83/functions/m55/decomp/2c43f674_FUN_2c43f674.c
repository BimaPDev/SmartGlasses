/* FUN_2c43f674 @ 0x2c43f674 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c43f674(uint param_1,int param_2,uint param_3,int param_4)

{
  ushort uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int unaff_r4;
  undefined4 uVar6;
  undefined1 *puVar7;
  uint uVar8;
  int unaff_r6;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int unaff_r8;
  int unaff_lr;
  char cVar12;
  undefined1 uVar13;
  bool bVar14;
  undefined1 uVar15;
  bool bVar16;
  char cVar17;
  undefined4 in_cr6;
  undefined4 in_cr8;
  undefined4 in_cr10;
  undefined4 uStack00000140;
  
  puVar4 = (undefined4 *)(param_3 >> (param_1 & 0xff));
  *(short *)(param_2 + 0x20) = (short)unaff_r6;
  *(int *)((int)puVar4 + unaff_r4) = param_4;
  uVar8 = *(uint *)(unaff_r6 + 0xc);
  uVar10 = *(undefined4 *)(unaff_r6 + 0x10);
  uStack00000140 = *puVar4;
  puVar5 = (undefined4 *)puVar4[2];
  uVar6 = puVar4[3];
  iVar9 = puVar4[4];
  *puVar5 = uVar6;
  puVar5[1] = uVar10;
  *(undefined4 *)(unaff_r8 + -0x58) = uVar6;
  *(undefined4 *)(unaff_r8 + -0x54) = uVar6;
  cVar17 = SBORROW4(uVar8,0xd6);
  *(undefined4 **)(iVar9 + param_4) = puVar5 + 2;
  uVar13 = (uVar8 >> 0x15 & 1) != 0;
  puVar7 = (undefined1 *)(uVar8 >> 0x16);
  uVar15 = puVar7 == (undefined1 *)0x0;
  cVar12 = '\0';
  coprocessor_storelong(1,in_cr8,unaff_lr + 0x3d4);
  func_0x2b54b554();
  do {
    *(uint *)(puVar7 + 100) = uVar8;
    uVar8 = uRam000000d1;
    puVar7 = puRam000000cd;
    iVar3 = iRam000000c9;
    iVar9 = iRam000000c5;
    if (!(bool)uVar15 && cVar12 == cVar17) {
      halt_baddata();
    }
    iVar11 = *(int *)(iRam000000c5 + 0x28);
    if ((bool)uVar13) {
      *(undefined1 *)(iVar11 + 0x1c) = *(undefined1 *)(iVar11 + 0x13);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(int *)(puRam000000cd + 0x50) = iVar11;
    *(uint *)(puVar7 + iVar3) = uVar8;
    iVar9 = iVar9 >> 0x11;
    if (iVar9 == -0xac) {
      *(short *)(_PendSV + 0x1f) = (short)iVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar13 = ((int)puVar7 >> 5 & 1U) != 0;
    iVar3 = (int)puVar7 >> 6;
    cVar12 = iVar3 < 0;
    uVar15 = iVar3 == 0;
    cVar17 = '\x01';
  } while (SCARRY4(iVar9,0xac));
  uVar8 = *(uint *)(iVar9 + 0xb4);
  uVar2 = (undefined1)(iVar9 + 0xb8);
  if (!(bool)uVar13 || (bool)uVar15) {
    bVar16 = uVar8 < 0xffffffcd;
    uVar8 = uVar8 + 0x33;
    bVar14 = (int)uVar8 < 0;
    if (bVar16) {
      *(undefined1 *)(*(int *)(iVar9 + 0xb0) + 0x19) = uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if ((bool)uVar15) {
      *puVar7 = uVar2;
      uVar1 = *(ushort *)(_MasterStackPointer + 0x30);
      *(char *)(uVar8 + 0xe) = (char)_NMI;
      *(uint *)(uVar1 + 0x5c) = (uint)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar7 = (undefined1 *)0x0;
    bVar14 = false;
  }
  _BusFault = (int)*(short *)(uVar8 + iVar3);
  *(short *)(_BusFault + 0x3e) = (short)puVar7;
  _NMI = 0;
  _MasterStackPointer = iVar3;
  _Reset = iVar9 + 0xb8;
  _HardFault = &stack0x000001ac;
  _MemManage = puVar7;
  *(short *)(iVar9 + 0xda) = (short)iVar3;
  coprocessor_moveto(6,1,4,puVar7,in_cr10,in_cr6);
  _LAB_2c43f8f8 = iVar3;
  uRam2c43f8fc = (uint)*(ushort *)(iRam2c43f80c + 0x26);
  if (!bVar14) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uRam2c43f94c = 0x2c43f900;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


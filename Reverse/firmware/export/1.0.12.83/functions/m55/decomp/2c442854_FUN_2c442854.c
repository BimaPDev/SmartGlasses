/* FUN_2c442854 @ 0x2c442854 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c44272c) */
/* WARNING: Removing unreachable block (ram,0x2c44272e) */
/* WARNING: Removing unreachable block (ram,0x2c44278a) */
/* WARNING: Removing unreachable block (ram,0x2c44270c) */
/* WARNING: Removing unreachable block (ram,0x2c44278c) */
/* WARNING: Removing unreachable block (ram,0x2c44215c) */
/* WARNING: Removing unreachable block (ram,0x2c4420fe) */
/* WARNING: Removing unreachable block (ram,0x2c44215e) */
/* WARNING: Removing unreachable block (ram,0x2c442708) */
/* WARNING: Removing unreachable block (ram,0x2c4421fe) */
/* WARNING: Removing unreachable block (ram,0x2c44225c) */
/* WARNING: Removing unreachable block (ram,0x2c441c2a) */
/* WARNING: Removing unreachable block (ram,0x2c441c2c) */
/* WARNING: Removing unreachable block (ram,0x2c441c5a) */
/* WARNING: Removing unreachable block (ram,0x2c441c2e) */
/* WARNING: Removing unreachable block (ram,0x2c441c18) */
/* WARNING: Removing unreachable block (ram,0x2c442108) */
/* WARNING: Removing unreachable block (ram,0x2c442738) */
/* WARNING: Removing unreachable block (ram,0x2c4427a0) */
/* WARNING: Removing unreachable block (ram,0x2c4424c4) */
/* WARNING: Removing unreachable block (ram,0x2c4427a2) */
/* WARNING: Removing unreachable block (ram,0x2c442228) */
/* WARNING: Removing unreachable block (ram,0x2c44280a) */
/* WARNING: Removing unreachable block (ram,0x2c442810) */
/* WARNING: Removing unreachable block (ram,0x2c442816) */
/* WARNING: Removing unreachable block (ram,0x2c44276e) */
/* WARNING: Removing unreachable block (ram,0x2c442728) */
/* WARNING: Removing unreachable block (ram,0x2c4f22c8) */
/* WARNING: Removing unreachable block (ram,0x2c4f22d0) */
/* WARNING: Removing unreachable block (ram,0x2c4f22e8) */
/* WARNING: Removing unreachable block (ram,0x2c4f2284) */
/* WARNING: Removing unreachable block (ram,0x2c4f235a) */
/* WARNING: Removing unreachable block (ram,0x2c4f2294) */
/* WARNING: Removing unreachable block (ram,0x2c4f2366) */
/* WARNING: Removing unreachable block (ram,0x2c4f2382) */
/* WARNING: Removing unreachable block (ram,0x2c4f22fc) */
/* WARNING: Removing unreachable block (ram,0x2c4f2300) */
/* WARNING: Removing unreachable block (ram,0x2c4f2306) */
/* WARNING: Removing unreachable block (ram,0x2c4f230a) */
/* WARNING: Removing unreachable block (ram,0x2c4f231a) */
/* WARNING: Removing unreachable block (ram,0x2c4f231c) */
/* WARNING: Removing unreachable block (ram,0x2c4f2328) */
/* WARNING: Removing unreachable block (ram,0x2c4f2330) */
/* WARNING: Removing unreachable block (ram,0x2c4f23b8) */
/* WARNING: Removing unreachable block (ram,0x2c4f229a) */
/* WARNING: Removing unreachable block (ram,0x2c4f22a6) */
/* WARNING: Removing unreachable block (ram,0x2c4f22a8) */
/* WARNING: Removing unreachable block (ram,0x2c4f22aa) */
/* WARNING: Removing unreachable block (ram,0x2c4f23ac) */
/* WARNING: Removing unreachable block (ram,0x2c4f22ba) */
/* WARNING: Removing unreachable block (ram,0x2c4f23b2) */
/* WARNING: Removing unreachable block (ram,0x2c4f2346) */
/* WARNING: Removing unreachable block (ram,0x2c4f23cc) */
/* WARNING: Removing unreachable block (ram,0x2c4f2354) */
/* WARNING: Removing unreachable block (ram,0x2c442770) */
/* WARNING: Removing unreachable block (ram,0x2c442776) */
/* WARNING: Removing unreachable block (ram,0x2c442782) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c442854(undefined4 param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  int *unaff_r7;
  char in_OV;
  
  software_hlt(0x31);
  uVar1 = param_2 >> 0x1b;
  puVar3 = (undefined2 *)((uint)&stack0x00000188 >> 9);
  do {
    iVar4 = *(int *)((int)unaff_r7 * -0x80000000 + 0x44);
    *(int *)(uVar1 + (int)unaff_r7) = (int)unaff_r7 * -0x80000000;
    if (in_OV != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Ignoring partial resolution of indirect */
    _Reset = param_3;
    _NMI = puVar3;
    _HardFault = iVar4;
    _MemManage = unaff_r7;
    uVar1 = 0x14;
    _MasterStackPointer = param_2;
  } while (iVar4 != 0);
  iVar4 = *unaff_r7;
  iVar5 = unaff_r7[1];
  uVar2 = (uint)*(short *)(iVar4 * 2);
  *(short *)(_LAB_2c442ba4 + 0x3c) = (short)puVar3;
  if (0x78 < uVar2) {
    if (SBORROW4(uVar2,0x79)) {
      halt_baddata();
    }
    iRam00000087 = ((uint)unaff_r7 & 1) << 0x1a;
    uRam0000007f = uVar1;
    iRam00000083 = iVar4;
    iRam0000008b = iVar5;
    func_0x2d11b654(0x14,0x8f);
  }
  *puVar3 = (short)puVar3;
  Reset_1 = Reset_1;
  ram0x00000009 = ram0x00000009;
  ram0x0000000d = ram0x0000000d;
  ram0x00000011 = ram0x00000011;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


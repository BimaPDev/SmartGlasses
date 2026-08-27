/* FUN_2c4632cc @ 0x2c4632cc */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c4632cc(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int extraout_r3;
  undefined4 *puVar7;
  undefined4 *unaff_r7;
  undefined4 unaff_r8;
  int unaff_r10;
  undefined4 unaff_pc;
  char in_OV;
  undefined4 in_cr2;
  undefined4 in_cr11;
  undefined4 in_cr14;
  
  iVar2 = _LAB_2c463474;
  if (in_OV == '\0') {
    *unaff_r7 = param_4;
    unaff_r7[1] = iVar2;
    unaff_r7[2] = unaff_r7;
    coprocessor_store(3,in_cr11,unaff_r8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  piVar4 = (int *)func_0x2c4d5be6(param_1 | (uint)unaff_r7);
  iRam2c463d7c = *piVar4;
  iVar6 = piVar4[1];
  *(int *)(iVar2 + extraout_r3) = iRam2c463d7c;
  iVar3 = (int)piVar4 + (0xc - iRam2c463d7c);
  coprocessor_loadlong(6,in_cr2,unaff_pc);
  *(short *)(extraout_r3 + 0x38) = (short)iVar3;
  coprocessor_loadlong(7,in_cr14,unaff_r10 + -0xe4);
  piVar4 = (int *)(uint)*(ushort *)((int)unaff_r7 + 0x6d);
  *(undefined1 *)((int)unaff_r7 + 0x6d + iVar3) = 0;
  software_interrupt(0x95);
  iRam2c463d80 = extraout_r3 + -0x52;
  *(short *)((int)piVar4 + iRam2c463d80) = (short)iVar6;
  puVar7 = (undefined4 *)(iVar2 + -0xf);
  *piVar4 = iRam2c463d7c;
  piVar4[1] = iRam2c463d80;
  piVar4[2] = (int)piVar4;
  piVar4[3] = iRam2c463d7c << 0x1d;
  piVar4[4] = (int)puVar7;
  piVar4[5] = (int)unaff_r7 + 0x69;
  *puVar7 = 0xde;
  *(undefined4 **)(iVar2 + -0xb) = puVar7;
  *(char *)(iRam2c463d80 + (int)puVar7) = (char)puVar7;
  uRam2c463d84 = 0x2c463d78;
  iRam2c463d78 = iVar3;
  if (SCARRY4(iVar6,0xa9)) {
    *(short *)((iRam2c463d7c >> 0x20) * 0x10000000 + 0x1c) = (short)iRam2c463d80;
    *(int *)(iVar3 + 0x3c) = (int)*(char *)((int)puVar7 + iVar3);
    software_interrupt(0x34);
    func_0x2cd5968c();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar5 = iVar2 + 0x10d;
  *(uint *)(iVar2 + 0x145) = uVar5;
  *(short *)(iVar2 + 0x11d) = (short)((int)uVar5 >> 0x11);
  *(undefined2 *)((int)unaff_r7 + 0x7b) = 0x11c;
  if (0xffffff65 < uVar5) {
    *(char *)(((int)uVar5 >> 0x11) + 0x1d) = (char)((int)uVar5 >> 0x11);
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0x2f,0x2c463970);
    (*pcVar1)();
  }
  return iVar3;
}


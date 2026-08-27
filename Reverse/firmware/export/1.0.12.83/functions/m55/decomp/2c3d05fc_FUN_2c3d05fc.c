/* FUN_2c3d05fc @ 0x2c3d05fc */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c3d072e) */
/* WARNING: Removing unreachable block (ram,0x2c3d0a04) */
/* WARNING: Removing unreachable block (ram,0x2c3d0790) */

void FUN_2c3d05fc(int param_1)

{
  char cVar1;
  short sVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  int unaff_r6;
  int unaff_r7;
  char in_OV;
  int in_stack_c3d08008;
  
  uRam587a0fd8 = (undefined1)unaff_r6;
  *(undefined1 *)(unaff_r7 + 7) = uRam587a0fd8;
  iVar7 = iRam2c3d0668;
  iVar5 = (uint)(byte)(&stack0x00000148)[param_1 * 0x1000] * 4;
  *(undefined4 *)(iRam2c3d0668 + 0x5c) = 0x2c3d07ec;
  *(char *)(iVar7 + 0x2c3d07ec) = (char)iVar7;
  *(undefined1 *)(iVar5 + 2) = uRam587a0fd8;
  iVar7 = 0x2c3d1541;
  uRam587a1d2d = 0x41;
  uVar3 = SUB41(&stack0x00000148,0);
  if (in_OV != '\0') {
    uRam587a1d2d = 0x41;
    sVar2 = *(short *)(iVar5 + 0x2c3d07ec);
    iVar7 = (int)sVar2;
    (&stack0x00000148)[iVar7] = uRam587a0fd8;
    uVar4 = (undefined1)sVar2;
    iRam2c3d156f = unaff_r6;
    *(undefined1 *)(iVar7 + 0x2c3d07ec) = uVar4;
    *(undefined1 *)(iVar7 + 0x2c3d07ec) = uVar4;
    *(undefined1 *)(iVar7 + 0x2c3d07ec) = uVar4;
    cVar1 = *(char *)(iVar7 + 0x2c3d07ec);
    iVar7 = (int)cVar1;
    iVar5 = (int)&stack0x00000148 * 8;
    *(undefined1 *)(iVar7 * 2) = uVar3;
    *(char *)(iVar7 + 0x2c3d07ec) = cVar1;
  }
  uVar4 = (undefined1)iVar7;
  *(undefined1 *)(iVar7 + 0x2c3d07ec) = uVar4;
  *(undefined1 *)(iVar7 + 0x2c3d07ec) = uVar4;
  *(undefined1 *)(iVar7 + 0x2c3d07ec) = uVar4;
  *(undefined1 *)(unaff_r6 + 0x587a0fd8) = 0xd8;
  *(undefined1 *)(iVar7 + 0x2c3d07ec) = uVar4;
  *(undefined1 *)(iVar7 + 0x2c3d07ec) = uVar4;
  *(undefined1 *)(iVar7 + 0x2c3d07ec) = uVar4;
  *(undefined1 *)(iVar7 + 0x2c3d07ec) = uVar4;
  *(undefined1 *)(iVar5 + unaff_r6 * 4) = uVar3;
  uRam8e25474c = 0x60;
  puVar6 = (undefined1 *)(uint)*(byte *)(in_stack_c3d08008 * 0x10 + 0x14);
  *puVar6 = 0xd8;
  puVar6[0x2c3d07ec] = uVar3;
  uRam587a1120 = 0x34;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


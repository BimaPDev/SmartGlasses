/* FUN_2c14d600 @ 0x2c14d600 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c06245a) */
/* WARNING: Removing unreachable block (ram,0x2c0623aa) */

longlong FUN_2c14d600(uint param_1,undefined4 param_2,int param_3,uint param_4)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int unaff_r4;
  uint unaff_r5;
  uint *unaff_r6;
  uint *puVar6;
  uint unaff_r7;
  uint *puVar7;
  uint unaff_pc;
  char in_CY;
  uint uStack_10;
  
  puVar7 = &uStack_10;
  uStack_10 = param_1;
  if (in_CY != '\0') {
    *(short *)(param_3 + 0x1e) = (short)param_4;
    *(uint *)(unaff_r5 + 0x44) = param_4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar4 = *(uint *)(unaff_r7 + 0x4c);
  *unaff_r6 = uVar4;
  unaff_r6[1] = unaff_r5;
  unaff_r6[2] = unaff_r7;
  puVar6 = unaff_r6 + 3;
  iVar3 = (int)puVar6 >> 7;
  do {
  } while (iVar3 == 0);
  uVar1 = *(ushort *)(uVar4 + param_1);
  uVar4 = uVar4 >> (unaff_r7 - 0x50 & 0xff);
  *(uint *)(uVar4 + unaff_r4) = param_1;
  if (uVar4 == 0x3f) {
    *(uint *)param_1 = param_1;
    *(int *)(param_1 + 4) = iVar3;
    *(uint **)(param_1 + 8) = puVar6;
    uRam0000005f = SUB42(puVar6,0);
    iVar3 = *(int *)(((int)param_1 >> 9) + 0x58);
    piVar5 = (int *)(uint)*(byte *)(param_1 + 10);
    *piVar5 = iVar3 << 0x19;
    piVar5[1] = 0x3f;
    piVar5[2] = 0;
    piVar5[3] = (uint)uVar1;
    piVar5[4] = iVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar2 = *(ushort *)(uVar4 + param_1);
  *(uint *)(uVar4 + 0x10) = param_1;
  uVar4 = param_1 >> 0x14;
  *(short *)(uVar4 + 0xe) = (short)param_1;
  *(short *)(uVar4 + 0xe) = (short)param_1;
  *(char *)(uVar1 - 5) = (char)uVar1;
  puVar6 = (uint *)(uVar4 + param_4);
  *puVar6 = (uint)uVar2;
  puVar6[1] = (uint)puVar6;
  if (unaff_pc < 0x1f0020 && (uint)CARRY4(uVar4,param_4) <= unaff_pc - 0x1f001f ||
      unaff_pc - 0x1f001f == (uint)!CARRY4(uVar4,param_4)) {
    puVar7 = (uint *)(iVar3 + 6 >> 0x19 & 0x1480000);
  }
  return (ulonglong)*puVar7 << 0x20;
}


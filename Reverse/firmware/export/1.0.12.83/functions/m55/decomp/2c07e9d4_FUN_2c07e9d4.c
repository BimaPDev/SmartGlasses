/* FUN_2c07e9d4 @ 0x2c07e9d4 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c07ea7a) */
/* WARNING: Removing unreachable block (ram,0x2c07eac0) */
/* WARNING: Removing unreachable block (ram,0x2c07eafc) */
/* WARNING: Removing unreachable block (ram,0x2c07ea68) */
/* WARNING: Removing unreachable block (ram,0x2c07e9e8) */
/* WARNING: Removing unreachable block (ram,0x2c07f678) */
/* WARNING: Removing unreachable block (ram,0x2c07f732) */
/* WARNING: Removing unreachable block (ram,0x2c07f736) */
/* WARNING: Removing unreachable block (ram,0x2c07f6e4) */
/* WARNING: Removing unreachable block (ram,0x2c07f6ea) */
/* WARNING: Removing unreachable block (ram,0x2c07f6f2) */
/* WARNING: Removing unreachable block (ram,0x2c07f76a) */
/* WARNING: Removing unreachable block (ram,0x2c07f700) */
/* WARNING: Removing unreachable block (ram,0x2c07f704) */
/* WARNING: Removing unreachable block (ram,0x2c07f70c) */
/* WARNING: Removing unreachable block (ram,0x2c07f784) */
/* WARNING: Removing unreachable block (ram,0x2c07f786) */
/* WARNING: Removing unreachable block (ram,0x2c07f82e) */
/* WARNING: Removing unreachable block (ram,0x2c07f832) */
/* WARNING: Removing unreachable block (ram,0x2c07f740) */
/* WARNING: Removing unreachable block (ram,0x2c07f7e4) */
/* WARNING: Removing unreachable block (ram,0x2c07f742) */
/* WARNING: Removing unreachable block (ram,0x2c07f7e8) */
/* WARNING: Removing unreachable block (ram,0x2c07f7f4) */
/* WARNING: Removing unreachable block (ram,0x2c07f87a) */
/* WARNING: Removing unreachable block (ram,0x2c07f880) */
/* WARNING: Removing unreachable block (ram,0x2c07f888) */
/* WARNING: Removing unreachable block (ram,0x2c07f896) */
/* WARNING: Removing unreachable block (ram,0x2c07f8a0) */
/* WARNING: Removing unreachable block (ram,0x2c07f8c2) */
/* WARNING: Removing unreachable block (ram,0x2c07f78e) */
/* WARNING: Removing unreachable block (ram,0x2c07f844) */
/* WARNING: Removing unreachable block (ram,0x2c07f7b2) */
/* WARNING: Removing unreachable block (ram,0x2c07f70e) */
/* WARNING: Removing unreachable block (ram,0x2c07f71a) */
/* WARNING: Removing unreachable block (ram,0x2c07f71e) */
/* WARNING: Removing unreachable block (ram,0x2c07f724) */
/* WARNING: Removing unreachable block (ram,0x2c07f726) */
/* WARNING: Removing unreachable block (ram,0x2c07f780) */
/* WARNING: Removing unreachable block (ram,0x2c07f7b6) */
/* WARNING: Removing unreachable block (ram,0x2c07f7bc) */
/* WARNING: Removing unreachable block (ram,0x2c07f852) */
/* WARNING: Removing unreachable block (ram,0x2c07f7be) */
/* WARNING: Removing unreachable block (ram,0x2c07f7ca) */
/* WARNING: Removing unreachable block (ram,0x2c07f846) */
/* WARNING: Removing unreachable block (ram,0x2c07f782) */
/* WARNING: Removing unreachable block (ram,0x2c07f6b8) */
/* WARNING: Removing unreachable block (ram,0x2c07f72a) */
/* WARNING: Removing unreachable block (ram,0x2c07f72c) */
/* WARNING: Removing unreachable block (ram,0x2c07f66e) */
/* WARNING: Removing unreachable block (ram,0x2c07f730) */
/* WARNING: Removing unreachable block (ram,0x2c07f67e) */
/* WARNING: Removing unreachable block (ram,0x2c07f6be) */
/* WARNING: Removing unreachable block (ram,0x2c07f68a) */
/* WARNING: Removing unreachable block (ram,0x2c07f6c4) */
/* WARNING: Removing unreachable block (ram,0x2c07f6ce) */
/* WARNING: Removing unreachable block (ram,0x2c07f69c) */
/* WARNING: Removing unreachable block (ram,0x2c07f6d4) */
/* WARNING: Removing unreachable block (ram,0x2c07f60a) */
/* WARNING: Removing unreachable block (ram,0x2c07f6d6) */
/* WARNING: Removing unreachable block (ram,0x2c07f6d8) */
/* WARNING: Removing unreachable block (ram,0x2c07f620) */
/* WARNING: Removing unreachable block (ram,0x2c07f6c2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_2c07e9d4(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int iVar5;
  int unaff_r7;
  
  *(char *)(unaff_r7 + 0x1b) = (char)unaff_r7;
  *(int *)(unaff_r5 + 0x24) = unaff_r6;
  if ((unaff_r4 & 0x10) == 0 || (unaff_r4 & 0xf) == 0) {
    unaff_r6 = param_2 >> 10;
  }
  uVar1 = *(uint *)(param_4 + 0x6c);
  *(short *)(uVar1 + 0x1e) = (short)unaff_r5;
  uVar3 = uVar1 >> 8;
  uVar2 = *(uint *)(unaff_r6 + 4);
  *(char *)(((int)uVar1 >> 0x20) + 0x19) = (char)param_4;
  *(int *)(uVar3 + 0x28) = unaff_r6;
  iVar5 = (int)(uVar3 << 2) >> 9;
  uVar4 = uVar2 >> 8;
  if ((uVar2 >> 7 & 1) != 0 && uVar4 != 0) {
    *(int *)((uVar1 >> 8) + 0x24) = iVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  _DAT_00000068 = iVar5;
  return CONCAT44(uVar3,uVar4 << 1);
}


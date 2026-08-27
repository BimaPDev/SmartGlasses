/* FUN_2c0a76a0 @ 0x2c0a76a0 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c0a774c) */
/* WARNING: Removing unreachable block (ram,0x2c0a776a) */
/* WARNING: Removing unreachable block (ram,0x2c0a7756) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c0a76a0(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int unaff_r4;
  uint unaff_r7;
  undefined4 unaff_r9;
  undefined4 in_cr4;
  undefined4 in_cr9;
  undefined4 in_cr14;
  longlong lVar6;
  uint uStack00000108;
  
  cVar1 = *(char *)(param_3 + param_1);
  uVar2 = unaff_r4 * -0x80000000;
  uStack00000108 = (uint)*(ushort *)((unaff_r7 >> 0x10) + 0x3e);
  lVar6 = (ulonglong)uVar2 << 0x20;
  if (unaff_r4 * -0x7fffffff != 0) {
    *(char *)(uStack00000108 + 0x15) = cVar1;
    coprocessor_load(7,in_cr4,cVar1 + -0x23c);
    uRam0000000e = (undefined2)_DAT_0000006c;
    puVar3 = (undefined4 *)(uint)*(ushort *)(uVar2 + 0x3a);
    *(undefined4 **)((uVar2 + 1 >> 3) + 0x58) = puVar3;
    uVar4 = *puVar3;
    uVar5 = puVar3[1];
    *(undefined4 *)(uVar2 + 1) = uVar4;
    lVar6 = func_0x2c0c4740(1,uVar2,uVar4,uVar5,param_1,param_3);
  }
  *(int *)((int)((ulonglong)lVar6 >> 0x20) + 0x60) = (int)lVar6;
  coprocessor_moveto(10,3,5,unaff_r9,in_cr9,in_cr14);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


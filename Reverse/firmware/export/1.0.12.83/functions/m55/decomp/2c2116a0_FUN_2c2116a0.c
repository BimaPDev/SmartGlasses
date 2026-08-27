/* FUN_2c2116a0 @ 0x2c2116a0 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x2c2118e0) overlaps instruction at (ram,0x2c2118de)
    */
/* WARNING: Removing unreachable block (ram,0x2c21190e) */

void FUN_2c2116a0(int param_1)

{
  int iVar1;
  uint uVar2;
  int extraout_r2;
  uint extraout_r3;
  int unaff_r7;
  char cVar3;
  uint in_stack_0000029c;
  
  iVar1 = *(int *)(param_1 * 0x10000000 + 0x30);
  uVar2 = iVar1 * 0x100000;
  iVar1 = iVar1 << 0x16;
  if (0 < (int)uVar2) {
    uVar2 = (uVar2 & 0xffffff) >> 6 ^ in_stack_0000029c;
    cVar3 = uVar2 == 0;
    func_0x2c813c4c(iVar1,in_stack_0000029c,iVar1,unaff_r7 << 2,param_1);
    func_0x2c811a4e();
    iVar1 = func_0x2c711852();
    if (cVar3 == '\0') {
      *(int *)(iVar1 * 2) = iVar1;
    }
    *(uint *)(uVar2 + extraout_r2) = uVar2;
    *(int *)(iVar1 << 0x19) = iVar1 * 0x1000000;
    *(ushort *)(((int)(uVar2 ^ extraout_r3) >> 0x20) + 0xe) =
         (ushort)*(byte *)(iVar1 * 0x1000000 + 8) << 0xc;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


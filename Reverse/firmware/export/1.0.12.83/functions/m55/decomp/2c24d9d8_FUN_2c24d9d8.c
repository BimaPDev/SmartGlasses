/* FUN_2c24d9d8 @ 0x2c24d9d8 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c24d9d8(undefined4 param_1,int param_2,int param_3,uint param_4)

{
  byte bVar1;
  int *extraout_r1;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_4 >> 0x18;
  bVar1 = (byte)(param_4 >> 0x18);
  *(byte *)(unaff_r6 + 0x1e) = bVar1;
  *(uint *)(unaff_r5 + param_3) = uVar3;
  if (uVar3 == 0) {
    *(undefined4 *)(param_2 + 4) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (3 < uVar3) {
    iVar2 = *(int *)(param_2 + 0x60) + unaff_r4;
    *(uint *)(uVar3 + 0x44) = uVar3;
    func_0x2bb8fc14();
    *(char *)extraout_r1 = (char)iVar2;
    *extraout_r1 = iVar2 * 8;
    *(short *)extraout_r1 = (short)iVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(ushort *)(param_4 + 4) = (ushort)bVar1;
  *(undefined4 *)((int)uVar3 >> 3) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


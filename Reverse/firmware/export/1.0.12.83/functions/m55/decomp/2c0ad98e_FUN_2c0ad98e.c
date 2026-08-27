/* FUN_2c0ad98e @ 0x2c0ad98e */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c0ad98e(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined1 unaff_pc;
  undefined1 auStack_1c [20];
  
  *(short *)((param_1 >> 0x18) + 0x2e) = (short)param_4;
  *(uint *)(*(ushort *)(*(ushort *)(param_4 + 0x1e) + 0x76) + 0x50) =
       (uint)CONCAT11(uRam00000037,iRam00000033._3_1_);
  iVar2 = (int)&stack0x00000008 * 8;
  iVar5 = (int)&stack0x00000008 >> ((uint)&stack0x00000008 & 0xff);
  *(undefined4 *)(iVar2 + 0x37) = 0;
  puVar4 = (undefined2 *)((uint)auStack_1c & 0xb6000000);
  puVar4[(int)&stack0x00000008 * 4] = 0;
  puVar4[(int)&stack0x00000008 * 4] = 0;
  *(undefined2 *)((int)&stack0x00000008 * 0x10) = 0x33;
  *puVar4 = 0;
  puVar4[(int)&stack0x00000008 * 4] = 0;
  *(int *)(iVar2 + 0x20) = iVar5;
  *(undefined4 *)(iVar2 + 0x20) = 0x33;
  iVar2 = iRam00000033;
  uVar3 = *(undefined4 *)(iRam00000033 + 0x1c);
  *(undefined1 *)(*(int *)(iRam00000033 + 100) + 0x973) = unaff_pc;
  uVar1 = *(ushort *)(iVar2 + 0x24);
  *(char *)(iVar5 + 0xb) = (char)uVar3;
  *(char *)(puVar4 + (uVar1 + 4) * 0x100000) = (char)iVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


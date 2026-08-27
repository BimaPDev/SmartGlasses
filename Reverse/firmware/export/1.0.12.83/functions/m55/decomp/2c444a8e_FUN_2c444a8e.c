/* FUN_2c444a8e @ 0x2c444a8e */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c444aea) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c444a8e(uint param_1,undefined2 param_2,int param_3,uint param_4)

{
  code *pcVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  uint *puVar5;
  
  while( true ) {
    puVar5 = (uint *)(uint)*(byte *)(param_4 + 0x13);
    iVar4 = *(int *)(unaff_r4 + unaff_r5);
    *(byte *)((int)puVar5 + 0x1e) = *(byte *)(param_4 + 0x13);
    if (param_1 != 0xfffffffe) {
      uVar2 = *(ushort *)(param_3 + 0x26);
      if (0xfffffffd < param_1) {
        *(undefined2 *)(unaff_r4 + (int)puVar5) = param_2;
        *(char *)(((int)(uint)uVar2 >> 0xd) + -0x24 + iVar4) = (char)param_2;
        software_interrupt(0x27);
        sVar3 = *(short *)(puVar5[1] * 2);
        *(short *)((*puVar5 >> 2) + 2) = (short)*puVar5;
        *(short *)(int)sVar3 = sVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar4 = (int)_Reserved1 >> 1;
    if ((_Reserved1 & 1) == 0 || iVar4 == 0) break;
    software_bkpt(0xf9);
    param_4 = (uint)*(ushort *)(unaff_r6 + 0x24);
    param_3 = (int)puVar5 << 1;
    unaff_r4 = unaff_r6 << 0x1e;
    param_1 = 0;
  }
  *(short *)(unaff_r6 + 2) = (short)iVar4;
  *(undefined1 *)(iVar4 + 0xc) = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0x15,0x2c444aaa);
  (*pcVar1)();
}


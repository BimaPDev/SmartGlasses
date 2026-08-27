/* FUN_2c114e70 @ 0x2c114e70 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c114e70(undefined4 param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int unaff_r4;
  uint unaff_r5;
  int unaff_r6;
  int unaff_r7;
  bool in_CY;
  undefined8 in_d24;
  undefined8 in_d30;
  
  *(int *)(unaff_r6 + 0x60) = param_2;
  uVar1 = unaff_r5;
  if (!in_CY) {
    uVar3 = param_2 + 0x78;
    uVar1 = unaff_r7 >> 0x1e;
    *(char *)(uVar1 + 0x18) = (char)(unaff_r7 >> 0x1e);
    puVar2 = (undefined4 *)(uVar1 >> 10);
    while( true ) {
      puVar2 = (undefined4 *)((int)puVar2 - unaff_r4);
      if ((unaff_r5 & 0x40000000) == 0) break;
      uVar3 = (uint)*(byte *)(unaff_r4 + 0x1f);
      VectorCompareGreaterThan(0,in_d30,2);
      puRam00000086 = puVar2;
    }
    *(undefined2 *)(uVar1 * 0x40000 + 0x36) = 0;
    VectorShiftLeft(in_d24,0x3b,0x40,1);
    *(undefined2 *)(uVar3 + 0x1e) = 0;
    uRam000000cc = *puVar2;
    uVar1 = (uint)*(byte *)(puVar2[1] + 0xc);
    iRam000000d0 = (int)*(short *)(puVar2 + unaff_r5 + 2);
    uRam000000c8 = 200;
    uRam000000d4 = uVar1;
  }
  *(short *)(uVar1 * 0x1000 + 0x10) = (short)(uVar1 << 2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


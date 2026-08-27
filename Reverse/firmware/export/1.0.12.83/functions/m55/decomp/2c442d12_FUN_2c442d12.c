/* FUN_2c442d12 @ 0x2c442d12 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c442d12(undefined4 param_1,uint param_2)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  int unaff_r4;
  uint unaff_r5;
  undefined4 unaff_r6;
  undefined4 *unaff_r7;
  undefined4 in_cr15;
  
  *unaff_r7 = param_1;
  unaff_r7[1] = param_2;
  unaff_r7[2] = unaff_r5;
  unaff_r7[3] = unaff_r6;
  unaff_r7[4] = unaff_r7;
  *(uint *)(param_2 + 0x68) = unaff_r5;
  uRam2c4435e4 = SUB41(unaff_r7,0);
  sVar2 = *(short *)((int)unaff_r7 + param_2);
  *(short *)(unaff_r5 + 6) = (short)param_2;
  uVar6 = *(uint *)(param_2 + 0xc1);
  uVar3 = unaff_r5 & 0xff;
  *(undefined1 *)(uVar6 + param_2 + 0xc5) = 0xb8;
  if ((uVar3 != 0 || uVar6 < 0x80000001 && (uint)(0xffffff3e < param_2) <= uVar6 + 0x80000000) &&
      (uVar3 == 0 || ((uint)(int)sVar2 >> uVar3 - 1 & 1) == 0) ||
      (uint)(int)sVar2 >> (unaff_r5 & 0xff) == 0) {
    coprocessor_loadlong(7,in_cr15,param_2 + 0x43d);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar1 = *(byte *)(unaff_r4 + (int)unaff_r7);
  *(uint *)(unaff_r5 + uVar6) = unaff_r5;
  iVar5 = func_0x2c8529d8();
  uVar4 = (undefined1)(unaff_r5 * 0x40);
  *(undefined1 *)(unaff_r5 * 0x40 + 8) = uVar4;
  *(undefined1 *)((uint)bVar1 + iVar5) = uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


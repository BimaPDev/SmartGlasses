/* FUN_2c4404fc @ 0x2c4404fc */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_2c4404fc(undefined2 param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  int iVar3;
  int unaff_r7;
  undefined4 unaff_r10;
  undefined4 in_cr0;
  
  uRam2c44009a = *(ushort *)(param_3 + param_4);
  puVar1 = (undefined4 *)(uint)uRam2c44009a;
  *(undefined4 *)(unaff_r4 * 2) = unaff_r6;
  coprocessor_loadlong(9,in_cr0,unaff_r10);
  *(undefined2 *)(unaff_r7 + 0x10) = param_1;
  iVar3 = *(int *)(unaff_r4 + 0x20);
  if (_LAB_2c44022c == 0) {
    *(short *)(iVar3 + 0xc) = (short)unaff_r5;
    uVar2 = (uint)*(byte *)((int)puVar1 * 0x40000000 + 0x13);
    *(short *)(uVar2 + 10) = (short)unaff_r6;
    *puVar1 = 0;
    puVar1[1] = 0x2c440088;
    puVar1[2] = uVar2;
    puVar1[3] = iVar3;
    if ((int)puVar1 * 0x40000000 < 0) {
      uRam2c4400c6 = 0x88;
      if (unaff_r4 < -3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      return CONCAT44(unaff_r5,param_2);
    }
  }
  else {
    *(short *)(unaff_r4 + 0x20) = (short)_LAB_2c44022c;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


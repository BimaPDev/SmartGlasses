/* FUN_2c0b7d54 @ 0x2c0b7d54 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c0b7d54(undefined4 param_1,byte param_2,uint param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  byte unaff_r4;
  uint unaff_r5;
  uint uVar3;
  int unaff_r11;
  undefined4 unaff_lr;
  undefined4 in_cr3;
  
  *(byte *)(param_4 + 9) = unaff_r4 & param_2;
  *(char *)(_DAT_2c0b7e78 + 5) = (char)_DAT_2c0b7ecc;
  *(uint *)unaff_r5 = unaff_r5;
  iVar2 = *(int *)((param_3 & unaff_r5) + 0x78);
  uVar3 = *(ushort *)(iVar2 + 0x10) - 0xb3;
  uVar1 = uVar3 >> 0x14;
  *(short *)(*(int *)(iVar2 + 100) + 0x20) = (short)uVar3;
  coprocessor_loadlong(0xe,in_cr3,unaff_r11 + 0x1e8);
  *(int *)(uVar1 + 0x294) = iVar2;
  *(undefined4 *)(uVar1 + 0x298) = unaff_lr;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


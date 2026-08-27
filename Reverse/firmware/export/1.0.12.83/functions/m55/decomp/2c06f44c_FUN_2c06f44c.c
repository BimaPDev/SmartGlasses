/* FUN_2c06f44c @ 0x2c06f44c */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c06f44c(undefined4 param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_r5;
  int unaff_r7;
  undefined8 in_d22;
  
  iVar2 = _DAT_2c06f514;
  pbVar1 = (byte *)(_DAT_2c06f514 + 0x1f);
  *(char *)(_DAT_2c06f514 + 0x1a) = (char)unaff_r7;
  iVar3 = (int)(uint)*pbVar1 >> 2;
  *(undefined4 *)(param_2 + 0x54) = unaff_r5;
  *(int *)(iVar2 + 0x20) = iVar3;
  *(short *)(unaff_r7 + 0x1e) = (short)iVar3;
  VectorShiftLeft(in_d22,0x12,0x40,1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


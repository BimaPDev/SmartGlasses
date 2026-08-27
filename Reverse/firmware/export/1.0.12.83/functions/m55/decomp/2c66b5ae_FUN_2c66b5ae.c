/* FUN_2c66b5ae @ 0x2c66b5ae */

void FUN_2c66b5ae(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_2c670688(param_1,(int)*(short *)(param_2 + 0xe));
  if (iVar1 == -1) {
    *(ushort *)(param_2 + 0xc) = *(ushort *)(param_2 + 0xc) & 0xefff;
  }
  else {
    *(int *)(param_2 + 0x54) = iVar1;
    *(ushort *)(param_2 + 0xc) = *(ushort *)(param_2 + 0xc) | 0x1000;
  }
  return;
}


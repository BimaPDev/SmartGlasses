/* FUN_1011ad1c @ 0x1011ad1c */

int FUN_1011ad1c(int param_1,int param_2,int param_3)

{
  return (param_3 + (uint)*(byte *)(param_1 + 0xc)) / (uint)*(ushort *)(param_1 + 10) -
         (param_2 + (uint)*(byte *)(param_1 + 0xc)) / (uint)*(ushort *)(param_1 + 10);
}


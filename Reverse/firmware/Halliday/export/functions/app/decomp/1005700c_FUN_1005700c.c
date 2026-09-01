/* FUN_1005700c @ 0x1005700c */

void FUN_1005700c(uint param_1)

{
  *(ushort *)(DAT_10057020 + 0x38c) =
       (ushort)(1 << (param_1 & 0xff)) | *(ushort *)(DAT_10057020 + 0x38c);
  return;
}


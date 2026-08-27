/* FUN_14000018 @ 0x14000018 */

int FUN_14000018(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  int iVar4;
  
  if ((*(char *)(param_1 + 7) == *(char *)(param_1 + 8)) && (*(char *)(param_1 + 9) == '\0')) {
    iVar4 = FUN_14027604(param_1,DAT_1402787c,*(char *)(param_1 + 8),param_4,param_4);
    if (iVar4 == 0) {
      if (*DAT_14027880 == '\0') {
        *DAT_14027880 = '\x01';
        puVar3 = DAT_1402788c;
        *DAT_14027888 = 0xff;
        pbVar2 = DAT_14027884;
        *puVar3 = 0xff;
        bVar1 = *pbVar2;
      }
      else {
        bVar1 = *DAT_14027884;
        pbVar2 = DAT_14027884;
      }
      if (bVar1 == 0) {
        *pbVar2 = (byte)(1 << (uint)*(byte *)(param_1 + 6));
        FUN_1402da3c(0x23);
        FUN_1402da3c(0x18);
        FUN_1402dbf4(0x23);
        FUN_1402dbf4(0x18);
      }
      else {
        *pbVar2 = (byte)(1 << *(sbyte *)(param_1 + 6)) | bVar1;
      }
      FUN_140275c0(DAT_1402787c,0);
      return 0;
    }
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402b0f8(DAT_14000034);
}


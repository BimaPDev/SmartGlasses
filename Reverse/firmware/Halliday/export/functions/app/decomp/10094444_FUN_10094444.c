/* FUN_10094444 @ 0x10094444 */

void FUN_10094444(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = DAT_1009447c + iVar2 * 8;
    if (*(int *)(DAT_1009447c + iVar2 * 8) == param_1) {
      *(byte *)(iVar1 + 6) = *(byte *)(iVar1 + 6) & 0xfe;
      return;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0x10);
  FUN_10094174(3,DAT_10094488,0x157,DAT_10094484,DAT_10094480,param_2);
  return;
}


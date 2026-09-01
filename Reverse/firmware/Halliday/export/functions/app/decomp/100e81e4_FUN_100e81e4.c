/* FUN_100e81e4 @ 0x100e81e4 */

void FUN_100e81e4(void)

{
  int *piVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_100e822c;
  piVar1 = DAT_100e8220;
  if (*DAT_100e8220 == 0) {
    *DAT_100e8228 = DAT_100e8224;
    *DAT_100e8230 = 0;
    FUN_1011dc50(uVar2);
    FUN_1013c65a(DAT_100e8234,*(undefined4 *)(DAT_100e8234 + 4),*(undefined4 *)(DAT_100e8234 + 8));
    FUN_1013c65a(DAT_100e8238,*(undefined4 *)(DAT_100e8238 + 4),*(undefined4 *)(DAT_100e8238 + 8));
    FUN_1013c65a(DAT_100e823c,*(undefined4 *)(DAT_100e823c + 4),*(undefined4 *)(DAT_100e823c + 8));
    *piVar1 = 1;
  }
  return;
}


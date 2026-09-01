/* FUN_100e7f20 @ 0x100e7f20 */

undefined4 FUN_100e7f20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  switch(*(undefined1 *)(DAT_100e7f68 + 8)) {
  case 1:
    FUN_1011e930(0);
    break;
  case 2:
    FUN_1011e93a(0);
    break;
  case 3:
    FUN_1011e94c(0,*(undefined2 *)(DAT_100e7f68 + 0xc),*(undefined2 *)(DAT_100e7f68 + 0xe),
                 *(undefined1 *)(DAT_100e7f68 + 0x10));
    break;
  case 4:
    uVar1 = 0;
    if (*(int *)(DAT_100e7f68 + 0xc) != 0 || *(int *)(DAT_100e7f68 + 0x10) != 0) {
      uVar1 = DAT_100e7f6c;
    }
    FUN_1011e942(0,uVar1,param_3,*(int *)(DAT_100e7f68 + 0x10),param_4);
  }
  return 0;
}


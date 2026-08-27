/* FUN_2c5d9c78 @ 0x2c5d9c78 */

undefined4 *
FUN_2c5d9c78(undefined4 *param_1,undefined4 param_2,undefined1 param_3,int param_4,int param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 6) = param_3;
  param_1[1] = param_2;
  param_1[0x15] = param_13;
  param_1[7] = param_1 + 9;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[0xf] = 0;
  param_1[0x16] = 0;
  *(undefined2 *)(param_1 + 0x10) = 0x48;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *param_1 = DAT_2c5d9e2c;
  FUN_2c607048(param_2,0x48);
  iVar1 = (int)*(short *)(param_1 + 0x10);
  if (iVar1 < 0) {
    iVar1 = iVar1 + 1;
  }
  FUN_2c606e68(param_1[1],iVar1 >> 1,0);
  FUN_2c606d84(param_1[1],0xff00ff00,0);
  FUN_2c606d9c(param_1[1],2,0);
  FUN_2c606d90(param_1[1],0x5c,0);
  switch(*(undefined1 *)(param_1 + 6)) {
  case 0:
    FUN_2c5d8cf8(param_1,param_6,param_10);
    break;
  case 1:
    if (*(int *)(param_4 + 4) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,DAT_2c5d9e38,0x59,DAT_2c5d9e48,DAT_2c5d9e44);
    }
    FUN_2c5d8f2c(param_1,param_4,param_6,param_8,param_10);
    break;
  case 2:
    FUN_2c5d9190(param_1,param_6,param_7,param_10,param_11);
    break;
  case 3:
    if (*(int *)(param_4 + 4) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,DAT_2c5d9e38,0x126,DAT_2c5d9e40,DAT_2c5d9e3c);
    }
    FUN_2c5d931c(param_1,param_4,param_8,param_10);
    break;
  case 4:
    FUN_2c5d8d84(param_1,param_8);
    break;
  case 5:
    FUN_2c5d8810(param_1,param_12);
    break;
  case 6:
    if ((*(int *)(param_4 + 4) == 0) || (*(int *)(param_5 + 4) == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,DAT_2c5d9e38,0x72,DAT_2c5d9e34,DAT_2c5d9e30);
    }
    FUN_2c5d904c(param_1,param_4,param_8,param_9);
    break;
  case 7:
    FUN_2c5d94e8(param_1,param_4,param_6,param_7,param_8,param_10,param_11);
    break;
  case 8:
    if (*(int *)(param_4 + 4) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,DAT_2c5d9e38,0x2d0,DAT_2c5d9e4c,DAT_2c5d9e44);
    }
    FUN_2c5d9708(param_1,param_4,param_8,param_6,param_10,param_5,param_9,param_7,param_11);
    break;
  case 9:
    FUN_2c5d9990(param_1,param_4,param_8,param_6,param_5,param_9,param_7,param_11);
  }
  return param_1;
}


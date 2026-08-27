/* FUN_2c62f820 @ 0x2c62f820 */

void FUN_2c62f820(int param_1,short *param_2,int param_3)

{
  short sVar1;
  short sVar2;
  
  if (*DAT_2c62f8a8 != '\0') {
    if (param_3 == 0) {
      sVar2 = (param_2[2] + 1) - *param_2;
      sVar1 = (param_2[3] + 1) - param_2[1];
      if (sVar1 == 0 && sVar2 == 0) {
        FUN_2c4993d0(0,0,0,0,*(undefined4 *)(DAT_2c62f8ac + 0x18));
      }
      else {
        FUN_2c4993d0((0x280 - *param_2) - sVar2,param_2[1],sVar2,sVar1,
                     *(undefined4 *)(DAT_2c62f8ac + 0x18));
      }
    }
    else {
      FUN_2c673ac8(param_2,param_3);
    }
  }
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x10) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x14) = 0;
  return;
}


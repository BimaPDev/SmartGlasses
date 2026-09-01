/* FUN_100ea870 @ 0x100ea870 */

void FUN_100ea870(int param_1,undefined4 *param_2,int *param_3)

{
  undefined1 uVar1;
  short *psVar2;
  
  if (param_1 == 0) {
    FUN_1012a726(*param_3);
    FUN_10113fd0(DAT_100ea8c4);
    return;
  }
  if (param_1 == 1) {
    if (((int)((uint)*(byte *)(*param_3 + 0x1c) << 0x1f) < 0) ||
       ((((psVar2 = (short *)*param_2, param_3[0xc] <= (int)*psVar2 &&
          (param_3[0xd] <= (int)psVar2[1])) && ((int)psVar2[2] <= param_3[0xe])) &&
        ((int)psVar2[3] <= param_3[0xf])))) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
    *(undefined1 *)(param_2 + 1) = uVar1;
  }
  return;
}


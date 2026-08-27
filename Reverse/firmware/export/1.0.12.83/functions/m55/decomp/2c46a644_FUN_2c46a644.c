/* FUN_2c46a644 @ 0x2c46a644 */

void FUN_2c46a644(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  int iVar1;
  bool bVar2;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0xc);
    if (-1 < *(int *)(param_1 + 0xc)) {
      do {
        FUN_2c46a5bc(param_1,iVar1);
        bVar2 = iVar1 != 0;
        param_2 = extraout_r1;
        iVar1 = iVar1 + -1;
        param_3 = extraout_r2;
      } while (bVar2);
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined1 *)(param_1 + 0x1c) = 0;
  }
  if (*(int *)(param_1 + 4) != 0) {
    FUN_2c46a5a4();
    param_2 = extraout_r1_00;
    param_3 = extraout_r2_00;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_2c669588();
    param_2 = extraout_r1_01;
    param_3 = extraout_r2_01;
  }
  FUN_2c669588(param_1,param_2,param_3,param_4);
  return;
}


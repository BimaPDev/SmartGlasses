/* FUN_2c637138 @ 0x2c637138 */

void FUN_2c637138(short param_1,int param_2,short param_3,int param_4)

{
  undefined2 uVar1;
  char cVar2;
  int iVar3;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  char in_NG;
  char in_OV;
  
  if (in_NG != in_OV) {
    param_2 = (int)(short)(param_3 + 0x168);
  }
  if (param_4 < 0) {
    param_4 = (int)(short)(param_1 + 0x168);
  }
  iVar3 = param_4 - param_2;
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  uVar1 = (undefined2)unaff_r4;
  if (iVar3 < 0xb5) {
    if (param_4 < param_2) {
      cVar2 = FUN_2c607e50();
      if ((cVar2 == '\x01') && (unaff_r6 != unaff_r4)) {
        FUN_2c6365bc();
        *(undefined2 *)(unaff_r5 + 0x2c) = uVar1;
        FUN_2c636890();
        return;
      }
    }
    else if (((param_2 < param_4) && (cVar2 = FUN_2c607e50(), cVar2 == '\x01')) &&
            (unaff_r6 != unaff_r4)) {
      FUN_2c6365bc();
    }
    *(undefined2 *)(unaff_r5 + 0x2c) = uVar1;
    FUN_2c636890();
    return;
  }
  FUN_2c607df0();
  *(undefined2 *)(unaff_r5 + 0x2c) = uVar1;
  FUN_2c636890();
  return;
}


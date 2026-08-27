/* FUN_1406c9d4 @ 0x1406c9d4 */

void FUN_1406c9d4(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int *param_4)

{
  int iVar1;
  
  iVar1 = FUN_1406cd54(param_1,0x2d,0x3c,DAT_1406c9f8,param_4);
  if (iVar1 == 0) {
    iVar1 = *param_4;
    *(undefined4 *)(iVar1 + 0x18) = 0;
    *(undefined4 *)(iVar1 + 0x1c) = 0;
  }
  *param_3 = DAT_1406c9fc;
  return;
}


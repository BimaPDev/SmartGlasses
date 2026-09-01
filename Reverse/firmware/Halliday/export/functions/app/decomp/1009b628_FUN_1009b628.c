/* FUN_1009b628 @ 0x1009b628 */

bool FUN_1009b628(undefined4 param_1,int param_2,undefined4 param_3,int param_4,short param_5,
                 short param_6)

{
  int iVar1;
  
  iVar1 = DAT_1009b690;
  *(undefined2 *)(DAT_1009b690 + 0x18) = 2;
  *(int *)(iVar1 + 0x14) = param_2 << 1;
  *(undefined4 *)(iVar1 + 0x10) = 0x20;
  FUN_1013d9b0(iVar1);
  *(int *)(iVar1 + 0x40) = param_4 << 1;
  *(int *)(iVar1 + 0x38) = (int)param_5;
  *(int *)(iVar1 + 0x3c) = (int)param_6;
  *(undefined1 *)(iVar1 + 0x45) = 0;
  *(undefined4 *)(iVar1 + 0x34) = 0x20;
  FUN_1013d9f0(iVar1,1);
  iVar1 = FUN_1013da10(iVar1,param_3,param_1,(int)param_5,(int)param_6,param_2);
  if (-1 < iVar1) {
    FUN_1009af48();
  }
  return -1 < iVar1;
}


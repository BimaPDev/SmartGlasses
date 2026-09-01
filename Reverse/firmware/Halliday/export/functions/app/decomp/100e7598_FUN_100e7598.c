/* FUN_100e7598 @ 0x100e7598 */

undefined4 FUN_100e7598(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_18;
  int local_14;
  
  uStack_18 = param_1;
  local_14 = param_2;
  iVar1 = FUN_1013662e();
  uVar2 = 0;
  if (iVar1 != 0) {
    if (param_2 - 6U < 4) {
      if (param_2 == 7) {
        FUN_100d4e5c(param_1,(int)&uStack_18 + 2,(int)&uStack_18 + 3,0);
        local_14._0_2_ = (undefined2)((uint)uStack_18 >> 0x10);
        FUN_100a5b78((DAT_100e7610 - DAT_100e7608) * 0x20 & 0xff00U | 0x330031,DAT_100e760c);
        (*(code *)*DAT_100e7614)(7,&local_14,2);
      }
      FUN_100d4440(0xca,param_2 + 0x16,param_1);
    }
    uVar2 = 1;
  }
  return uVar2;
}


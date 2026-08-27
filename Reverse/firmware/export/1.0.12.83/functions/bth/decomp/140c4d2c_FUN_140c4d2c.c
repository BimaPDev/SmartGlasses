/* FUN_140c4d2c @ 0x140c4d2c */

undefined4 * FUN_140c4d2c(undefined4 *param_1,int param_2,undefined1 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  param_1[1] = (uint)(param_4 != 0);
  uVar1 = DAT_140c4d78;
  if (param_2 == 0) {
    param_3 = 0;
  }
  *(undefined1 *)(param_1 + 3) = param_3;
  *param_1 = uVar1;
  iVar2 = DAT_140c4d7c;
  if (param_2 == 0) {
    param_2 = DAT_140c4d7c;
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = param_2;
  FUN_140e5658((int)param_1 + 0x1d,0,0x100,iVar2,param_4);
  *(undefined1 *)(param_1 + 7) = 0;
  FUN_140e5658((int)param_1 + 0x11d,0,0x100);
  *(undefined1 *)((int)param_1 + 0x21d) = 0;
  return param_1;
}


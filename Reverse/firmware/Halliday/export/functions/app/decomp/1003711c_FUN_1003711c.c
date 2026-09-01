/* FUN_1003711c @ 0x1003711c */

void FUN_1003711c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined3 local_10;
  undefined1 uStack_d;
  int local_c;
  undefined4 uStack_8;
  
  local_c = *(int *)PTR_DAT_1003716c;
  _local_10 = CONCAT13((char)((uint)param_1 >> 0x18),0x103);
  uStack_8 = param_3;
  FUN_100358f0(0xf0,&local_10,3);
  FUN_100a5b78(DAT_10037178 | ((int)PTR_DAT_10037174 - (int)PTR_DAT_10037170) * 0x20 & 0xff00U,
               DAT_10037180,DAT_1003717c);
  if (*(int *)PTR_DAT_1003716c != local_c) {
    FUN_1013cdc0();
  }
  return;
}


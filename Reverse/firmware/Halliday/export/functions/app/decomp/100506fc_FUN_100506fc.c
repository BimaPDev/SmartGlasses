/* FUN_100506fc @ 0x100506fc */

int FUN_100506fc(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  ushort local_1d;
  int local_14;
  
  local_14 = *DAT_100507e0;
  iVar1 = FUN_1004f6cc();
  if (iVar1 != 0) goto LAB_10050740;
  FUN_100a5b78((DAT_100507e8 - DAT_100507e4) * 0x20 & 0xff00U | 0x15c0011,DAT_100507f0,DAT_100507ec)
  ;
  iVar2 = -0x58;
  while( true ) {
    if (*DAT_100507e0 == local_14) break;
    iVar1 = FUN_1013cdc0();
LAB_10050740:
    iVar2 = 0;
    if (*(char *)(iVar1 + 0x212) != '\0') {
      FUN_1011aab8(0);
      if (param_1[10] == '\0') {
        FUN_100a5b78(DAT_100507f4 | (DAT_100507e8 - DAT_100507e4) * 0x20 & 0xff00U,DAT_100507f0,
                     DAT_100507f8,*param_1,*param_1,param_1[1],param_1[1],
                     *(undefined2 *)(param_1 + 8));
        FUN_10119dc2(DAT_100507fc,param_1[1],*param_1);
      }
      local_20 = *param_1;
      local_1e = param_1[1];
      local_1d = *(ushort *)(param_1 + 8) << 8 | *(ushort *)(param_1 + 8) >> 8;
      local_1f = 0;
      iVar2 = FUN_10050564(&local_20,5,param_1);
      FUN_1011aabe(0);
      if (iVar2 < 0) {
        FUN_100a5b78(DAT_10050800 | (DAT_100507e8 - DAT_100507e4) * 0x20 & 0xff00U,DAT_100507f0,
                     DAT_10050804,iVar2,param_1[1],*param_1);
      }
    }
  }
  return iVar2;
}


/* FUN_100201cc @ 0x100201cc */

void FUN_100201cc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  
  puVar1 = DAT_10020228;
  iVar2 = *DAT_10020224;
  FUN_100a5b78((DAT_1002022c - DAT_10020230) * 0x20 & 0xff00U | 0x1de0033,DAT_10020238,DAT_10020234,
               DAT_10020228[3],*DAT_10020228,DAT_10020228[1],param_3);
  thunk_FUN_1009efe8(DAT_1002023c,puVar1,0x20);
  if (*DAT_10020224 != iVar2) {
    FUN_1013cdc0();
  }
  FUN_1012d1ae(DAT_1002023c);
  return;
}


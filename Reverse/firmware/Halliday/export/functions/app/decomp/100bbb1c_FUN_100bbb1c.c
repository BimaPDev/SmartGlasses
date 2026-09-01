/* FUN_100bbb1c @ 0x100bbb1c */

void FUN_100bbb1c(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_20;
  undefined2 local_1c;
  undefined1 local_1a;
  undefined1 local_19;
  undefined4 local_18;
  undefined4 local_14;
  
  uVar3 = (DAT_100bbbe0 - DAT_100bbbdc) * 0x20 & 0xff00;
  FUN_100a5b78(uVar3 | 0xd70031,DAT_100bbbe8,DAT_100bbbe4,*(undefined1 *)((int)param_1 + 7));
  FUN_1011ea48(&local_20,0,0x10);
  iVar2 = thunk_FUN_1009efa0(DAT_100bbbec,&local_20,0x10);
  if ((iVar2 < 1) || (iVar2 = FUN_1011ea18(&local_20,DAT_100bbbf0), iVar2 != 0)) {
    cVar1 = *(char *)((int)param_1 + 7);
    if ((cVar1 != '\x02') &&
       ((uVar3 = (uint)*(byte *)((int)param_1 + 6), 0x16 < uVar3 ||
        (-1 < (int)((DAT_100bbbf8 >> uVar3) << 0x1f))))) {
      local_20 = *param_1;
      local_1c = *(undefined2 *)(param_1 + 1);
      local_1a = 0;
      if (cVar1 == '\x03') {
        local_19 = 10;
      }
      else if ((cVar1 == '\0') && ((uVar3 == 8 || (uVar3 == 0x22)))) {
        local_19 = 0xf;
      }
      else {
        local_19 = 3;
      }
      local_18 = 0x17700003;
      local_14 = 3000;
      FUN_1013687a(&local_20);
    }
  }
  else {
    FUN_100a5b78(uVar3 | 0xda0021,DAT_100bbbe8,DAT_100bbbf4);
  }
  return;
}

